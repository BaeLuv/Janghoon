
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	string command;
	queue<int> int_queue;
	queue<int> int_queue2;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) int_queue.push(i);

	cout << "<";

	while (--N) {
		for (int i = 1; i < K; i++) {
			int_queue.push(int_queue.front());
			int_queue.pop();
		}
		cout << int_queue.front() << ", ";
		int_queue.pop();
	}
	cout << int_queue.front() << ">\n";
}