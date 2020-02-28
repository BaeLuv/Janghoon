#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	string str, command;
	stack<char> char_stack1, char_stack2;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> str;
	int cursor = str.size();
	for (int i = 0; i < str.size(); i++) char_stack1.push(str[i]);
	cin >> T;
	cin.ignore();
	while (T--) {
		getline(cin, command);

		if (command == "L") {
			if (!char_stack1.empty()) {
				char_stack2.push(char_stack1.top());
				char_stack1.pop();
			}
		}
		else if (command == "D") {
			if (!char_stack2.empty()) {
				char_stack1.push(char_stack2.top());
				char_stack2.pop();
			}
		}
		else if (command == "B") {
			if (!char_stack1.empty()) {
				char_stack1.pop();
			}
		}
		else if (command[0] == 'P')
			char_stack1.push(command[2]);
	}
	/* ó������
		for(int i = 0; i < char_stack1.size(); i++) {
			char_stack2.push(char_stack1.top());
			char_stack1.pop();
		}
		�̷��� �ϴ� ��� ���ڿ��� �Ϻκи� �����淡 ����ߴµ�
		�˰��� pop��ų ������ size�� �پ��� ���� �����Ϸ��� Ƚ������ �� ���� �����ߴ�.
	*/
	while (!char_stack1.empty()) {
		char_stack2.push(char_stack1.top());
		char_stack1.pop();
	}
	while (!char_stack2.empty()) {
		cout << char_stack2.top();
		char_stack2.pop();
	}

}

/*ó�� ������ ���� cursor��� ���� ������ ��Ÿ������ L�� D�� �̿��Ͽ� cursor�� ��ġ�� ������ ����
 ���� �ڷᰡ ��� stack�� �ӽ÷� ������ temp�� �̿��Ͽ� Ŀ�� �����ʱ����� �����͸� temp�� �ű� ����
 pop�� push�� �̿��Ͽ� �����͸� �߰��ϰų� ������ ���� temp�� �ִ� �� �ٽ� ���� stack���� �ű���� �ߴµ� ��ȿ�����̾���.*/

 /*�׸��� �ٸ� ������� �ڵ带 ���캸�ٰ� �� ���� ����� ã�Ҵ�.
   stack1, 2�� ����� 1���� Ŀ�� ���� 2���� Ŀ�� �������� �����͸� �ִ� ���̴�.
   �׸��� �� ������ Ŀ���������� ������ Ŀ���� �°� �����͸� �߰�, ���� ��Ű�� �ξ� ȿ�����̿���.
 */