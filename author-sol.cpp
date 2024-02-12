#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void test_case(int& tc) {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int ans = 0;
	for (int k = 1; k <= n; k++) {
		if (n % k == 0) {
			int g = 0;
			for (int i = 0; i + k < n; i++)
				g = gcd(g, abs(a[i+k] - a[i]));
			ans += (g != 1);
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
