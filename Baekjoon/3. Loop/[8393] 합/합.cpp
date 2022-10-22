#include <iostream>

int main() {
    int n, i, sum;
    std::cin >> n;

    sum = 0;

    for (i=1; i<=n; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;
}