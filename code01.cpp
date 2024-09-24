#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);
	
	int K, N;
	long long start = 1, end, mid, sum = 0, lan_max = -1;

	int v[10000];

	cin >> K >> N;

	for (int i = 0; i < K; i++) {
		cin >> v[i];
		sum += v[i];
	}

	end = sum / K;

	

	while (start <= end) {
		int total = 0;
		mid = (start + end) / 2;

		for (int i = 0; i < K; i++) {
			total += v[i] / mid;
		}
		
		if (total >= N) {
			start = mid + 1;
			lan_max = max(lan_max, mid);
		}

		else
			end = mid - 1;
	}
 
	cout << lan_max;

	}



	

