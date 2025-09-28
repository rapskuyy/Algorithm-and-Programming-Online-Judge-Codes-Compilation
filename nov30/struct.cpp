#include <stdio.h>
#include <string.h>

struct Nilai{
    int uts, asg, uas;
};


struct Mahasiswa{
    char nim[11];
    char nama[100];
    double gpa;
    struct Nilai nl;
};

void ubahArrStruct(struct Mahasiswa mhsw[]){
    mhsw[0].nl.asg = 75;
}

void ubahStruct(struct Mahasiswa *mhsw1){
    mhsw1->nl.uas = 78;
}

//deklarasi variable struct
// struct Mahasiswa mhsw1 = {"2702275025", "Raphael Brian Pratama", 3.91, 85, 95, 100};
// struct Mahasiswa mhsw[100] = {{"2702275025", "Raphael Brian Pratama", 3.91, 85, 95, 100}, {"2702275024", "Joni Andreas", 4.0, 100, 100, 100}};


int main(){

    struct Mahasiswa mhsw1 = {"2702275025", "Raphael Brian Pratama", 3.91, 85, 95, 100};
    struct Mahasiswa mhsw[100] = {{"2702275025", "Raphael Brian Pratama", 3.91, 85, 95, 100}, {"2702275024", "Joni Andreas", 4.0, 100, 100, 100}};
    
    mhsw1.nl.uts = 90;
    strcpy(mhsw1.nim, "2702275024");

    printf("Masukkan nilai gpa: ");
    scanf("%lf", &mhsw1.gpa);

    printf("GPA %s adalah %.2lf\n", mhsw1.nama, mhsw1.gpa);

    ubahArrStruct(mhsw);
    ubahStruct(&mhsw1);

    strcpy(mhsw[2].nim, "2702297044");
    strcpy(mhsw[2].nama, "Budi");
    mhsw[2].gpa = 3.50;
    printf("Masukkan nilai uts: ");
    scanf("%d", &mhsw[2].nl.uts);
    printf("Masukkan nilai asg: ");
    scanf("%d", &mhsw[2].nl.asg);
    printf("Masukkan nilai uas: ");
    scanf("%d", &mhsw[2].nl.uas);
    printf("Hi %s, your uts score is %d, your uas score is %d, and your asg score is %d\n", mhsw[2].nama, mhsw[2].nl.uts, mhsw[2].nl.uas, mhsw[2].nl.asg);



    return 0;
}