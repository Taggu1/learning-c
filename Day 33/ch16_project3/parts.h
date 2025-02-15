
#define NAME_LEN 60 // Max part name
#define MAX_PARTS_NUM 100




typedef struct {
    char name[NAME_LEN + 1]; // (+1) to account for the null character
    int number;
    int on_hand;
} Part;

void search_by_num(int parts_count, Part *parts);
void edit_by_num(int parts_count, Part *parts);
void print_parts(int parts_count, Part *parts);
void insert_part(int *parts_count, Part *parts);