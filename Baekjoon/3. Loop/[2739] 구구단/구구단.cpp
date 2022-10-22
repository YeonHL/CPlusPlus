#include <iostream>

int main() {
    int n, i;
    std::cin >> n;

    for (i=1; i<=9; i++) {
        std::cout << n << " * " << i << " = " << n*i << std::endl;
    }
}