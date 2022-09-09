
#include <stdio.h>

int main() {
  //variable :
  float a , b , c , d , s , m ;

  printf("veuillez entrer la valeur a :");
  scanf("%f", &a);
  printf("veuillez entrer la valeur b :");
  scanf("%f", &b);
  printf("veuillez entrer la valeur c :");
  scanf("%f", &c);
  printf("veuillez entrer la valeur d :");
  scanf("%f", &d);

  //traitment et resultat :
  s=a+b+c+d;
  printf("la somme est : %.2f\n", s);
  m=s/4;
  printf("la moyenne est : %.2f", m);
  return 0;
}
