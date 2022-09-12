#include <stdio.h>
#include <stdlib.h>

int main(){
    int h1, m1, s1;
    int h2, m2, s2;
    int M1, M2;

    printf("entree le premeir instant : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("entree le deuxieme instant : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    M1 = h1*3600+m1*60+s1;
    M2 = h2*3600+m2*60+s2;
    if (M1 > M2){
       printf("Le premier instant vient avant le deuxieme.");
    }else if (M1 < M2){
       printf("Le deuxieme instant vient avant le premier.");
    }else
       printf("Il s'agit du meme instant.");
    
    
}