//Lengkapi Kode program yang rumpang ini serta perbaiki penulisan programnya

#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

struct Mahasiswa {
    char nama[50];
    char nim[15];
};

int main() {
    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa di kelas: ");
    scanf("%d", &jumlahMahasiswa);

    if (jumlahMahasiswa > MAX_MAHASISWA) {
        printf("Jumlah mahasiswa melebihi batas maksimum.\n");
        return 1;
    }

    struct Mahasiswa daftarMahasiswa[MAX_MAHASISWA];

    printf("\nMasukkan data mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Mahasiswa ke-%d:\n", i + 1);
        printf("Nama: ");
        scanf(" %s", daftarMahasiswa[i].nama);
        printf("NIM: ");
        scanf("%s", daftarMahasiswa[i].nim);
    }

    printf("\nData Mahasiswa:\n");
    printf("------------------------------------\n");
    printf("No. | Nama             | NIM\n");
    printf("------------------------------------\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%-3d | %-15s | %-15s\n", i + 1, daftarMahasiswa[i].nama, daftarMahasiswa[i].nim);
    }
    printf("------------------------------------\n");

    return 0;
}