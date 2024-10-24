#include <stdio.h>

int main() {
    int paycode;
    double weeklyPay;

    while (1) {
        printf("��J�~��N�X (1: Managers, 2: hourly workers, 3: commission workers , 4: pieceworkers , 0: exit): ");
        scanf_s("%d", &paycode);

        if (paycode == 0) {
            break;
        }

        switch (paycode) {
        case 1:
            printf("�п�J�C�g�T�w�~��: ");
            scanf_s("%lf", &weeklyPay);
            break;

        case 2:
        {
            double hourlyRate;
            int hoursWorked;
            printf("�п�J�C�p�ɤu��: ");
            scanf_s("%lf", &hourlyRate);
            printf("�п�J�u�@�p�ɼ�: ");
            scanf_s("%d", &hoursWorked);
            if (hoursWorked > 40) {
                weeklyPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
            }
            else {
                weeklyPay = hoursWorked * hourlyRate;
            }
        }
        break;

        case 3:
        {
            double grossSales;
            printf("�п�J���P�`�P���B: ");
            scanf_s("%lf", &grossSales);
            weeklyPay = 250 + (grossSales * 0.057);
        }
        break;

        case 4:
        {
            double payPerItem;
            int itemsProduced;
            printf("�п�J�C���~��: ");
            scanf_s("%lf", &payPerItem);
            printf("�п�J�Ͳ����ƶq: ");
            scanf_s("%d", &itemsProduced);
            weeklyPay = payPerItem * itemsProduced;
        }
        break;

        default:
            printf("�L�Ī��~��N�X�C\n");
            continue;
        }

        printf("�C�g�~��: %.2f\n\n", weeklyPay);
    }

    return 0;
}