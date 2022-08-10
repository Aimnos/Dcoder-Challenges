#include <inttypes.h>
#include <stdio.h>

void to_word(const uint16_t x) {
    if (x > 99) {
        switch (x / 100) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
        printf(" hundred");
        if (x % 100 != 0)
            printf(" ");
    }
    if (x > 9) {
        switch ((x / 10) % 10) {
            case 1:
                switch (x % 10) {
                    case 1:
                        printf("eleven");
                        break;
                    case 2:
                        printf("twelve");
                        break;
                    case 3:
                        printf("thirteen");
                        break;
                    case 4:
                        printf("fourteen");
                        break;
                    case 5:
                        printf("fifteen");
                        break;
                    case 6:
                        printf("sixteen");
                        break;
                    case 7:
                        printf("seventeen");
                        break;
                    case 8:
                        printf("eighteen");
                        break;
                    case 9:
                        printf("nineteen");
                        break;
                }
                return;
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }
        if (x % 10 != 0)
            printf(" ");
    }
    switch (x % 10) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
}

int main() {
    uint64_t N;
    scanf("%" SCNu64, &N);
    if (N == 0)
        printf("zero");
    else {
        uint16_t x = N / 1e9;
        if (x != 0) {
            to_word(x);
            printf(" billion");
            if (N % (uint64_t)1e9 != 0)
                printf(" ");
        }
        x = (N / (uint64_t)1e6) % 1000;
        if (x != 0) {
            to_word(x);
            printf(" million");
            if (N % (uint64_t)1e6 != 0)
                printf(" ");
        }
        x = (N / 1000) % 1000;
        if (x != 0) {
            to_word(x);
            printf(" thousand");
            if (N % 1000 != 0)
                printf(" ");
        }
        x = N % 1000;
        if (x != 0)
            to_word(x);
    }
}
