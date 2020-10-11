#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		if (a + 1 != b) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
