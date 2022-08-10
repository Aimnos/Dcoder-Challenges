#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    uint8_t N;
    scanf("%" SCNu8, &N);
    char** const files = malloc(N * sizeof(char*));
    for (uint8_t i = 0; i < N; ++i) {
        char* const file = malloc(30 * sizeof(char));
        scanf("%s", file);
        uint8_t pos = strlen(file);
        bool appended = false;
        for (uint16_t j = 0; j < i; ++j)
            if (strcmp(file, files[j]) == 0) {
                if (!appended) {
                    file[pos++] = '(';
                    file[pos] = '1';
                    file[pos + 1] = ')';
                    file[pos + 2] = 0;
                    appended = true;
                } else if (file[pos] == '9') {
                    if (file[pos - 1] == '(') {
                        file[pos++] = '0';
                        file[pos + 1] = ')';
                        file[pos + 2] = 0;
                    }
                    file[pos] = '0';
                    ++file[pos - 1];
                } else
                    ++file[pos];

                j = 0;
            }

        printf("%s ", file);
        files[i] = file;
    }
    for (uint8_t i = 0; i < N; ++i)
        free(files[i]);

    free(files);
}
