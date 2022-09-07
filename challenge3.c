
#include <stdio.h>

int main(void) {
  //variable :
  float m , mile ;
  printf("veuillez entrer la valeur en metre : ");
  scanf("%f" ,&m);

  mile=(m/1000)*1.609;

  printf("la valeur en mile est : %0.3f mile" , mile);
  return 0;
}
