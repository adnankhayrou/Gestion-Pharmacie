#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

//--------------------------- CREATION DE LA STRUCTURE --------------------------------

struct Produit{

  char Nom[20];
  char Code[20];
  int Quantite;
  float Prix;
  char date[50];
};

//------------------------------- DES DONNEES POUR TEST --------------------------------------

 struct Produit produit[100]={
  {"dolipran", "g1", 56, 15},
  {"cataflam", "g2", 64, 150},
  {"pirnabol", "g3", 2, 83},
  {"aspirine", "g4", 1, 28}
 };

 int nbProduit = 4;

//--------------------------- DECLARATION DES FONCTIONS --------------------------------

void AjouterUnProduit();
void AjouterPlusieursProduit();
void return_or_exit();
void recherche_par_code();
void recherche_par_quantite();
void Acheter_produit();
void Listetousproduits();
void Liste_par_nom();
void Liste_par_prix();
void affichage();
void Etat_du_stock();
void Alimenter_stock();
bool check_code(char x[10]);
bool check_Quantite_n(int y);
bool check_Quantite(int x);
void Supprimer_produit_par_Code();

//-------------------------------- MAIN FUNCTION ---------------------------------------

int main() {

  int choix;
  
    system("cls");
    printf("\n---------------------Bonjour---------------------\n\n");
    ther:
    printf("-> Tapez 1 pour Ajouter un nouveau produit.\n");
    printf("-> Tapez 2 Pour Ajouter plusieurs nouveaux produits.\n");
    printf("-> Tapez 3 Pour Afficher les produits.\n");
    printf("-> Tapez 4 Pour Acheter un produit.\n");
    printf("-> Tapez 5 Pour Quitter.\n\n");
    printf("======> Votre chois : ");
    scanf("%d",&choix);

    switch (choix)
    {
      case 1:
        AjouterUnProduit();
        break;
      case 2:
        AjouterPlusieursProduit();
        break;
      case 3:
        affichage();
        break;
      case 4:
        Acheter_produit();
        break;
      case 5:
        exit(0);
        break;
      default:
        system("cls");
        printf(" votre choix n'est pas valide, veuillez reessayer. \n\n");
        sleep(2);
        goto ther;
        break;
    }

  return 0;
}

//--------------------------- DEfINITION DES FONCTIONS --------------------------------

//------------------------------- RETURN OR EXIT --------------------------------------

void return_or_exit(){

  int choix;

   do {
    printf("\n-> Tapez 1 Pour retourner au menu principale");
    printf("\n-> Tapez 2 Pour quitter\n");
    printf("\n=====>Votre choix : ");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1 : main(); break;
        case 2 : exit(0); break;
        default : printf(" votre choix n'est pas valide. veuillez reessayer. \n");
    }
    } while (choix < 1 || choix > 2 );
}

//----------------------------- Ajouter Un Produit ------------------------------------

void AjouterUnProduit(){
 int choix;
  system("cls");
  printf("\n------- Ajouter un nouveau produit (Code, Nom, Quantite et le Prix.) -------\n\n");
  printf("Donnez les informations du produit %d.\n\n", nbProduit + 1);

  printf("Entrez le Code     : ");
  scanf("%s", &produit[nbProduit].Code);

  printf("Entrez le Nom      : ");
  scanf("%s", &produit[nbProduit].Nom);
  ther :
  printf("Entrez la Quantite : ");
  scanf("%d", &produit[nbProduit].Quantite);
  if( check_Quantite_n(produit[nbProduit].Quantite) == true){
        printf(" la Quantite est-- , veuillez reessayer.\n");
        goto ther;
     }

  printf("Entrez le Prix     : ");
  scanf("%f", &produit[nbProduit].Prix);

  system("cls");
  printf("\n\n");
  printf("------- Votre operation est bien traiter. -------\n\n");
 
  printf("Code          : %s\n", produit[nbProduit].Code);
  printf("Nom           : %s\n", produit[nbProduit].Nom);
  printf("Quantite      : %d\n", produit[nbProduit].Quantite);
  printf("prix          : %.2f Dhs\n", produit[nbProduit].Prix);
  printf("\n\n");

  nbProduit++;
  
  return_or_exit();
}

