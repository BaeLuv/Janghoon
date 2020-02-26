#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int T;
	string command;
	int int_stack[10000];
	int point = -1;

	cin >> T;
	cin.ignore();

	while (T--) {

		getline(cin, command);

		if (command.substr(0, 4) == "push") {
			point++;
			int_stack[point] = atoi(command.substr(5).c_str());
		}
		else if (command == "pop") {
			if (point == -1)
				printf("-1\n");
			else {
				printf("%d\n", int_stack[point]);
				point--;
			}
		}
		else if (command == "size")
			printf("%d\n", point + 1);
		else if (command == "empty") {
			if (point == -1)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (command == "top") {
			if (point == -1)
				printf("-1\n");
			else
				printf("%d\n", int_stack[point]);
		}

	}
}