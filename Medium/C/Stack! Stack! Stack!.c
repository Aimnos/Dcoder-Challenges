#include <stdio.h>
#include <string.h>

//Compiler version gcc  6.3.0

int main() {
  int stack[50], Q, N, i, x, top = 0, sum = 0;
  char query[4];
  scanf("%d", &Q);
  for(i = 0; i < Q; i++) {
    scanf("%s", query);
    if(strcmp(query, "PUSH") == 0) {
      scanf("%d", &x);
      stack[top++] = x;
    } else if(strcmp(query, "POP") == 0 && top > 0)
      top--;
    else if(strcmp(query, "PEEK") == 0)
      printf("%d\n", stack[top - 1]);

  }
  for(i = 0; i < top; i++)
    sum += stack[i];

  printf("%d", sum);
  return 0;
}