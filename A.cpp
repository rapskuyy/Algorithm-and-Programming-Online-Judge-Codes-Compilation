#include <stdio.h>

struct Mhs{
	char nama[101];
	char nim[10];
	int age;
	char postalCode[7];
	char placeOfBirth[101];
	char dateOfBirth[101];
	char hs[101];
	int siblings;
	int height;
	char bankAccount[10];
};

int main(){
	
	Mhs mhs1[101];
	int t;
	
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		scanf(" %[^\n]%*c", mhs1[i].nama);
		scanf(" %[^\n]%*c", mhs1[i].nim);
		scanf("%d", &mhs1[i].age);
		scanf(" %[^\n]%*c", mhs1[i].postalCode);
		scanf(" %[^\n]%*c", mhs1[i].placeOfBirth);
		scanf(" %[^\n]%*c", mhs1[i].dateOfBirth);
		scanf(" %[^\n]%*c", mhs1[i].hs);
		scanf("%d", &mhs1[i].siblings);
		scanf("%d", &mhs1[i].height);
		scanf(" %[^\n]%*c", mhs1[i].bankAccount);
		
		printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: %s\n", mhs1[i].nama);
        printf("NIM: %s\n", mhs1[i].nim);
        printf("Umur: %d\n", mhs1[i].age);
        printf("Kode Pos: %s\n", mhs1[i].postalCode);
        printf("Tempat Lahir: %s\n", mhs1[i].placeOfBirth);
        printf("Tanggal Lahir: %s\n", mhs1[i].dateOfBirth);
        printf("Almamater SMA: %s\n", mhs1[i].hs);
        printf("Jumlah Saudara Kandung: %d\n", mhs1[i].siblings);
        printf("Tinggi Badan: %d\n", mhs1[i].height);
        printf("NOMOR REKENING: %s\n", mhs1[i].bankAccount);
	}
	
	
	
	return 0;
}
