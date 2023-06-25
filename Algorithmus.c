#include <stdio.h>

int main() {
    int n;
    int summe = 0;
    
    printf("Geben Sie eine nicht-negative ganze Zahl ein: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        summe += i;
    }
    
    printf("Die Summe der Zahlen von 1 bis %d ist: %d\n", n, summe);
    
    return 0;
}

