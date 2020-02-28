#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;

int main() {

    int T; // �׽�Ʈ ���̽�
    scanf("%d", &T);

    while (T--) {
        int N, M, elem;
        queue<pair<int, int>> int_q; // ������ �߿䵵�� ���� �Է� 
        priority_queue<int> pq; // �߿䵵�� �켱���� ť�� �Է�(�߿䵵�� ���� ���� ���� �տ�����)
        int order = 1; // ������ 1���� ����
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++) { // �߿䵵�� �Է¹޾Ƽ� ����
            scanf("%d", &elem);
            pq.push(elem);
            int_q.push({ i, elem });
        }
        
        while (!pq.empty()) {
            if (pq.top() != int_q.front().second) { // �켱������ ���� ���� ���� �ƴϸ�
                pair<int, int> p = int_q.front(); // ���� �տ� �ִ� ���Ҹ� pop�� �� �ٽ� push�� �ؼ� ���� �ڷ� �ѱ�
                int_q.pop();
                int_q.push(p);
            }
            else {
                if (M == int_q.front().first) { // �츮�� ���ϴ� ���� ������ �켱������ ���� ���� �Ͱ� ������
                    printf("%d\n", order); // ������ ����Ѵ�
                    break;
                }
                else { // �켱������ ���� ���� ���ε� ���� ���� ������ �ٸ� ���̸� 
                    pq.pop(); 
                    int_q.pop();
                    order++;
                }
            }
        }
    }

    return 0;
}