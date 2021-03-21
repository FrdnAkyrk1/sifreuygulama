#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sifre[50];
    char sifredogrulama[50];
    int i;
    int yanlis;

    while(1){
        yanlis=0;
        i=0;

        printf("Parola'yi giriniz: ");
        scanf("%s",&sifre);
        printf("Parolarizi tekrar giriniz: ");
        scanf("%s",&sifredogrulama);

            while( !(sifre[i]=='\0' && sifredogrulama[i]=='\0')){
                if(sifre[i]!=sifredogrulama[i]){
                    printf("Sifreler ayni degil. Tekrar deneyiniz. \n");
                    yanlis=1;
                    break;

                }
                else{
                    i++;
                }

        }
    if(yanlis==0){
        printf("\nSifreler dogru. Kaydiniz tamamlanmistir.\n");
        break;
    }

    }


    return 0;
}
