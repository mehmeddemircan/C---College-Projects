#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

FILE *fileP = fopen("sayilar.txt", "w");

void rastgeleSayiUret()
{

    int rastgeleSayi;
    int uzunluk = 100;

    srand(time(NULL));

    for (int i = 0; i < uzunluk; i++)
    {
        rastgeleSayi = rand() % 1000; // 0 ile 1000 arasi sayi
        fprintf(fileP, "\n%d", rastgeleSayi);
    }
}

int main(int argc, char const *argv[])
{

    if (fileP == NULL)
    {
        printf("Bir hata olustu dosya olusturulurken");
    }
    else
    {
        printf("Basarili bir sekilde dosya olusturuldu ve islem gerceklestirildi");

        rastgeleSayiUret();
    }

    getch();
    return 0;
}
