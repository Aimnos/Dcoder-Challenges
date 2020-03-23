#include <stdio.h>
#include <string.h>

int main() {
  char string[101], substring[9];
  unsigned long long int x = 0, result = 0;
  scanf("%[^\n]", string);
  for(unsigned short int i = 0; i <= 100; i++) {
    if(i > 0)
      if(string[i - 1] == 0)
        break;

    for(unsigned short int j = 0; j <= 8; j++) {
      if(string[i + j] == ' ' || string[i + j] == 0) {
        substring[j] = 0;
        i += j - 8;
        break;
      }
      if(string[i + j] >= 'A' && string[i + j] <= 'Z')
        string[i + j] += 32;

      substring[j] = string[i + j];
    }
    i += 8;
    if(strcmp(substring, "one") == 0)
      x += 1;
    else if(strcmp(substring, "two") == 0)
      x += 2;
    else if(strcmp(substring, "three") == 0)
      x += 3;
    else if(strcmp(substring, "four") == 0)
      x += 4;
    else if(strcmp(substring, "five") == 0)
      x += 5;
    else if(strcmp(substring, "six") == 0)
      x += 6;
    else if(strcmp(substring, "seven") == 0)
      x += 7;
    else if(strcmp(substring, "eight") == 0)
      x += 8;
    else if(strcmp(substring, "nine") == 0)
      x += 9;
    else if(strcmp(substring, "ten") == 0)
      x += 10;
    else if(strcmp(substring, "eleven") == 0)
      x += 11;
    else if(strcmp(substring, "twelve") == 0)
      x += 12;
    else if(strcmp(substring, "thirteen") == 0)
      x += 13;
    else if(strcmp(substring, "fourteen") == 0)
      x += 14;
    else if(strcmp(substring, "fifteen") == 0)
      x += 15;
    else if(strcmp(substring, "sixteen") == 0)
      x += 16;
    else if(strcmp(substring, "seventeen") == 0)
      x += 17;
    else if(strcmp(substring, "eighteen") == 0)
      x += 18;
    else if(strcmp(substring, "nineteen") == 0)
      x += 19;
    else if(strcmp(substring, "twenty") == 0)
      x += 20;
    else if(strcmp(substring, "thirty") == 0)
      x += 30;
    else if(strcmp(substring, "forty") == 0)
      x += 40;
    else if(strcmp(substring, "fifty") == 0)
      x += 50;
    else if(strcmp(substring, "sixty") == 0)
      x += 60;
    else if(strcmp(substring, "seventy") == 0)
      x += 70;
    else if(strcmp(substring, "eighty") == 0)
      x += 80;
    else if(strcmp(substring, "ninety") == 0)
      x += 90;
    else if(strcmp(substring, "hundred") == 0)
        x *= 100;
    else if(strcmp(substring, "thousand") == 0) {
      if(x == 0)
        result *= 1000;
      else {
        x *= 1000;
        result += x;
        x = 0;
      }
    } else if(strcmp(substring, "million") == 0) {
      if(x == 0)
        result *= 1000000;
      else {
        x *= 1000000;
        result += x;
        x = 0;
      }
    } else if(strcmp(substring, "billion") == 0) {
      if(x == 0)
        result *= 1000000000;
      else {
        x *= 1000000000;
        result += x;
        x = 0;
      }
    }
  }
  result += x;
  printf("%llu", result);
  return 0;
}