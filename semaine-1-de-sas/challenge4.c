#include <stdio.h>

int main(){
float mile, metre;

printf("entree la distance en mile : ");
scanf("%f", &mile);
metre = mile*1609;
printf("la distance en metre est : %.2f", metre);

}