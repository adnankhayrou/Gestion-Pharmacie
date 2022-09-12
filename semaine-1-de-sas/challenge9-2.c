#include <stdio.h>
#include <stdlib.h>

int main(){

int jour, mois, annee;

printf("entree la date au format (12/09/2021) : ");
scanf("%d/%d/%d", &jour, &mois, &annee);
if (jour < 10)
{
  printf("0%d-", jour);
}else
 printf("%d-", jour);

 switch (mois)
 {
 case 1:
    printf("january");
    break;
    case 2:
    printf("february");
    break;
    case 3:
    printf("march");
    break;
    case 4:
    printf("april");
    break;
    case 5:
     printf("may");
    break;
    case 6:
    printf("june");
    break;
    case 7:
    printf("july");
    break;
    case 8:
    printf("august");
    break;
    case 9:
    printf("september");
    break;
    case 10:
    printf("october");
    break;
    case 11:
    printf("november");
    break;
    case 12: printf("desember");
    break;
    
 }

 printf("-%d", annee);
 


}