#include <stdio.h>

int main() {

  int ages[] = {10, 42, 13, 55, 98, 26, 80, 77};
  float avg, sum = 0;
  int i;
  int length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < length; i++) {
    sum += ages[i];
  }
  
  avg = sum / length;
  printf("The average age is: %.2f", avg);
  
  return 0;
}