

#include <stdio.h>
#include <stdbool.h>

#define N 10
#define LEN 10

int main(void) {
    // int a[] = {5,15,34,54,14,2,52,72};
    // int *p = &a[1], *q = &a[5];

    // printf("%d %d %d %d\n", *(p+3), *(q-3), p < q, *p < *q); // 14 34 14 true false


    int a[N] = {1,2,3,4,5,6,7,8,9,10}; // 10 9 8 7 6 5 4 3 2 1
    int *p = &a[0], *q = &a[N-1], temp;

    while (p< q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    
    for (int *p = a; p < a + N; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");


    double ident[N][N];
    // 13
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            if (row == col) ident[row][col] = 1;
            else ident[row][col] = 0;
        }
        
    }
    
    int count = 0;
    ident[0][0] = 1;
    for (double *p = &ident[0][1]; p <= &ident[N-1][N-1]; p++)
    {
        if (count == N) {
            *p = 1;
            count = 0;
        } else {
            *p = 0;
            count++;
        }

    }

     for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
           printf("%.0lf ", ident[row][col]);
        }
        printf("\n");
        
    }
    
    // 14
    int temperatures[7][24];

    for (int i = 0; i < 7; i++)
    {
        if (search(temperatures[i],24,34)) printf("Found it");
    }

    for (int *p = temperatures[0]; p < temperatures[0] + 24; p++)
    {
        printf("%d", *p);
    }

    
    for (p = temperatures; p < a + 7; p++) {
       printf("Hights of day: %d\n", *find_largest(*p,24));
    }

    printf("Not found");
    

    
}

int sum_array(const int *a, int n) {
    int i, sum;
    
    sum = 0;
    for (int *p = a; i < a + n; p++) sum += *p;
    
    return sum;
    
}

bool search(int a[],int n, int key) {
    for (int *p = a; p < a + n; p++)
    {
        if (*p == key) return true;
    }

    return false;
    
}

void store_zeros(int *a, int n) {
    for (int *p = a; p < a + n; p++) *p = 0;
}

double inner_product(const double *a, const double *b, int n) {
    double sum = 0;
    for (double *p = a, *q = b; p < a + n && q < a + n; p++,q++)
    {
        sum += (*p) * (*q);
    }
    
}


// 10
int *find_middle(int a[], int n) {
    return a + (n/2);
}

// 11
int *find_largest(int *a,int n) {
    int *largest = a;

    for (int *p = a; p < a + n; p++)
    {
        if (*largest < *p) *largest = *p;
    }
    return largest;
}

// 12
void find_two_largest(int a[], int n, int *largest,int *second_largest) {
    *largest = a[0];

    for (int *p = a; p < a +n; p++)
    {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        }
    }
    
}


// 17
int sum_two_dimensional_array(const int a[][LEN],int n) {
    int sum =0;

    for (int *p = &a[0][0]; p <= &a[n][LEN]; p++)
    {
        sum += *p;
    }

    return sum;
    
}

// 18

int evaluate_position(char board[8][8]) {
    int black_sum = 0;
    int white_sum = 0;

    for (int *p = &board[0][0]; p <= &board[7][7]; p++)
    {
    char ch = *p;
            switch (ch) {
            case 'Q': white_sum += 9; break;
            case 'R': white_sum += 5; break;
            case 'B': white_sum += 3; break;
            case 'N': white_sum += 3; break;
            case 'P': white_sum += 1; break;
            case 'q': black_sum += 9; break;
            case 'r': black_sum += 5; break;
            case 'b': black_sum += 3; break;
            case 'n': black_sum += 3; break;
            case 'p': black_sum += 1; break;
            }
    }
    

    return white_sum - black_sum;

}