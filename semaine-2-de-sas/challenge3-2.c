#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int x){
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
int a;
printf("entree un nomber : ");
scanf("%d",&a);
if (isPremier(a)==true){
    printf("le nomber est premie.");
}else
 printf("le nomber n premie.");
}
