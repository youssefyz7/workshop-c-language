#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main() {
  //variable :
  float c , r ;

  printf("veuillez entrer la rayon :");
  scanf("%f",&r);

  //traitment :
  c=2*pi*r;
//resultat :
  printf("la circonférence de cercel est : %.2f" , c);
}
