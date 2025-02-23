//Lengkapi Kode program yang rumpang ini serta perbaiki penulisan programnya

#include <stdio.h>

int main() {
    int jawaban;
    
    printf("Selamat datang di quiz pilihan ganfda!\n");
    printf("Pertanyaan 1: Berapa hasil dari 5 + 3?\n");
    printf("1. 6\n2. 7\n3. 8\n");
    printf("Masukkan pilihan Anda (1-3): ");
    scanf("%d", &jawaban);
    
    if (jawaban == 3) {
        printf("Benar! Lanjut ke pertanyaan berikutnya.\n");
        printf("Pertanyaan 2: Apa ibu kota Jepang?\n");
        printf("1. Beijing\n2. Tokyo\n3. Seoul\n");
        printf("Masukkan pilihan Anda (1-3): ");
        scanf("%d", &jawaban);
        if (jawaban == 2) {
            printf("Benar! Lanjut ke pertanyaan berikutnya.\n");
            printf("Pertanyaan 3: Berapa hasil dari 12 / 4?\n");
            printf("1. 2\n2. 3\n3. 4\n");
            printf("Masukkan pilihan Anda (1-3): ");
            scanf("%d", &jawaban);
            
            if (jawaban == 2) {
                printf("Benar! Lanjut ke pertanyaan berikutnya.\n");
                printf("Pertanyaan 4: Siapa penemu lampu pijar?\n");
                printf("1. Albert Einstein\n2. Thomas Edison\n3. Nikola Tesla\n");
                printf("Masukkan pilihan Anda (1-3): ");
                scanf("%d", &jawaban);
                
                if (jawaban == 2) {
                    printf("Benar! Anda berhasil menyelesaikan quiz dengan sempurna!\n");
                } else {
                    printf("Salah! Coba lagi lain kali.\n");
                }
            } else {
                printf("Salah! Coba lagi lain kali.\n");
            }
        } else {
            printf("Salah! Coba lagi lain kali.\n");
        }
    } else {
        printf("Salah! Coba lagi lain kali.\n");
    }
    
    0;
}
