#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void kazanani_belirle ();
int main () {
 // Kazanani belirleyen ve komutta yazdıran fonksiyon
 kazanani_belirle ();
return 0;
}

void kazanani_belirle () {
int sayacB = 0;
int sayacO = 0;
char kullanici_secim [6];
// Rand fonksiyonuyla kademenin hangi aralıkta olduğu belirlenir.
    int alt_kademe = 0, ust_kademe = 2, numara;

char secilen_esya [6];
// Bilgisayarın hangi string değerlerini alıcağını belirleyen dizi.
char degerler[3][6] = {
        "tas",
        "kagit",
        "makas"
};
// Kullanıcıdan hangi deger alınacagini secen, rasgele numara ile tas kagit makasi bilgisayarın seçmesini sağlayan ve 
//en sondada kimin kazandığını seçerek konsola yazdıran do while döngüsü
do{
 srand(time(0));

 for(int i = 0; i < 1; i++) {
    int numara = (rand() % (ust_kademe - alt_kademe + 1)) + alt_kademe;

// Bilgisayarın seçtiği değerin ne olduğunu döndüren dizi
   strcpy(secilen_esya,degerler[numara]);

 }
printf("Bir esya sec: ");
gets(kullanici_secim);

 if(strcmp(kullanici_secim,secilen_esya)==0) {
        printf("Berabere\n");
    }
    else {
        if((strcmp(kullanici_secim, "tas")==0) && (strcmp(secilen_esya, "kagit")==0)) {
                printf("Bilgisayar kazandi kagit tasi yener.\n");
             sayacB++;
        }
        if((strcmp(kullanici_secim, "tas")==0) && (strcmp(secilen_esya, "makas")==0)) {
            printf("Oyuncu kazandi tas makasi yener.\n");
            sayacO++;
        }
        if((strcmp(kullanici_secim, "kagit")==0) && (strcmp(secilen_esya, "makas")==0)) {
                printf("Bilgisayar kazandi makas kagidi yener.\n");
             sayacB++;
        }
        if((strcmp(kullanici_secim, "kagit")==0) && (strcmp(secilen_esya, "tas")==0)) {
            printf("Oyuncu kazandi kagit tasi yener.\n");
             sayacO++;
        }
        if((strcmp(kullanici_secim, "makas")==0) && (strcmp(secilen_esya, "tas")==0)) {
            printf("Bilgisayar kazandi tas makasi yener.\n");
            sayacB++;
        }
        if((strcmp(kullanici_secim, "makas")==0) && (strcmp(secilen_esya, "kagit")==0)) {
            printf("Oyuncu kazandi kagit makasi yener.\n");
            sayacO++;
        }

    }


 }while(sayacB != 5 && sayacO !=5);
// Kimin kazandığını gösteren ve bunu konsola yazan ifade
if(sayacB > sayacO)
    printf("Bilgisayar kazandi /// Bilgisayar Puani : %d - Oyuncu Puani : %d", sayacB, sayacO);

 if(sayacO > sayacB)
    printf("Oyuncu kazandi Bilgisayar Puani : %d - Oyuncu Puani : %d", sayacB, sayacO);
}
