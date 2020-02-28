#include<iostream>
#include<stack>
using namespace std;

string pipe; // 전역 변수

int pipe_num(const string& pipe) {
	stack<char> char_s;
	int number = 0;
	for (int i = 0; i < pipe.size(); i++) {
		if (pipe[i] == '(') char_s.push(pipe[i]); // '(' 일시 stack에 추가한다.
		else { // ')'일 때
			char_s.pop();
			if (pipe[i - 1] == '(') { // 바로 전 글자가 '('이면 레이저
				number += char_s.size(); // 조각 개수(stack size)를 더해준다.
			}
			else number++; // 레이저가 아닐 경우 파이프의 끝이니 1을 더해준다.
		}
	}
	return number;

}

int main() {

	cin >> pipe;
	cout << pipe_num(pipe);

	return 0;
}