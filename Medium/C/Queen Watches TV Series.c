#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i;
  char string[6];
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%s", string);
    printf("Season %d, Episode %d\n", 10*(string[1] - '0') + string[2] - '0', 10*(string[4] - '0') + string[5] - '0');
  }
  return 0;
}