#include <stdio.h>
#include <stdlib.h>

void echanger(int, int);

int main(){
int N1, N2;
printf("entree nombe N1 et N2 : ");
scanf("%d %d", &N1, &N2);

echanger(N1,N2);

printf("Les valeurs apres echange sont : N1 = %d et N2 = %d.", N1, N2);

}

void echanger(int x, int b){
    int a = x;
    x = b;
    b = a;

    printf("N1 = %d.\n", x);
    printf("N2 = %d.\n", b);
    
}