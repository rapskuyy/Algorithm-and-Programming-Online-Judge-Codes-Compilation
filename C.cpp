#include <stdio.h>
#include <string.h>

struct student {
	char nama[11];
	int nilai;
};
void swap (struct student *q, struct student *w) {
	struct student tempStudent = *q;
	*q=*w;
	*w=tempStudent;
}
void bubbleSort(struct student c[], int b) {
	for (int i=0;i<b;i++) {
		for (int j=0;j<b-i-1;j++) {
			if (c[j].nilai < c[j+1].nilai) {
				swap(&c[j], &c[j+1]);
			}
			else if (c[j].nilai == c[j+1].nilai) {
				if (strcmp(c[j].nama, c[j+1].nama) > 0) {
					swap(&c[j], &c[j+1]);
				} 
			}
		}
	}
}
int linearSearch (struct student c[], char target[], int b) {
	for (int i=0;i<b;i++) {
		if (!strcmp(target, c[i].nama)) return i;
	}
	return -1;
}
int main () {
	int a, b;
	struct student c[1001];
	scanf ("%d", &a);
	for (int i=1;i<=a;i++) {
		scanf ("%d", &b);
		getchar();
		for (int j=0;j<b;j++) {
			scanf ("%[^#]#%d", c[j].nama, &c[j].nilai);
			getchar();
		}
		bubbleSort(c, b);
		char name[15];
		scanf ("%[^\n]", name);
		int rank = linearSearch(c, name, b);
		printf ("Case #%d: %d\n", i, rank+1);
	}
	return 0;
}
