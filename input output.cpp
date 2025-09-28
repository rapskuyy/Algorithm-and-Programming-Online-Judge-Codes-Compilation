#include <stdio.h>
#include <string.h>

int main()
{
    int number = 150, total; //%d
    char huruf; //%c
    float gpa; //%f
    double average; //%lf
    long long int score; //%lld
    char name[51] = "Raphael Brian"; //%s
   

    printf("%20.7s\n", name); //nge save 20 space sebelum nama, koma untuk brp huruf di print, - untuk rata kiri
    huruf = 'B';
    strcpy(name, "Raphael Pratama");
    printf("%s\n", name);
    
    // scanf("%f", &gpa);
    // printf("Your GPA is %.2f\n", gpa); //2 angka blkg koma
    // scanf("%lld", &score);
    // printf("Your score is %lld\n", score);

    //print : printf, puts, putchar
    //puts lgsg new line tanpa \n, putchar HANYA ngeprint 1 character   
    puts("Bina Nusantara University");
    puts("Master Track Class");
    putchar('A');
    puts("");

    //read: scanf, gets, getchar
    // scanf("%[^\n]", name); //[^\n] agar bisa space dan kata selanjutnya
    // gets(name); //lgsg bisa space tanpa [^\n]
    // printf("%s", name);
    // huruf = getchar();
    // printf("%c", huruf);
    

    scanf("%d", &number); getchar();
    scanf("%[^/n]", name);
    printf("%s", name);

    //print notasi octal dan hexadecimal suatu karakter
    printf("%o", 'A');
    printf("%x", 'A');
    return 0;
}