#include <stdio.h>
#include <stdlib.h>

int main(){

int nbRinvers=0, nbr;

 printf("entree nomber : ");
 scanf("%d", &nbr);

 while (nbr != 0)
 {
   nbRinvers = nbRinvers * 10;
   nbRinvers = nbRinvers + nbr % 10;
   nbr = nbr / 10;
 }

 printf("nomber invers est : %d", nbRinvers);

}