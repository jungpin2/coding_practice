#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    int result = 0;
    cin >> N >> M;

    deque<int> q;
    for (int i = 1; i <= N; ++i) {
        q.push_back(i);
    }

    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;

        int index = 0;
        for (int j = 0; j < q.size(); ++j) {
            if (q[j] == num) {
                index = j;
                break;
            }
        }

        int leftMoveCount = index;
        int rightMoveCount = q.size() - index;
        int MoveCount = min(leftMoveCount, rightMoveCount);
        result += MoveCount;

        for (int j = 0; j < MoveCount; ++j) {
            if (leftMoveCount < rightMoveCount) {
                q.push_back(q.front());
                q.pop_front();
            }
            else {
                q.push_front(q.back());
                q.pop_back();
            }
        }

        q.pop_front();
    }

    cout << result;
    return 0;
}