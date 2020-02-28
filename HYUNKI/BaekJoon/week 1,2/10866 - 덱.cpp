#include<iostream>
#include<string>
using namespace std;

int main() {

    int front = 10000, back = 10000;
    int int_queue[20001];
    int T;
    string command;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    cin.ignore();

    while (T--) {
        getline(cin, command);

        if (command.substr(0, 4) == "push") {
            if (command[5] == 'f') {
                int_queue[front] = atoi(command.substr(11).c_str());
                front--;
            }
            else {
                back++;
                int_queue[back] = atoi(command.substr(10).c_str());
            }
        }
        else if (command.substr(0, 3) == "pop") {
            if (back - front == 0) cout << "-1\n";
            else {
                if (command[4] == 'f') {
                    front++;
                    cout << int_queue[front] << "\n";
                }
                else {
                    cout << int_queue[back] << "\n";
                    back--;
                }
            }
        }
        else if (command == "size") {
            cout << back - front << "\n";
        }
        else if (command == "empty") {
            if (back - front == 0) cout << "1\n";
            else cout << "0\n";
        }
        else if (command == "front") {
            if (back - front == 0) cout << "-1\n";
            else cout << int_queue[front + 1] << "\n";
        }
        else if (command == "back") {
            if (back - front == 0) cout << "-1\n";
            else cout << int_queue[back] << "\n";
        }

    }

    return 0;
}