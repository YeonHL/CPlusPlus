#include <iostream>
#include <algorithm>

int main() {
    int a,b,c;
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << 10000 + 1000*a << std::endl;
    }
    else if (a == b || a == c) {
        std::cout << 1000 + 100*a << std::endl;
    }
    else if (b == c) {
        std::cout << 1000 + 100*b << std::endl;
    }
    else {
        std::cout << 100 * std::max({a,b,c}) << std::endl;
    }
}