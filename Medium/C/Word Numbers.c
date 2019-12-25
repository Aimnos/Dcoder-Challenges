#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int N, x[5], i, m = 10000;
  scanf("%d", &N);
  for(i = 0; i < 5; i++) {
    x[i] = (N/m)%10;
    m /= 10;
  }
  if(N == 0)
    printf("zero");
  else {
    for(i = 0; i < 5; i++)
      if(x[i] != 0)
        break;

    while(i < 5)
      switch(x[i]) {
        case 1:
          printf("one ");
          i++;
          break;
        case 2:
          printf("two ");
          i++;
          break;
        case 3:
          printf("three ");
          i++;
          break;
        case 4:
          printf("four ");
          i++;
          break;
        case 5:
          printf("five ");
          i++;
          break;
        case 6:
          printf("six ");
          i++;
          break;
        case 7:
          printf("seven ");
          i++;
          break;
        case 8:
          printf("eight ");
          i++;
          break;
        case 9:
          printf("nine ");
          i++;
          break;
        case 0:
          printf("zero ");
          i++;
          break;
      }

  }
  return 0;
}