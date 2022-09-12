#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int a;
// srand(time(NULL));
// a = rand();
a = time(NULL);
printf("%d\n",a);
a = a%7;
printf("%d\n",a);
switch (a)
{
  case 0:
    printf("lundi");
    break;
    case 1:
    printf("mardi");
    break;
    case 2:
    printf("mercredi");
    break;
    case 3:
    printf("jeudi");
    break;
    case 4:
    printf("venredi");
    break;
    case 5:
    printf("samedi");
    break;
    case 6:
    printf("dimanch");
    break;
}

}