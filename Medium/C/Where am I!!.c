#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int i, j, size, index = -1;
  char P[1000], Q[1000];
  for(i = 0; i < 1000; i++) {
    P[i] = 0;
    Q[i] = 0;
  }
  scanf("%[^\n]\n%[^\n]", P, Q);
  for(size = 0; size < 1000; size++)
    if(Q[size] == 0)
      break;

  for(i = 0; i < 1000; i++) {
    if(P[i] == 0)
      break;

    if(P[i] == Q[0]) {
      index = i;
      for(j = 0; j < size; j++)
        if(P[i + j] != Q[j]) {
          index = -1;
          break;
        }

    }
    if(index != -1)
      break;

  }
  printf("%d", index);
  return 0;
}