#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double numbers[10];
    printf("Введите 10 вещественных чисел: \n");

    for(int i=0; i<10; i++){
        printf("Число %d:", i+1);
        scanf("%lf", &numbers[i]);
    }
    if (argc != 3) {
        fprintf(stderr, "Использование: %s X K\n", argv[0]);
        return 1;
    }
    
    double X = atof(argv[1]);  
    int K = atoi(argv[2]);    
    
    if (K < 0 || K >= 10) {
        fprintf(stderr, "Ошибка: K должно быть в диапазоне 0-9\n");
        return 1;
    }
    
    
    for (int i = 9; i > K; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[K] = X;
    
    for (int i = 0; i < 10; i++) {
        printf("%g", numbers[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}