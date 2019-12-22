#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Compiler version gcc  6.3.0

struct pair {
  char key[20];
  int value;
};

int main() {
  char key[20];
  int N, i, j, value, Q;
  struct pair *p, *dictionary[20];
  scanf("%d", &N);
  for(i = 0; i < N; i++) {
    for(j = 0; j < 20; j++)
      key[j] = 0;

    scanf("%s %d", key, &value);
    p = (struct pair*)malloc(sizeof(struct pair));
    for(j = 0; j < 20; j++)
      p->key[j] = key[j];

    p->value = value;
    dictionary[i] = p;
  }
  scanf("%d", &Q);
  for(i = 0; i < Q; i++) {
    scanf("%s", key);
    for(j = 0; j < N; j++)
      if(strcmp(dictionary[j]->key, key) == 0) {
        printf("%d\n", dictionary[j]->value);
        break;
      }

  }
  for(i = 0; i < N; i++)
    free(dictionary[i]);

  return 0;
}