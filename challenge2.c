#include <stdio.h>

int main() {
  //variable :
  float f;
  float c;
  //traitment :
  printf("veuillez entrer la valeur en celsius :");
  scanf("%f",&c);
  f=(c*1.8)+32;
  //resultat :
  printf("la valeur en degres Fahrenheit est = %.2f" , f);
  return 0;
}
