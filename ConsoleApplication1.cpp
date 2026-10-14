#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

int main() {
	int a, b;
	std::cin >> a >> b;
	int max = a > b ? a : b;
	for (int i = max; i <= a * b; ++i) {
		if (i % a == 0 && i % b == 0) {
			std::cout << i;
			return 0;
		}
	}
	std::cout << a * b;
}