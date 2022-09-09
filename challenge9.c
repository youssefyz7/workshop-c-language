#include <stdio.h>
#include <math.h>

int main() {
  //variable :
  int x1 , x2 , y1 , y2 , ab ;

  printf("veuillez entrer des donnee a:");
  printf("veuillez entrer la valeur de x1 :");
  scanf("%d" ,&x1);
  printf("veuillez entrer la valeur de x2 :");
  scanf("%d" ,&x2);

  printf("veuillez entrer des donnee b:");
  printf("veuillez entrer la valeur de y1 :");
  scanf("%d" ,&y1);
  printf("veuillez entrer la valeur de y2 :");
  scanf("%d" ,&y2);

  ab=sqrt((pow((x2-x1),2))+(pow(y2-y1),2));
  printf("Distance deux points est %d" , ab);
  return 0;
}
