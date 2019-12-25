#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i;
  long int N, *friends, K, j, k, minPos, gifts;
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    scanf("%ld", &N);
    friends = (int*)malloc(N*sizeof(int));
    for(j = 0; j < N; j++)
      scanf("%ld", &friends[j]);

    scanf("%ld", &K);
    gifts = 0;
    for(j = 0; j < K; j++) {
      minPos = 0;
      for(k = 1; k < N - j; k++)
        if(friends[k] < friends[minPos])
          minPos = k;

      gifts += friends[minPos];
      friends[minPos] = friends[N - j - 1];
    }
    printf("%ld\n", gifts);
    free(friends);
  }
  return 0;
}