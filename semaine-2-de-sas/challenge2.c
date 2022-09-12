#include <stdio.h>
#include <stdlib.h>

int main(){

int x, i, r;

printf("********pyramide d'etoile********\n");
printf("entree nombre des lignes : ");
scanf("%d", &x);

for ( i = 1; i <= x; i++)
{
    for ( r = 1; r <= x-i; r++)
    {
        printf(" ");
    }

    for ( r = 1; r <= (i*2)-1; r++)
    {
        printf("*");
    }
    
    
   printf("\n");
}


}