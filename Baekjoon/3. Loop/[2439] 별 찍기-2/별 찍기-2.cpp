#include <iostream>

int main() {
    std::cin.tie(NULL); std::cout.tie(NULL);
    int t,i,j;

    std::cin >> t;

    for (i=1; i<=t; i++) {
        std::cout.width(t-i+1);
        for (j=1; j<= i; j++) {
            std::cout << "*";
        }
    std::cout << "\n";
    }
}