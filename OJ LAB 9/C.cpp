#include <stdio.h>

void calcSound(int sounds[], int len, int* lightning, int min, int max) {
    for (int i = 0; i < len; i++) {
        if (sounds[i] == 0) continue;
        int sound = 1;
        int k = 0;

        if (min == 1 && i == len-1) {
            if (sounds[i] == 1 && sounds[i-1] != 1) (*lightning)++;
            break;
        }

        for (int j = i+1; j < len; j++, k++) {
            if (sounds[j] == 0) {
                if ((sound >= min) && (sound <= max)) (*lightning)++;
                i += k;
                break;
            }
            sound++;

            if (j == len-1) {
                if ((sound >= min) && (sound <= max)) (*lightning)++;
                i += k;
                break;
            }
        }
    }
}

int main() {
    FILE *fptr;
    fptr = fopen("testdata.in", "r");

    int t, n, a, b;
    char soundsStr[10001];
    int sounds[10001];
    fscanf(fptr, "%d\n", &t);
    for (int i = 1; i <= t; i++) {
        fscanf(fptr, "%d %d %d\n", &n, &a, &b);
        fscanf(fptr, "%s\n", soundsStr);

        for (int j = 0; j < n; j++) sounds[j] = soundsStr[j]-48;

        int lightning = 0;

        calcSound(sounds, n, &lightning, a, b);

        printf("Case #%d: %d\n", i, lightning);
    }

    fclose(fptr);
    return 0;
}
