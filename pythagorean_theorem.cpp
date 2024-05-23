#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
	int n, count = 0;
	cin >> n;

	double tmp;

	for (int i = 1; i < n; i++) {
		for (int j = i; (i*i) + (j*j) <= (n*n); j++) {
			tmp = i*i + j*j;

			if (int(sqrt(tmp)) * int(sqrt(tmp)) == tmp)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}