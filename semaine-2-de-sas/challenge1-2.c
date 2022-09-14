#include <stdio.h>
#include <stdlib.h>

int adfunction(int x, int b){
    return x + b;
}

int main(){
int N1, N2;
printf("entree nombe N1 : ");
scanf("%d", &N1);
printf("entree nombe N2 : ");
scanf("%d", &N2);

printf("N1 + N2 est : %d", adfunction(N1, N2));

}