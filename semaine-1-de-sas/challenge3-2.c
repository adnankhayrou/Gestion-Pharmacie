#include <stdio.h>

int main(){

int A, B;
printf("entree la valeur A : ");
scanf("%d", &A);
printf("entree la valeur B : ");
scanf("%d", &B);

if (A < B || A != B)
{
 printf("la valeur de A est : %d\n",B);
 printf("la valeur de B est : %d",A);
}else
 printf("la valeur de A est : %d\n",A);
 printf("la valeur de B est : %d",B);

}