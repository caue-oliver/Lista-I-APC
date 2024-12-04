#include <stdio.h>

int main(){
    int n, n2, n3, n4, n5, n6, n7;
    scanf("%d\n", &n);
    n2 = n % 100;
    n3 = n2 % 50;
    n4 = n3 % 20;
    n5 = n4 % 10;
    n6 = n5 % 5;
    n7 = n6 % 2;
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    printf("%d nota(s) de R$ 50,00\n", n2/50);
    printf("%d nota(s) de R$ 20,00\n", n3/20);
    printf("%d nota(s) de R$ 10,00\n", n4/10);
    printf("%d nota(s) de R$ 5,00\n", n5/5);
    printf("%d nota(s) de R$ 2,00\n", n6/2);
    printf("%d nota(s) de R$ 1,00\n", n7/1);
    return 0; 
}