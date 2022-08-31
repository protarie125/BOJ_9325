#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto s = int{};
		cin >> s;

		auto n = int{};
		cin >> n;
		while (0 < (n--)) {
			auto p = int{};
			auto q = int{};
			cin >> p >> q;

			s += p * q;
		}

		cout << s << '\n';
	}

	return 0;
}