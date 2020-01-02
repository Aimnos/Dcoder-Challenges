#include  <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char s[31];
  int n, i, j;
  scanf("%i", &n);
  for(i = 0; i < n; i++) {
    scanf("%s", s);
    for(j = 0; j < 31; j++)
      if(s[j] == 0) {
        if(s[j - 2] == 'e' && s[j - 1] == 'r') {
          s[j - 1] = 's';
          s[j] = 't';
          s[j + 1] = 0;
        } else if(!(s[j - 3] == 'e' && s[j - 2] == 's' && s[j - 1] == 't')) {
          if(s[j - 1] == 'e') {
            s[j] = 'r';
            s[j + 1] = 0;
          } else {
            s[j] = 'e';
            s[j + 1] = 'r';
            s[j + 2] = 0;
          }
        }
        break;
      }

    printf("%s\n", s);
  }
  return 0;
}