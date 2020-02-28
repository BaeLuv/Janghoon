#include<iostream>
#include<stack>
using namespace std;

string pipe; // ���� ����

int pipe_num(const string& pipe) {
	stack<char> char_s;
	int number = 0;
	for (int i = 0; i < pipe.size(); i++) {
		if (pipe[i] == '(') char_s.push(pipe[i]); // '(' �Ͻ� stack�� �߰��Ѵ�.
		else { // ')'�� ��
			char_s.pop();
			if (pipe[i - 1] == '(') { // �ٷ� �� ���ڰ� '('�̸� ������
				number += char_s.size(); // ���� ����(stack size)�� �����ش�.
			}
			else number++; // �������� �ƴ� ��� �������� ���̴� 1�� �����ش�.
		}
	}
	return number;

}

int main() {

	cin >> pipe;
	cout << pipe_num(pipe);

	return 0;
}