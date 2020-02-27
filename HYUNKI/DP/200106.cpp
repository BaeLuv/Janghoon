#include<iostream>
#include<vector>
using namespace std;

int main() {

    int m;
    int length = 0;
    vector<int> v;

    printf("Input: ");
    scanf_s("%d", &m);
    printf("Output: ");

    if (m < 0) printf("False");
    else {
        while (m != 0) {
            v.push_back(m % 10);
            m /= 10;
            length++;
        }
        for (int i = 0; i < v.size() / 2; i++) {
            if (v[i] != v[v.size() - i - 1]) {
                printf("False");
                return 0;
            }
        }
        printf("True");
    }
}