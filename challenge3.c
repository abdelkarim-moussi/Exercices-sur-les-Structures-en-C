#include <stdio.h>
/*Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter 
un rectangle avec les champs longueur et largeur. Écrivez une fonction 
qui prend une variable de cette structure en argument et calcule l'aire 
du rectangle. Affichez l'aire dans le programme principal.*/

typedef struct rectangle
{
    int largeur;
    int longeur;
}rectangle;

int calcule_air(rectangle r){
    int air = r.largeur * r.longeur;
   return air;
}

int main(){
int air;
rectangle r;
r.largeur = 6;
r.longeur = 12;
air = calcule_air(r);
printf("l'air du rectangle = %d\n",air);

}