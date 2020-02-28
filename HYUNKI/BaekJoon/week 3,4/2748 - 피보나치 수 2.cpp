#include<iostream>
using namespace std;

int n;
long long Fibo[100]; // n이 100까지 가면 int로는 부족하다

long long Fibonacci(int n) {
	if (n < 2) return n; // n이 0일 때: 0, n이 1일 때: 1
	if (Fibo[n] > 0) return Fibo[n]; // Fibo[n]에 이미 값이 있을 때는 바로 불러와 시간을 절약시킨다.
	else return Fibo[n] = Fibonacci(n - 2) + Fibonacci(n - 1); // Fibo[n]에 값이 없을 때는 값을 저장하고 return해준다.	
}

int main() {
	cin >> n;
	cout << Fibonacci(n);

	return 0;
}

/* 기본적인 재귀함수를 이용한 피보나치 수열
int n;

int Fibonacci(int n) {
	if (n == 0) return 0; // n이 0일 때: 0
	else if (n == 1) return 1; // n이 1일 때: 1
	else return(Fibonacci(n - 2) + Fibonacci(n - 1));
}

int main() {
	scanf_s("%d", &n);
	printf("%d", Fibonacci(n));
}
*/