#include <stdio.h>

int main(void){
    int n, m, rem, a, b;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);

    a = n;
    b = m;
    while (a > 0){
        rem = a % b;
        b = a;
        a = rem;
    }

    printf("%d/%d", n / b, m / b);
    return 0;
}