//----------------------------- Ajouter Plusieurs Produits ------------------------------------

void AjouterPlusieursProduit(){
  int nbP, choix;
  system("cls");
  printf("\n--------- Ajouter Plusieurs Produits (Code, Nom, Quantite et le Prix.) ----------\n\n");
  printf("=> Veuillez entrer nombre de produits : ");
  scanf("%d", &nbP);

  for (int i = 0; i < nbP; i++)
  {
    system("cls");
    printf("\n------- Ajouter le nouveau produit %d, (Code, Nom, Quantite et le Prix.) -------\n\n", i+1);
    
    printf("Entrez le Code     : ");
    scanf("%s", &produit[nbProduit].Code);

    printf("Entrez le Nom      : ");
    scanf("%s", &produit[nbProduit].Nom);
    ther :
    printf("Entrez la Quantite : ");
    scanf("%d", &produit[nbProduit].Quantite);
    if( check_Quantite_n(produit[nbProduit].Quantite) == true){
        printf(" la Quantite est-- , veuillez reessayer.\n");
        goto ther;
     }

    printf("Entrez le Prix     : ");
    scanf("%f", &produit[nbProduit].Prix);
    nbProduit++;
  }
  system("cls");
  printf("------- les informations des produits a ete cree avec succes. -------\n\n");

  for (int i = 1; i <= nbP ; i++)
  {
    printf("Code           : %s\n", produit[i].Code);
    printf("Nom            : %s\n", produit[i].Nom);
    printf("Quantite       : %d\n", produit[i].Quantite);
    printf("Prix           : %.2f Dhs\n", produit[i].Prix);
    printf("\n\n");
  }

  return_or_exit();
}

//----------------------------- RECHERCHE PAR CODE ------------------------------------

void recherche_par_code(){
 char produit_code[10];
    system("cls");
     printf("\n\n");
     ther :
     printf("Veuilez saisir le Code du produit : ");
     scanf("%s", &produit_code); 
     if( check_code(produit_code) == false){
      printf(" votre Code n'est existe pas, veuillez reessayer.\n");
        goto ther;
    }
     
     printf("\n\n");

     for (int i = 0; i < nbProduit; i++)
     {
         if (strcmp(produit[i].Code, produit_code) == 0)
         {
            printf("\n\n");
            printf("Code     : %s\n", produit[i].Code);
            printf("Nom      : %s\n", produit[i].Nom);
            printf("Quantite : %d\n", produit[i].Quantite);
            printf("Prix     : %.2f Dhs\n", produit[i].Prix);
            printf("\n");
         } 
      }
      printf("\n\n");

      return_or_exit();
}

//--------------------------- RECHERCHE PAR QUANTITE ------------------------------------

void recherche_par_quantite(){
     int produit_quantite;

     system("cls");
     printf("\n\n");
     ther :
     printf("Veuilez saisir le quantite du produit : ");
     scanf("%d", &produit_quantite);
     if( check_Quantite(produit_quantite) == true){
        printf(" la Quantite que vous avez entree n'est existe pas, veuillez reessayer.\n");
        goto ther;
     }
     printf("\n\n");

     for (int i = 0; i < nbProduit; i++)
     {
         if (produit[i].Quantite == produit_quantite)
         {
            printf("\n\n");
            printf("Code     : %s\n", produit[i].Code);
            printf("Nom      : %s\n", produit[i].Nom);
            printf("Quantite : %d\n", produit[i].Quantite);
            printf("Prix     : %.2f Dhs\n", produit[i].Prix);
            printf("\n");
         } 
      }
      printf("\n\n");

      return_or_exit();
}

//----------------------------- Liste tous les produits ------------------------------------

