#include <stdio.h>

void recursive(int n){
    if (n > 0) {
        printf("%d \n", n);

        recursive(n - 1);
    }
}

int main() {

    int q = 10;
    

    printf("Contagem regressiva...\n");
    recursive(q);

    return 0;
}