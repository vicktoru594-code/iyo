#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double numbers[10];
    printf("Введите 10 вещественных чисел: \n");

    for(int i=0; i<10; i++){
        printf("Число %d:", i+1);
        scanf("%lf", &numbers[i]);
    }
    if (argc != 2) {
        fprintf(stderr, "Использование: %s K\n", argv[0]);
        return 1;
    }
    int k = atoi(argv[1]);
    double result[10];
    if (k > 0) {
        for (int i = 0; i < 10; i++) {
            result[(i + k) % 10] = numbers[i];
        }
    } else if (k < 0){
        k = -k;
        for (int i = 0; i < 10; i++) {
            result[i] = numbers[(i + k) % 10];
        }
    } else {
        for (int i = 0; i < 10; i++) {
            result[i] = numbers[i];
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%g", result[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}