void Listetousproduits(){
  int ordrechoix;
  system("cls");
  printf("\n");
  printf("Liste tous les produits :\n");
  ther :
  printf("\n\n");
  printf("[1] - Liste par Nom.\n");
  printf("[2] - Liste par Prix.\n");
  printf("Votre choix : ");
  scanf("%d", &ordrechoix);
  printf("\n\n");

  switch (ordrechoix)
  {
  case 1:
    Liste_par_nom();
    break;
  case 2:
    Liste_par_prix();
    break;
  default:
    system("cls");
    printf(" votre choix n'est pas valide, veuillez reessayer. \n\n");
    sleep(2);
      goto ther;
    break;
    return_or_exit();
}
}

//----------------------------- LISTE TOUS LES PRODUITS PAR NOM ----------------------------

void Liste_par_nom(){

 struct Produit pswap;
  
 for (int i = 0; i < nbProduit; i++){
 for (int r = 0; r < nbProduit; r++)
 {
  for (int j = r + 1; j < nbProduit; j++)
  {
    if (strcasecmp(produit[r].Nom,  produit[j].Nom) > 0)
    {
      pswap = produit[r];
      produit[r] = produit[j];
      produit[j] = pswap;
    }
  }
 }
     float prix_TTC = (produit[i].Prix*0.15)+produit[i].Prix;
     printf(" produit N*%d \n", i + 1);
      printf("\n");
      printf("--> Nom de Produit : %s\n", produit[i].Nom);
      printf("  -Prix            : %.2f MAD\n", produit[i].Prix);
      printf("  -Prix TTC        : %.2f MAD\n", prix_TTC);
      printf("\n");

     }
  return_or_exit();

}

//----------------------------- LISTE TOUS LES PRODUITS PAR PRIX ---------------------------

void Liste_par_prix(){
  struct Produit pswap;
  
 for (int i = 0; i < nbProduit; i++){
 for (int r = 0; r < nbProduit; r++)
 {
  for (int j = r + 1; j < nbProduit; j++)
  {
    if (produit[r].Prix < produit[j].Prix)
    {
      pswap = produit[r];
      produit[r] = produit[j];
      produit[j] = pswap;
    }
  }
 }
     float prix_TTC = (produit[i].Prix*0.15)+produit[i].Prix;
     printf(" produit N*%d \n", i + 1);
      printf("\n");
      printf("--> Nom de Produit : %s\n", produit[i].Nom);
      printf("  -Prix            : %.2f MAD\n", produit[i].Prix);
      printf("  -Prix TTC        : %.2f MAD\n", prix_TTC);
      printf("\n");

     }
  return_or_exit();
}

//----------------------------------- ETAT DU STOCK ----------------------------------------

void  Etat_du_stock(){
  for(int i = 0; i < nbProduit; i++)
  {
    if (produit[i].Quantite < 3)
    {
      printf("\n\n");
            printf("Code     : %s\n", produit[i].Code);
            printf("Nom      : %s\n", produit[i].Nom);
            printf("Quantite : %d\n", produit[i].Quantite);
            printf("Prix     : %.2f Dhs\n", produit[i].Prix);
            printf("\n");
    }
    
  }
  return_or_exit();
}

//--------------------------------- Acheter un produit --------------------------------------

void Acheter_produit(){
 char produit_code[10];
 int quantite_ach;
     system("cls");
     printf("\n\n");
     ther:
     printf("Veuilez saisir le Code du produit : ");
     scanf("%s", produit_code);
     if( check_code(produit_code) == false){
      printf(" votre Code n'est existe pas, veuillez reessayer.\n");
        goto ther;
     }
     printf("\n");
     printf("Veuillez saisir le Quantite a acheter : ");
     scanf("%d", &quantite_ach);
     
     system("cls");
     printf("\n\n");
     printf("--> Le Code du produit   : %s\n", produit_code);
     printf("--> vos Quantite est     : %d \n\n", quantite_ach);

     for (int i = 0; i < nbProduit; i++)
     {
         if (strcmp(produit[i].Code, produit_code) == 0)
         {

          printf("la Quantite precedent    : %d \n", produit[i].Quantite);
          produit[i].Quantite = produit[i].Quantite - quantite_ach;
          printf("la Quantite actuel est   : %d\n", produit[i].Quantite);
          int t;
          time(&t);
          strcpy(produit[i].date,ctime(&t));
          printf("le produit est achete le : %s",produit[i].date);
        
          } 
      }
      printf("\n\n");

      return_or_exit();
}

