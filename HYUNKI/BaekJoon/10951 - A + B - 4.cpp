#include <iostream>
using namespace std;

int main() {

	int a, b;
	while (true) {
		cin >> a >> b;
		//eof : end of file(������ ��)
		//�Է¹��� ���� ������ cin.eof()�� true�� ��ȯ�Ѵ�.
		if (cin.eof() == true) {
			break;
		}
		cout << a + b << '\n';
	}
}