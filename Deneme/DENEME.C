#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("bir sayý giriniz: ");
    scanf("%d",&sayi);
    switch(sayi){
    case 1:
        printf("1:pazartesi");
        break;
    case 2:
        printf("2:sali");
        break;
    case 3:
        printf("3:carsamba");
        break;
    case 4:
        printf("4:persembe");
        break;
    case 5:
        printf("5:cuma");
        break;
    case 6:
        printf("6:haftaSonu");
        break;
    default:
        printf("hatali islem");
        break;
    }
    return 0;
}
