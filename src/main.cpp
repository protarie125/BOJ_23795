#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto ans = int{ 0 };
	auto x = int{};
	cin >> x;
	while (-1 < x) {
		ans += x;

		cin >> x;
	}

	cout << ans;

	return 0;
}