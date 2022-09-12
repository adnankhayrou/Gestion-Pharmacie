#include <stdio.h>

int main(){
char nom[20], prenom[20], sexe[20];
int age, telephone;

printf("entree votre nom : ");
scanf("%s", &nom);
printf("entree votre prenome : ");
scanf("%s", &prenom);
printf("entree votre sexe : ");
scanf("%s", &sexe);

printf("entree votre age : ");
scanf("%d", &age);
printf("entree votre numero de telephone : ");
scanf("%d", &telephone);

printf("votre nom et %s.\n", nom);
printf("votre prenom et %s.\n", prenom);
printf("votre sexe et %s.\n", sexe);
printf("votre age et %d.\n", age);
printf("votre numero de telephone et %d.\n", telephone);
}

// helo