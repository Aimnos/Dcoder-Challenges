#include <stdio.h>
#include <stdbool.h>

unsigned long int power(unsigned int a, unsigned int b) {
  long int x = a, y = 1;
  if(b == 0)
    return 1;

  while(b > 1) {
    if(b%2 == 0) {
      x *= x;
      b /= 2;
    } else {
      y *= x;
      b--;
    }
  }
  return x*y;
}

int main() {
  unsigned long int N, x;
  unsigned short int i = 0;
  bool ten = false, thousand = false;
  scanf("%lu", &N);
  if(N == 0) {
    printf("zero");
    return 0;
  }
  x = N;
  while(x >= 10) {
    x /= 10;
    i++;
  }
  while(true) {
    if(i%3 == 1)
      switch(x) {
        case 1:
          ten = true;
          break;
        case 2:
          printf("twenty ");
          break;
        case 3:
          printf("thirty ");
          break;
        case 4:
          printf("forty ");
          break;
        case 5:
          printf("fifty ");
          break;
        case 6:
          printf("sixty ");
          break;
        case 7:
          printf("seventy ");
          break;
        case 8:
          printf("eighty ");
          break;
        case 9:
          printf("ninety ");
          break;
      }
    else if(i%3 == 0 && ten) {
      switch(x) {
        case 0:
          printf("ten ");
          break;
        case 1:
          printf("eleven ");
          break;
        case 2:
          printf("twelve ");
          break;
        case 3:
          printf("thirteen ");
          break;
        case 4:
          printf("fourteen ");
          break;
        case 5:
          printf("fifteen ");
          break;
        case 6:
          printf("sixteen ");
          break;
        case 7:
          printf("seventeen ");
          break;
        case 8:
          printf("eighteen ");
          break;
        case 9:
          printf("nineteen ");
          break;
      }
      ten = false;
    } else
      switch(x) {
        case 1:
          printf("one ");
          break;
        case 2:
          printf("two ");
          break;
        case 3:
          printf("three ");
          break;
        case 4:
          printf("four ");
          break;
        case 5:
          printf("five ");
          break;
        case 6:
          printf("six ");
          break;
        case 7:
          printf("seven ");
          break;
        case 8:
          printf("eight ");
          break;
        case 9:
          printf("nine ");
          break;
      }

    if(i == 0)
      break;

    if(x != 0)
      thousand = true;

    if(thousand)
      switch(i%3) {
        case 0:
          switch(i) {
            case 3:
              printf("thousand ");
              break;
            case 6:
              printf("million ");
              break;
            case 9:
              printf("billion ");
              break;
          }
          thousand = false;
          break;
        case 2:
          printf("hundred ");
          break;
      }

    x = (N/power(10, --i))%10;
  }
  return 0;
}