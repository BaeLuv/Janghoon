#include<iostream>
using namespace std;

int n;
long long Fibo[100]; // n�� 100���� ���� int�δ� �����ϴ�

long long Fibonacci(int n) {
	if (n < 2) return n; // n�� 0�� ��: 0, n�� 1�� ��: 1
	if (Fibo[n] > 0) return Fibo[n]; // Fibo[n]�� �̹� ���� ���� ���� �ٷ� �ҷ��� �ð��� �����Ų��.
	else return Fibo[n] = Fibonacci(n - 2) + Fibonacci(n - 1); // Fibo[n]�� ���� ���� ���� ���� �����ϰ� return���ش�.	
}

int main() {
	cin >> n;
	cout << Fibonacci(n);

	return 0;
}

/* �⺻���� ����Լ��� �̿��� �Ǻ���ġ ����
int n;

int Fibonacci(int n) {
	if (n == 0) return 0; // n�� 0�� ��: 0
	else if (n == 1) return 1; // n�� 1�� ��: 1
	else return(Fibonacci(n - 2) + Fibonacci(n - 1));
}

int main() {
	scanf_s("%d", &n);
	printf("%d", Fibonacci(n));
}
*/