#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int N, L, R;
  unsigned int Q;
  char *S, smallest;
  scanf("%hu %u", &N, &Q);
  S = (char*)malloc((N + 1)*sizeof(char));
  scanf("%s", S);
  for(unsigned int i = 0; i < Q; i++) {
    scanf("%hu %hu", &L, &R);
    smallest = S[L - 1];
    for(unsigned short int j = L; j < R; j++)
      if(S[j] < smallest)
        smallest = S[j];

    printf("%c\n", smallest);
  }
  free(S);
  return 0;
}