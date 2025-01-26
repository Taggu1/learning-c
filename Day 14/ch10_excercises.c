// Name: ch10_excercises.c
// Purpose: Excercises of chapter 10
// Author: Hisham Mohammed

#include <stdio.h>

int check(int x, int y, int n);

int main(void) {


    // 2
    printf("%d\n", check(1, 2, 5));
    printf("%d\n", check(1, 6, 5));


}


// 1
double triangle_area(double base, double height, double product) {
    product = base * height;
    return product / 2;
}


// 2
int check(int x, int y, int n) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n)) ? 1 : 0;
}
