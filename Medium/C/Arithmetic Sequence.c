#include  <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, N, i, j, r, a1, a2, aN, wrong = 0;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%d\n%d %d", &N, &a1, &a2);
    r = a2 - a1;
    for(j = 2; j < N; j++) {
      scanf("%d", &aN);
      if(aN - a1 != j*r) {
        if(wrong == 0)
          wrong = aN;
        else
          wrong = a2;

      }
    }
    printf("%d\n", wrong);
    wrong = 0;
  }
  return 0;
}