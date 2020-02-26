#include<iostream>
#include<string>
using namespace std;

int main() {

    int front = -1, back = -1;
    int int_queue[10001];
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
            back++;
            int_queue[back] = atoi(command.substr(5).c_str());
        }
        else if (command == "pop") {
            if (back - front == 0) cout << "-1\n";
            else {
                front++;
                cout << int_queue[front] << "\n";
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