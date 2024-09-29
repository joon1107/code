#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;

	cin >> N;

	priority_queue <int> pq;

	for (int i = 0; i < N; i++) {
		int Input;
		cin >> Input;

		if (Input == 0) {
			if (pq.empty()) {
				cout << "0" <<'\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
			pq.push(Input);
	}

}




