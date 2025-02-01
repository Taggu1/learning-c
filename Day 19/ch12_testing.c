


#define N 10

int main(void) {
    int a[N], *p, *q, i;

    p = &a[2];

    q = p +3;

    p+=6;


    int sum = 0;

    p = &a[0];
    while (p < &a[N])
    {
        sum += *p++;
    }

    for (p = a; p < a + N; p++)
    {
        sum+= *p;
    }
    
    
    
}