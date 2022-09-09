#include <stdio.h>

int main () {
    //variable :
      float longueur , largeur , c ;

  printf("veuillez entrer la longueur :");
  scanf("%f",&longueur);
  printf("veuillez entrer la largeur :");
  scanf("%f",&largeur);

  //traitment :
  c=2*(longueur+largeur);
//resultat :
  printf("la circonférence de cercel est : %.2f" , c);
}
