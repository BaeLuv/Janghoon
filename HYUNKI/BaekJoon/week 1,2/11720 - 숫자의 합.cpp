#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ó������ ���ڸ� �ް� 10���� �������鼭 �������� ���Ϸ��� �ߴµ� ������ ũ�⸦ �������ߴ�. �ٸ� ����� ã�ƺ��Ҵ�.
/*
int main() {
	int N;
	unsigned long num;
	int sum = 0;
	scanf("%d", &N);
	scanf("%d", &num);
	while (num != 0) {
		sum += num % 10;
		num = num / 10;
	}
	printf("%d", sum);
}
*/

int main() {
	int N;
	int sum = 0;
	char num[100];
	scanf("%d", &N);
	scanf("%s", &num);
	//"123"�� �Է��ϸ� �迭�� {'1', '2', '3',...}�� �ǰ� '3' - '0' �� 10���� �ٲ��� �� '3'�ϰ� '0'�ϰ� 3���̳��� ������ char�� int�� �ٲ� �� �ִ�.
	for (int i = 0; i < N; i++)
		sum += (num[i] - '0');
	printf("%d", sum);
}