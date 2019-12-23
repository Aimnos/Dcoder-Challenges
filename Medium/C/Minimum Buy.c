#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int T, i, j, cost;
  char S[100], letters[26];
  scanf("%d", &T);
  for(i = 0; i < T; i++) {
    cost = 0;
    for(j = 0; j < 100; j++)
      S[j] = 0;

    for(j = 0; j < 26; j++)
      letters[j] = 0;

    scanf("%s", S);
    for(j = 0; j < 100; j++) {
      if(S[j] == 0)
        break;

      letters[S[j] - 'a']++;
    }
    for(j = 0; j < 26; j++) {
      cost += letters[j]/2;
      if(letters[j]%2 == 1)
        cost++;

    }
    printf("%d\n", cost);
  }
  return 0;
}