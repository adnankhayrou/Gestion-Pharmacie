#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a, int b){
    int x = a/b;
    int s=0;
    for (int i = 1; i <= x; i++)
    {
        if (x%i == 0){
            s++;
        }
        }
        if (s == 2){
            return true;
        }else
          return false;      
}

int main(){
int a,b;
printf("entree nomber N1 : ");
scanf("%d",&a);
printf("entree nomber N2: ");
scanf("%d",&b);
if (isPremier(a,b)==true){
    printf("le nomber est premie.");
}else
 printf("le nomber n premie.");
}
