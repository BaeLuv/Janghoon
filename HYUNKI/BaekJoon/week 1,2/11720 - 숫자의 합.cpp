#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//처음에는 숫자를 받고 10으로 나눠가면서 나머지를 더하려고 했는데 숫자의 크기를 생각못했다. 다른 방법을 찾아보았다.
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
	//"123"을 입력하면 배열이 {'1', '2', '3',...}이 되고 '3' - '0' 은 10진수 바꿨을 때 '3'하고 '0'하고 3차이나기 때문에 char을 int로 바꿀 수 있다.
	for (int i = 0; i < N; i++)
		sum += (num[i] - '0');
	printf("%d", sum);
}