#include <stdio.h>
#include <conio.h>

FILE *fileP = fopen("sayilar.txt", "r");
FILE *fileNewP = fopen("sayilar2.txt", "w");

int main(int argc, char const *argv[])
{

    int sayi[100];
    int sayac = 0;


    if (fileP == NULL)
    {
        printf("Dosya acilamadi");
    }
    else
    {

        bool isAsal = true;

        printf(" sayilar2.txt dosyasinda ki asal sayilar \n");

        for (int i = 0; i < 100; i++)
        {
            fscanf(fileP, "%d", &sayi[i]);

            isAsal = true;
            for (int j = 2; j < sayi[i]; j++)
            {
                if (sayi[i] % j == 0)
                {
                    isAsal = false;
                    break;
                }
            }
        
            if (sayi[i] == 0 || sayi[i] == 1)    // 0 ve 1 asal olmasini onleme
            {
                isAsal = false;
            }

            if (isAsal)
            {

                sayac++;
                fprintf(fileNewP, "\n%d", sayi[i]);
                printf("\n %d", sayi[i]);
            }
        }
        printf("\n\n Toplam asal sayi adedi : %d", sayac);

        fclose(fileP);
        fclose(fileNewP);
    }

    getch();
    return 0;
}
