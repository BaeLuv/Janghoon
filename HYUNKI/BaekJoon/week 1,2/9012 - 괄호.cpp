#include<iostream>
using namespace std;

int main() {

	int T;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {

		int count = 0;
		string data;
		bool count_data = true;
		cin >> data;

		for (int i = 0; i < data.size(); i++) {
			if (data[i] == '(')
				count++;
			else if (data[i] == ')')
				count--;
			if (count < 0)
				count_data = false;
		}
		if (data[0] == '(' && count == 0 && count_data)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

	}