#include <iostream>
using namespace std;

int main() {

	int a, b;
	while (true) {
		cin >> a >> b;
		//eof : end of file(파일의 끝)
		//입력받은 값이 없으면 cin.eof()는 true를 반환한다.
		if (cin.eof() == true) {
			break;
		}
		cout << a + b << '\n';
	}
}