#include <stdio.h>

//Compiler version gcc  6.3.0

int main() {
  char s[100], c[100], prev;
  int i, cont = 1, size, compressedSize = 1, m;
  for(i = 0; i < 100; i++)
    s[i] = 0;

  scanf("%[^\n]", s);
  prev = s[0];
  c[0] = s[0];
  for(size = 1; size < 100; size++) {
    if(s[size] == 0)
      break;

    if(s[size] == prev) {
      cont++;
    } else {
      m = 1;
      while(cont >= 10*m)
        m *= 10;

      if(cont > 1) {
        while(m > 0) {
          c[compressedSize++] = (cont/m)%10 + '0';
          m /= 10;
        }
      }
      c[compressedSize++] = s[size];
      cont = 1;
    }
    prev = s[size];
  }
  m = 1;
  while(cont >= 10*m)
    m *= 10;

  if(cont > 1) {
    while(m > 0) {
      c[compressedSize++] = (cont/m)%10 + '0';
      m /= 10;
    }
  }
  if(compressedSize < size)
    for(i = 0; i < compressedSize; i++)
      printf("%c", c[i]);
  else
    for(i = 0; i < size; i++)
      printf("%c", s[i]);

  return 0;
}