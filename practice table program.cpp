#include <stdio.h>
int main() {
    int a,b,n,i;
    printf("enter first and second num : ");
    scanf(" %d %d",&a,&b);
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = a; i <= b; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
