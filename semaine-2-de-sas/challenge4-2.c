#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int x;
bool isPremier(int a, int b){
     x = a/b;
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
ther :
printf("entree nomber N2: ");
scanf("%d",&b);
if (b <= 0)
{
    goto ther;
}

if (isPremier(a,b)==true){
    printf("le nomber %d est premie.", x);
}else
 printf("le nomber %d non premie.", x);
}
