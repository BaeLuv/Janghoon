#include<iostream>
using namespace std;

int main() {

	int a, b;

	scanf("%d %d", &a, &b);

	printf("%.9f", a / (double)b);
	// printf, scanf가 cin, cout보다 월등히 빠름(사용하는 습관가지기)

}