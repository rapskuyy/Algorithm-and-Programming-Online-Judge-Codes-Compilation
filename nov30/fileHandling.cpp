#include <stdio.h>

// int main(){

//     FILE *fptr;

//     char string1[100];
//     char string2[100];

//     fptr = fopen("text.txt", "r");

    // fscanf(fptr, "%[^\n]\n", string1);
//     printf("%s\n", string1);

//     fscanf(fptr, "%[^\n]\n", string2);
//     printf("%s\n", string2);

//     fclose(fptr);

//     return 0;
// }


struct Restoran{
    int jumlah;
    char nama[100];
    int harga;
    int total;
};

int main(){

    int i = 0, grandTotal = 0;
    FILE *fptr = fopen("daftarharga.txt", "r");
    
    struct Restoran resto[10];
    
    while(!feof(fptr))
        fscanf(fptr, "%d#%[^#]#%d\n", &resto[i].jumlah, resto[i].nama, &resto[i].harga);
        resto[i].total = resto[i].jumlah * resto[i].harga;
        grandTotal += resto[i].total;
        i++;
    }

    fclose(fptr);

    for(int j = 0; j < i; j++){
        printf("%-3d | %-20s | %-10d | %-10d\n", resto[j].jumlah, resto[j].nama, resto[j].harga, resto[j].total);
        printf("Your grand total is %d", grandTotal);
    }


}