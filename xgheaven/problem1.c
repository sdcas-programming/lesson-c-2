#include <stdio.h>

int main() {
  for (int i=2; i<=1000; i++) {
    int flag = 0;
    for (int j=2; j<i; j++) {
      if (i % j == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) printf("%d ", i); 
  }
}
