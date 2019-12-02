#include  <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i, x;
  scanf("%d", &T);
  for(i =  0; i < T; i++) {
    scanf("%d", &x);
    if(x%400 == 0 || (x%4 == 0 && x%100 != 0))
      printf("Yes\n");
    else
      printf("No\n");

  }
  return 0;
}