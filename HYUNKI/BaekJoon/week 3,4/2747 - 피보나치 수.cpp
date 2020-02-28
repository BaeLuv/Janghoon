#include<iostream>
using namespace std;

// bottom-up 방식 : 밑에서부터 올라간다(작은 문제에서 점점 큰 문제로감)

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
