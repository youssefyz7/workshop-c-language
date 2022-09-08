#include <stdio.h>
int main() {
  //variable :
  float f , c ;

  printf("veuillez entrer la temperateur en fahrenheit :");
  scanf("%f" ,&f);

  //traitment :
  c = (f-32)/1.8;

  //resultat :
  printf("la temperature est : %.2f °c" ,c);
  return 0;
}
