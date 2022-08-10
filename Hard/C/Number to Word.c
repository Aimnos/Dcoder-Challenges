#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[101];
    for (uint8_t i = 0; i < 101; ++i) {
        string[i] = tolower(getchar());
        if (iscntrl(string[i])) {
            string[i] = 0;
            break;
        }
    }
    uint64_t x = 0, result = 0;
    for (char* token = strtok(string, " "); token != NULL;
         token = strtok(NULL, " ")) {
        if (strcmp(token, "billion") == 0) {
            if (x == 0)
                result *= 1000000000;
            else {
                result += x * 1000000000;
                x = 0;
            }
        } else if (strcmp(token, "million") == 0) {
            if (x == 0)
                result *= 1000000;
            else {
                result += x * 1000000;
                x = 0;
            }
        } else if (strcmp(token, "thousand") == 0) {
            if (x == 0)
                result *= 1000;
            else {
                result += x * 1000;
                x = 0;
            }
        } else if (strcmp(token, "hundred") == 0)
            x *= 100;
        else if (strcmp(token, "ninety") == 0)
            x += 90;
        else if (strcmp(token, "eighty") == 0)
            x += 80;
        else if (strcmp(token, "seventy") == 0)
            x += 70;
        else if (strcmp(token, "sixty") == 0)
            x += 60;
        else if (strcmp(token, "fifty") == 0)
            x += 50;
        else if (strcmp(token, "forty") == 0)
            x += 40;
        else if (strcmp(token, "thirty") == 0)
            x += 30;
        else if (strcmp(token, "twenty") == 0)
            x += 20;
        else if (strcmp(token, "nineteen") == 0)
            x += 19;
        else if (strcmp(token, "eighteen") == 0)
            x += 18;
        else if (strcmp(token, "seventeen") == 0)
            x += 17;
        else if (strcmp(token, "sixteen") == 0)
            x += 16;
        else if (strcmp(token, "fifteen") == 0)
            x += 15;
        else if (strcmp(token, "fourteen") == 0)
            x += 14;
        else if (strcmp(token, "thirteen") == 0)
            x += 13;
        else if (strcmp(token, "twelve") == 0)
            x += 12;
        else if (strcmp(token, "eleven") == 0)
            x += 11;
        else if (strcmp(token, "ten") == 0)
            x += 10;
        else if (strcmp(token, "nine") == 0)
            x += 9;
        else if (strcmp(token, "eight") == 0)
            x += 8;
        else if (strcmp(token, "seven") == 0)
            x += 7;
        else if (strcmp(token, "six") == 0)
            x += 6;
        else if (strcmp(token, "five") == 0)
            x += 5;
        else if (strcmp(token, "four") == 0)
            x += 4;
        else if (strcmp(token, "three") == 0)
            x += 3;
        else if (strcmp(token, "two") == 0)
            x += 2;
        else if (strcmp(token, "one") == 0)
            x += 1;
    }
    result += x;
    printf("%" PRIu64, result);
}
