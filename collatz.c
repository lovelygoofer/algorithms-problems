#include <stdio.h>
#include <math.h>


int collatz(int n);
int main(){
    int n;
    scanf("%d", &n);

    collatz(n);
}
int collatz(int n){
    printf("%d\n", n);

    if (n == 1){
        return 0;
    } else if (n % 2 == 0){
        collatz(n / 2);
    } else {
        collatz(3 * n + 1);
    }
}

