
#include <stdio.h>
#include <stdlib.h>

int main() {
  //variable :
  int a , b ;

  printf("veuillez entrer la valeur a :");
  scanf("%d", &a);
  printf("veuillez entrer la valeur b :");
  scanf("%d", &b);

  //traitment et resultat :
  printf("a+b= %.2f\n", (float) a+b);
  printf("a-b= %.2f\n", (float) a-b);
  printf("a*b= %.2f\n", (float) a*b);
  printf("a/b= %.2f\n", (float) a/b);
  printf("a%b= %d\n", (int)  a%b);

  return 0;
}
