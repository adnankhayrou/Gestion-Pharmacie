#include <stdio.h>

int main(){
 int NM;
 int x1, x2, y1, y2;

 printf("entree premier donnes de point N : ");
 scanf("%d", &x1);
 printf("entree deuxieme donnes de point N : ");
 scanf("%d", &x2);
 printf("entree premier donnes de point M : ");
 scanf("%d", &y1);
 printf("entree deuxieme donnes de point M : ");
 scanf("%d", &y2);

 NM = ((x2-x1)^2 + (y2-y1)^2);

 printf("la distance entre N et M est : %d", NM);



}