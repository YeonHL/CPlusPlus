#include <iostream>

int main() {
    std::cin.tie(NULL); std::cout.tie(NULL);
    int n,x,_cycle;

    std::cin >> n;
    x = n;

    for (_cycle=1;true;_cycle++) {
        if (x < 10) x = x * 10 + x;
        else {
            x = (x%10) * 10 + (x / 10 + x % 10) % 10;
        }
        if (x == n) break;
    }

    std::cout << _cycle << "\n";
}