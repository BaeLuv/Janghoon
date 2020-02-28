#include<iostream>
using namespace std;

// bottom-up ��� : �ؿ������� �ö󰣴�(���� �������� ���� ū �����ΰ�)

int n;
long long Fibo[100];

long long Fibonacci(int n) {
	Fibo[0] = 0;
	Fibo[1] = 1;
	for (int i = 2; i <= n; i++) Fibo[i] = Fibo[i - 2] + Fibo[i - 1];
	return Fibo[n];
}

int main() {
	cin >> n;
	cout << Fibonacci(n);

	return 0;
}
