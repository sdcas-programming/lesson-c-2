#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(0));
  double total;
  int pocket, t;
  scanf("%lf %d", &total, &pocket);
  t = total * 100;
  for (int i=0; i<pocket; i++) {
    int money = rand() % (t - pocket) + 1;
    t -= money;
    printf("%.2f ", (double)money / 100);
  }
  return 0;
}
