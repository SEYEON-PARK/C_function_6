#include <stdio.h>

int main(void)
{
	int A, B, Result;

	printf("�� ���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &A, &B);

	Result = sub(A, B);
	printf("%d\n", Result);

	return 0;
}