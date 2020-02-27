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
			// str에서 공백에 나올 때까지 new_str에 push 한 다음 공백이 나오면 top을 출력하고 pop시켜서 단어를 뒤집어준다
			// 그 후 공백을 입력시켜서 단어를 완성한다.
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

		//마지막 단어가 new_str에 들어간 후 똑같이 출력해준다.
		while (!new_str.empty()) {
			printf("%c", new_str.top());
			new_str.pop();
		}
		printf("\n");

	}
}