//--------------------------------- Alimenter le stock --------------------------------------


void Alimenter_stock(){
 char produit_code[10];
 int quantite_ach;
     system("cls");
     printf("\n\n");
     ther :
     printf("Veuilez saisir le Code du produit : ");
     scanf("%s", produit_code);
     if( check_code(produit_code) == false){
      printf(" votre Code n'est existe pas, veuillez reessayer.\n");
        goto ther;
     }
     printf("\n");
     printf("Veuillez saisir le Quantite vous ajouter : ");
     scanf("%d", &quantite_ach);
     
     system("cls");
     printf("\n\n");
     printf("--> Le Code du produit : %s\n", produit_code);
     printf("--> vos Quantite est   : %d \n\n", quantite_ach);

     for (int i = 0; i < nbProduit; i++)
     {
         if (strcmp(produit[i].Code, produit_code) == 0)
         {

          printf("la Quantite precedent  : %d \n", produit[i].Quantite);
          produit[i].Quantite = produit[i].Quantite + quantite_ach;
          printf("la Quantite actuel est : %d\n", produit[i].Quantite);
        
          } 
      }
      printf("\n\n");

      return_or_exit();
}

//--------------------------- Suprimmer un produit par code ---------------------------------

void Supprimer_produit_par_Code(){
  char produit_code[10];
    system("cls");
    printf("Entrez le Code du produit Que vous voulez suprimer.t6");
     printf("\n\n");
     ther :
     printf("Veuilez saisir le Code du produit : ");
     scanf("%s", produit_code); 
    if(  check_code(produit_code) == false){
      printf(" votre Code n'est existe pas, veuillez reessayer.\n");
        goto ther;
    }
     
     printf("\n");

     for (int i = 0; i < nbProduit; i++)
     {
         if (strcmp(produit[i].Code, produit_code) == 0)
         {
            for (int j = i; j < nbProduit ; j++)
            {
              produit[j]=produit[j+1];
            }
            nbProduit--;
         } 
      }
      printf("\n");
      printf("votre operation a ete bien traite.\n\n");

      return_or_exit();
}

//------------------------------------- chech code ------------------------------------------

bool check_code(char x[10]){

  for (int i = 0; i <= nbProduit; i++)
  {
    if (strcmp(produit[i].Code, x) == 0)
    {
        return true;
    }
}
  return false;
}

//---------------------------------- chech Quantite -----------------------------------------

bool check_Quantite(int x){
  for (int i = 0; i < nbProduit; i++)
  {
    if (produit[i].Quantite != x)
    {
        return true;
    }else return false;
    
  }
}

bool check_Quantite_n(int y){
  
    if (y <= 0)
    {
        return true;
    }else return false;
    
  }

//------------------------------------ AFFICHAGE --------------------------------------------

void affichage(){
  int ordrechoix;

  system("cls");
  printf("\n");
  printf("List des produits par ordre :\n");
  printf("\n\n");
  ther :
  printf("[1] - recherche par Code.\n");
  printf("[2] - recherche par Quantite.\n");
  printf("[3] - Liste tous les produits.\n");
  printf("[4] - Etat du stock.\n");
  printf("[5] - Alimenter le stock.\n");
  printf("[6] - Suprimmer un produit par code.\n");
  printf("[7] - returne ou menu principale.\n\n");
  printf("Votre choix : ");
  scanf("%d", &ordrechoix);

  switch (ordrechoix)
  {
  case 1:
    recherche_par_code();
    break;
  case 2:
    recherche_par_quantite();
    break;
  case 3:
    Listetousproduits();
    break;
  case 4:  
    Etat_du_stock();
    break;
  case 5:
    Alimenter_stock();
    break;
  case 6:
    Supprimer_produit_par_Code();
    break;
  case 7:
    main();
    break;
  default:
    system("cls");
    printf(" votre choix n'est pas valide, veuillez reessayer. \n\n");
    sleep(2);
    goto ther;
       break;
  }
}