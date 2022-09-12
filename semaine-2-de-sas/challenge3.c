#include <stdio.h>
#include <stdlib.h>

int main(){

int x, i, s=0;


printf("entree un nombre : ");
scanf("%d", &x);

for ( i = 1; i <= x; i++)
{
    if (x%i == 0)
    {
       s++;
    }
}

if (s == 2)
{
    printf("le nombre est premier.");
}else
    printf("le nombre est no premier.");

}