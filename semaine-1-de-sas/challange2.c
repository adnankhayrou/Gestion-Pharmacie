#include <stdio.h>

int main(){
float c, f;

printf("entree la temperature en fahrenheit : ");
scanf("%f", &f);
c = (f-32)/1.8;
printf("la temperature en degre celsius est : %.2f", c);

}

//r