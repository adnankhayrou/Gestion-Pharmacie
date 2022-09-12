#include <stdio.h>
#include <stdlib.h>

int main(){

 float note;

 printf("entree votre note : ");
 scanf("%f", &note);

 if (note < 10)
 {
   printf("tu as recale.");
 }else if (note >= 10 && note < 12 )
 {
   printf("mention passable.");
 }else if (note >= 12 && note < 14)
 {
   printf("mention assez bien.");
 }else if (note >= 14 && note < 16)
 {
   printf("mention bien.");
 }else if (note >= 16)
 {
   printf("mention tres bien.");
 }
 
}