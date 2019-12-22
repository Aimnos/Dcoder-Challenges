#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int year, century;
  scanf("%d", &year);
  century = (year + 99)/100;
  if(century > 10 && century < 14)
    printf("%dth", century);
  else
    switch(century%10) {
      case 1:
        printf("%dst", century);
        break;
      case 2:
        printf("%dnd", century);
        break;
      case 3:
        printf("%drd", century);
        break;
      default:
        printf("%dth", century);
        break;
    }

  return 0;
}