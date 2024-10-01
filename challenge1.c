#include <stdio.h>

/* Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter 
une personne avec les champs nom, prenom, et age. Créez une variable 
de cette structure, assignez des valeurs aux champs, et affichez ces 
valeurs.*/

struct personne{
    char nom[15];
    char prenom[15];
    int age;
};
typedef struct personne personne;


int main(){

personne p = {"Jhon","Doe",28};
printf("les information de persone : \n");
printf("nom : %s \t prenom : %s \t age : %d \n",p.nom,p.prenom,p.age);

}