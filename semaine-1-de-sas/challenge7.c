#include <stdio.h>

int main(){
int a, b;


printf("entree la nomber a : ");
scanf("%d", &a);
printf("entree la nomber b : ");
scanf("%d", &b);
float plus = a+b, moins = a-b, multiplication = a*b;
float division = a/b, pourcentage = a%b;
printf("%d + %d = %.2f \n", a, b, plus);
printf("%d - %d = %.2f \n", a, b, moins);
printf("%d * %d = %.2f \n", a, b, multiplication);
printf("%d / %d = %.2f \n", a, b, division);
printf("%d %% %d = %.2f ", a, b, pourcentage);





}