#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	while (T--)
	{
		stack<char> new_str;
		string str = "";

		getline(cin, str);

		for (int i = 0; i < str.size(); i++) {
			// str���� ���鿡 ���� ������ new_str�� push �� ���� ������ ������ top�� ����ϰ� pop���Ѽ� �ܾ �������ش�
			// �� �� ������ �Է½��Ѽ� �ܾ �ϼ��Ѵ�.
			if (str.at(i) != ' ') {
				new_str.push(str.at(i));
			}
			else {
				while (!new_str.empty()) {
					printf("%c", new_str.top());
					new_str.pop();
				}
				printf(" ");
			}
		}

		//������ �ܾ new_str�� �� �� �Ȱ��� ������ش�.
		while (!new_str.empty()) {
			printf("%c", new_str.top());
			new_str.pop();
		}
		printf("\n");

	}
}