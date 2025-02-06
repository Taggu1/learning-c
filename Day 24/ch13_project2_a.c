

#include <string.h>
#include <stdio.h>

#define REMINDERS_LEN 100
#define REMINDER_LEN 100

int read_line(char str[], int n);

int main(void)
{
    char reminders[REMINDERS_LEN][REMINDER_LEN];
    int remniders_count = 0;
    int count = 0;

    while (1) {
        if (remniders_count == REMINDERS_LEN) {
            printf("-- No space left\n");
            break;
        }
        printf("Enter day and reminder: ");
        int day;
        char reminder[REMINDER_LEN], day_str[3];

        scanf("%2d", &day);



        read_line(reminder, REMINDER_LEN);

        if (day == 0) {
            break;
        } else if (day < 31 || day < 0) {
            printf("Invalid day...\n");
            continue;
        }

        sprintf(day_str, "%2d", day);

        int i;

        for (i = 0; i < remniders_count; i++) {
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        }

        for (int j = remniders_count; j > i; j--) {
            strcpy(reminders[j], reminders[j - 1]);
        }
        strcpy(reminders[i], strcat(day_str, reminder));

        remniders_count++;
    }

    printf("\nDay reminder\n");
    for (int i = 0; i < remniders_count; i++) {
        puts(reminders[i]);
    }
}

int read_line(char str[], int n)
{
    char ch;
    int count = 0;
    while ((ch = getchar()) != '\n') {
        if (count < n) {
            str[count++] = ch;
        }
    }
    str[count] = '\0';
    return count;
}
