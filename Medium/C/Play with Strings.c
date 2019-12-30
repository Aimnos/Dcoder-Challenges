#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  int n, i, j, k, start;
  char string[660], aux;    //TestCase#2 has a string with 659 characters, with the last 35 being spaces, apparently ¯\_(ツ)_/¯
  scanf("%i", &n);
  for(i = 0; i < n; i++) {
    start = 0;
    scanf(" %[^\n]", string);
    for(j = 0; j < 660; j++) {
      if(string[j] == 0) {
        for(k = start; k < (start + j)/2; k++) {
          aux = string[k];
          string[k] = string[j - 1 - k + start];
          string[j - 1 - k + start] = aux;
        }
        break;
      }
      if(string[j] == ' ') {
        for(k = start; k < (start + j)/2; k++) {
          aux = string[k];
          string[k] = string[j - 1 - k + start];
          string[j - 1 - k + start] = aux;
        }
        start = j + 1;
      }
    }
    printf("%s\n", string);
  }
  return 0;
}