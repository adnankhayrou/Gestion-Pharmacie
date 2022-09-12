#include <stdio.h>
#include <stdlib.h>

int main(){

int x, i, r;

printf("********table de multiplication*******\n");
printf("entree un nombre : ");
scanf("%d", &x);

for ( i = 1; i <= 10; i++)
{
  r = x * i;
    printf("%d x %d = %d\n", x, i, r);
}


}