#include <stdio.h>
#include <stdlib.h>

int main(){

int r, x, i, s=0;

 printf("entree un nombre : ");
    scanf("%d", &x);

for ( r = 2; r <= x; r++){
    
    for ( i = 1; i <= r; i++){
     if (r%i == 0){
       s++;
      }
    }
      
 if (s == 2){
    printf("le nombre %d est premier.\n", r);
    }else
    printf("le nombre %d est no premier.\n", r);
    
    s=0;
}




}