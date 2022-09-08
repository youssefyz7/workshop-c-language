#include <stdio.h>

int main() {
  //variable
  float mile , km , m ;
  printf("veuillez entrer la valeur en mile : ");
  scanf("%f" ,&mile);
  //traitment
  km=mile/1.609;
  m=km*1000;
  //ruseltat
  printf("la valeur en mile est : %0.3f meter" , m);
  return 0;
}
