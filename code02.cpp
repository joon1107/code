#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    long long N, M; // 나무의 수 N, 집으로 가져가려하는 나무의 길이 M
    long long mymax = -1; // 절단기의 최대값
    long long result = 0;
    long long start = 0, end, total, mid;
    int v[1000000];

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (mymax < v[i]) {
            mymax = v[i];
        }
    }

    end = mymax;

    while (end >= start) {
        total = 0;
        mid = (start + end) / 2;

        for (int i = 0; i < N; i++) {
            if (v[i] >= mid) {
                total += v[i] - mid;
            }
        }

        if (total >= M) {
            start = mid + 1;
            result = mid;
        }
        else {
            end = mid - 1;
        }
    }

    cout << result;
}
