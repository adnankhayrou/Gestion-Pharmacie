#include <stdio.h>
#include <stdlib.h>

int main(){

int x, i, s=0, m=0;

for ( i = 1; i <= 5; i++)
{
    printf("entree un nombre : ");
    scanf("%d", &x);

    if (x%10 == 0 && x < 100)
    {
       s = s + x;

       if (m < x)
       {
        m = x;
       }
    }
    
}
printf("le somme est : %d.\n", s);
printf("le max est : %d", m);

}