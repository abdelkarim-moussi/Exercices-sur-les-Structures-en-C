#include <stdio.h>

/*Structure avec Pointeurs
Écrivez un programme C qui définit une structure pour représenter 
un point dans un plan avec les champs x et y. Utilisez des pointeurs 
pour créer une variable de cette structure et modifiez ses valeurs. 
Affichez les valeurs du point.*/

typedef struct point{
    int x;
    int y;
}point;

void modifier(point *p){
  point point_instant;
  p = &point_instant;
  p->x = 10;
  p->y = 8;
}
int main(){
point *p;

modifier(p);

printf("x = %d \t y = %d \n",p->x,p->y);
  
}
