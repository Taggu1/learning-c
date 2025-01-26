// Name: ch9_testing.c
// Purpose: Testing chapter 9
// Author: Hisham Mohammed

int sum_to_dim_array(int n, int m, int a[*][*]);

int sum_array(int b[], int n);

int main(void) {
    sum_array((int[]) { 1, 2, 3, 4 }, 4);

}


int sum_to_dim_array(int n, int m, int a[n][m]) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            total += a[i][j];
        }

    }
    return total;

}

int sum_array(int b[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }

    return sum;
}