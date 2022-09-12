#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float x1, x2, y1, y2, a, b;
float dis1, dis2, dis;
 printf("entree x1 et y1 : ");
 scanf("%f%f", &x1, &y1);
 printf("entree x2 et y2 : ");
 scanf("%f%f", &x2, &y2);
 printf("entree a et b : ");
 scanf("%f%f", &a, &b);

 dis1 = ((x1-a)*(x1-a)+(y1-b)*(y1-b));
 dis2 = ((x2-a)*(x2-a)+(y2-b)*(y2-b));
 dis = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

 if (dis == dis1+dis2)
 {
   printf("Le point est sur le segment.");
 }else
   printf("Le point n'est pas sur le segment.");
 

}