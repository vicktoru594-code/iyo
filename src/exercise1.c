#include <stdio.h>

int main(int argc, char** argv) {
    double numbers[10];
    double sum = 0.0;

    printf("Введите 10 вещественных чисел:\n");

    for(int i=0; i<10; i++){
        printf("Число %d:", i+1);
        scanf("%lf", &numbers[i]);
        sum+=numbers[i];
    }
   
    double avg = sum/10;
    printf("%.2f\n", avg);
    return 0;
}