#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc 6.3.0

void reverse(char *s, int size) {
  int i, j;
  char temp;
  for(i = 0; i < size/2; i++) {
    j = size - i - 1;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

char* sum(char* b1, char* b2, int size) {
  int i, j, k = 0, carry = 0;
  char *s;
  for(i = 0; i < size; i++)
    if(b1[i] == 0)
      break;

  for(j = 0; j < size; j++)
    if(b2[j] == 0)
      break;

  if(j > i)
    s = (char*)calloc(j + 1, sizeof(char));
  else
    s = (char*)calloc(i + 1, sizeof(char));

  i--;
  j--;
  while(i >= 0 && j >= 0) {
    if(b1[i] == b2[j]) {
      s[k] = '0' + carry;
      if(b1[i] == '1')
        carry = 1;
      else
        carry = 0;

    } else {
      s[k] = '1' + carry;
      if(s[k] == '2')
        s[k] = '0';

    }
    i--;
    j--;
    k++;
  }
  while(i >= 0) {
    s[k] = b1[i] + carry;
    if(s[k] == '2') {
      s[k] = '0';
      carry = 1;
    } else
      carry = 0;

    i--;
    k++;
  }
  while(j >= 0) {
    s[k] = b2[j] + carry;
    if(s[k] == '2') {
      s[k] = '0';
      carry = 1;
    } else
      carry = 0;

    j--;
    k++;
  }
  if(carry == 1) {
    s[k] = '1';
    k++;
  }
  reverse(s, k);
  return s;
}

char* product(char* b1, char* b2, int size, int* newSize) {
  int i, j, k;
  char *p, *temp;
  for(i = 0; i < size; i++)
    if(b1[i] == 0)
      break;

  for(j = 0; j < size; j++)
    if(b2[j] == 0)
      break;

  *newSize = i + j;
  p = (char*)calloc(*newSize, sizeof(char));
  temp = (char*)calloc(*newSize, sizeof(char));
  if(j > i) {
    for(k = 0; k < j; k++)
      temp[k] = b2[k];

    k--;
    i--;
    while(i >= 0) {
      if(b1[i] == '1')
        p = sum(p, temp, *newSize);

      k++;
      temp[k] = '0';
      i--;
    }
  } else {
    for(k = 0; k < i; k++)
      temp[k] = b1[k];

    k--;
    j--;
    while(j >= 0) {
      if(b2[j] == '1')
        p = sum(p, temp, *newSize);

      k++;
      temp[k] = '0';
      j--;
    }
  }
  free(temp);
  return p;
}

int main() {
  char b1[16], b2[16], *s, *p;
  int i, size;
  for(i = 0; i < 16; i++) {
    b1[i] = 0;
    b2[i] = 0;
  }
  scanf("%s %s", b1, b2);
  s = sum(b1, b2, 16);
  p = product(b1, b2, 16, &size);
  printf("%s\n%s", s, p);
  free(s);
  free(p);
  return 0;
}