
#include <stdio.h>

typedef struct {
    char *country_name;
    int code;
} DialingCode;

int main(void) {
    const DialingCode dialing_codes[] = {
        {"United States", 1},
        {"Canada", 1},
        {"United Kingdom", 44},
        {"Germany", 49},
        {"France", 33},
        {"India", 91},
        {"China", 86},
        {"Japan", 81},
        {"Australia", 61},
        {"Brazil", 55},
        {"South Africa", 27},
        {"Russia", 7},
        {"Mexico", 52},
        {"Italy", 39},
        {"South Korea", 82},
        {"Spain", 34},
        {"Netherlands", 31},
        {"Sweden", 46},
        {"Switzerland", 41},
        {"Norway", 47},
        {"Denmark", 45},
        {"Finland", 358},
        {"Austria", 43},
        {"Belgium", 32},
        {"Portugal", 351},
        {"Greece", 30},
        {"Turkey", 90},
        {"New Zealand", 64},
        {"Singapore", 65},
        {"Thailand", 66},
        {"Malaysia", 60},
        {"Indonesia", 62},
        {"Vietnam", 84},
        {"Philippines", 63},
        {"Argentina", 54},
        {"Chile", 56},
        {"Colombia", 57},
        {"Peru", 51},
        {"Venezuela", 58},
        {"Saudi Arabia", 966},
        {"United Arab Emirates", 971},
        {"Egypt", 20},
        {"Pakistan", 92},
        {"Bangladesh", 880},
        {"Nigeria", 234},
        {"Kenya", 254},
        {"Ethiopia", 251},
        {"Poland", 48},
        {"Czech Republic", 420},
        {"Hungary", 36},
        {"Romania", 40},
        {"Ukraine", 380},
        {"Ireland", 353},
        {"Iceland", 354}
    };

    int country_code;

    printf("Enter country code: ");
    scanf("%d", &country_code);

    int codes_count = sizeof(dialing_codes) / sizeof(dialing_codes[0]);
    for (int i = 0; i < codes_count; i++) {
        if (dialing_codes[i].code == country_code) {
            printf("%d is code for %s\n", dialing_codes[i].code, dialing_codes[i].country_name);
            return 0;
        }
    }

    printf("Couldn't find a country with this code in database\n");
    return 0;

}