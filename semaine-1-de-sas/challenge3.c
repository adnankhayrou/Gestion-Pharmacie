#include <stdio.h>

int main(){
float mile, metre;

printf("entree la distance en metre : ");
scanf("%f", &metre);
mile = metre/1609;
printf("la distance en mile est : %.2f", mile);

}