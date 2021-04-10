#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	// check if any two numbers is equal to each other
	cout << (a == b || b == c || a == c ? "YES" : "NO") << '\n';
	return 0;
}
