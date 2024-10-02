#include <stdio.h>
#include <string.h>

/* Structure et Fonction de Retour
Écrivez un programme C qui définit une structure pour 
représenter un livre avec les champs titre, auteur, 
et année. Écrivez une fonction qui retourne une variable 
de cette structure initialisée avec des valeurs données. 
Affichez les informations du livre dans le programme 
principal.*/

typedef struct livre
{
    char titre[20];
    char auteur[20];
    char annee[20];

}livre;

livre r_livre(livre l,const char* t){
  strncpy(l.titre, t, sizeof(l.titre) - 1);
    l.titre[sizeof(l.titre) - 1] = '\0'; // Ensure null termination
    return l;
}


int main(){

livre l;
l = r_livre(l,"Idiot");
strcpy(l.auteur,"Dostwoivski");
strcpy(l.annee,"1968");

printf("les informations du livre : \n");
printf("titre : %s \t auteur : %s \t annee : %s \n",l.titre,l.auteur,l.annee);


}
