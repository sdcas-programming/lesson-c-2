#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int k1 = 100, k2 = 200, k3 = 10, k4 = 20, k5 = 0, k6 = 120;
  switch(num) {
    case 110:
      printf("tickets: %d", k1);
      break;
    case 120:
      printf("tickets: %d", k2);
      break;
    case 130:
      printf("tickets: %d", k3);
      break;
    case 140:
      printf("tickets: %d", k4);
      break;
    case 150:
      printf("tickets: %d", k5);
      break;
    case 160:
      printf("tickets: %d", k6);
      break;
    default:
      printf("train number is not exist");
  }
}
