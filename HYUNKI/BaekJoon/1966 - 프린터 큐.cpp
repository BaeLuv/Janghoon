#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;

int main() {

    int T; // 테스트 케이스
    scanf("%d", &T);

    while (T--) {
        int N, M, elem;
        queue<pair<int, int>> int_q; // 순서랑 중요도를 같이 입력 
        priority_queue<int> pq; // 중요도만 우선순위 큐로 입력(중요도가 높은 것이 제일 앞에있음)
        int order = 1; // 순서는 1부터 시작
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++) { // 중요도를 입력받아서 저장
            scanf("%d", &elem);
            pq.push(elem);
            int_q.push({ i, elem });
        }
        
        while (!pq.empty()) {
            if (pq.top() != int_q.front().second) { // 우선순위가 제일 높은 것이 아니면
                pair<int, int> p = int_q.front(); // 제일 앞에 있는 원소를 pop한 후 다시 push로 해서 제일 뒤로 넘김
                int_q.pop();
                int_q.push(p);
            }
            else {
                if (M == int_q.front().first) { // 우리가 원하는 값의 순서가 우선순위가 제일 높은 것과 같으면
                    printf("%d\n", order); // 순서를 출력한다
                    break;
                }
                else { // 우선순위가 제일 높은 것인데 값만 같고 순서가 다른 것이면 
                    pq.pop(); 
                    int_q.pop();
                    order++;
                }
            }
        }
    }

    return 0;
}