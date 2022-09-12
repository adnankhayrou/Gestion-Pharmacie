#include <stdio.h>
#include <stdlib.h>

int main(){

char c;
printf("entree un caractere : ");
scanf("%c", &c);

if (c >= 'a' && c <= 'z')
{
  printf("%c est une caractere minuscule.", c);
}else if (c >= 'A' && c <= 'Z')
{
  printf("%c est une caractere majuscule.", c);
}else
  printf("%c n'est pas une alphabet.", c);



}