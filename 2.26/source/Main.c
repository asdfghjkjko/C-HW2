#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	scanf_s("%d%d", &a, &b);
	if (a % b == 0)
	{
		printf("%d �O %d ������\n", a, b);
	}
	else if (a % b != 0)
	{
		printf("%d ���O %d ������\n", a, b);
	}
	system("pause");
	return 0;
}