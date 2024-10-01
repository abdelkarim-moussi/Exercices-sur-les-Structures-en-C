#include <stdio.h>

/*Structure avec Tableau
Écrivez un programme C qui définit une structure pour 
représenter un étudiant avec les champs nom, prenom, et un tableau 
d'entiers pour stocker les notes. Assignez des valeurs aux champs et 
aux notes, puis affichez les informations de l'étudiant.
*/

typedef struct etudiant{
    
    char nom[15];
    char prenom[15];
    int tab_notes[5];
}etudiant;

int main(){

etudiant E = {"Doe","Jhon",{12,11,10,16,18}};

printf("etudiant : \n");
printf("nom : %s \t prenom : %s \n",E.nom,E.prenom);
printf("notes : \n");
for (int i = 0; i < 5; i++)
{
    printf("note %d : %d \t",i+1,E.tab_notes[i]);
}

}


