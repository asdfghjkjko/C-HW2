#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("�п�J�魫�]����^�G");
    scanf_s("%f", &weight);

    printf("�п�J�����]�̡^�G");
    scanf_s("%f", &height);

    bmi = weight / (height * height);

    printf("�z��BMI�O�G%.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Overweight\n");
    }
    else {
        printf("obese\n");
    }
    
    system("pause");
    return 0;
}