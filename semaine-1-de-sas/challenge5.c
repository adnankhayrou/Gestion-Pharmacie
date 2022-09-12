#include <stdio.h>

int main(){
float f, c;


printf("entree la temperature en fahrenheit : ");
scanf("%f", &f);
c = (f/1.8)-32;

if (c < 0)
{
 printf("la temperature en degre celsius est %.2f : tres froid.", c);
}else if (c < 10)
{
 printf("la temperature en degre celsius est %.2f : froid.", c);
}else if (c > 57)
{
 printf("la temperature en degre celsius est %.2f : tres chaud.", c);
 
}else
 printf("la temperature en degre celsius est %.2f : chaud.", c);




}


