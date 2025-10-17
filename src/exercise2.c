#include <stdio.h>

int main(int argc, char** argv) {
    double numbers[10];
    printf("Введите 10 вещественных чисел:\n");

    for(int i=0; i<10; i++){
        printf("Число %d:", i+1);
        scanf("%lf", &numbers[i]);

    }
    printf("Исходный массив:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10 / 2; i++) {
        double temp = numbers[i];
        numbers[i] = numbers[10 - 1 - i];
        numbers[10 - 1 - i] = temp;
    }
    
    printf("Инвертированный массив:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");
    return 0;
}