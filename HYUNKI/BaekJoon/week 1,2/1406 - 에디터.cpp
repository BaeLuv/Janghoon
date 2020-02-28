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
	/* 처음에는
		for(int i = 0; i < char_stack1.size(); i++) {
			char_stack2.push(char_stack1.top());
			char_stack1.pop();
		}
		이렇게 하니 계속 문자열의 일부분만 나오길래 고민했는데
		알고보니 pop시킬 때마다 size가 줄어들어 원래 실행하려던 횟수보다 더 적게 실행했다.
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

/*처음 접근할 때는 cursor라는 정수 변수를 나타내었고 L과 D를 이용하여 cursor의 위치를 조정한 다음
 원래 자료가 담긴 stack과 임시로 보관할 temp를 이용하여 커서 오른쪽까지의 데이터를 temp로 옮긴 다음
 pop과 push를 이용하여 데이터를 추가하거나 삭제한 다음 temp에 있는 걸 다시 원래 stack으로 옮기려고 했는데 비효율적이었다.*/

 /*그리고 다른 사람들의 코드를 살펴보다가 더 쉬운 방법을 찾았다.
   stack1, 2를 만들어 1에는 커서 왼쪽 2에는 커서 오른쪽의 데이터를 넣는 것이다.
   그리고 난 다음에 커서가움직일 때마다 커서에 맞게 데이터를 추가, 제거 시키니 훨씬 효율적이였다.
 */