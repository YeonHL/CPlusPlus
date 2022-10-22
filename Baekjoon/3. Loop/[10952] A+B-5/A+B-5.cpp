#include <iostream>

int main() {
    std::cin.tie(NULL); std::cout.tie(NULL);
    int a,b;

    while (true) {
        std::cin >> a >> b;
        if (a == 0 && b == 0){
            break;
        }
        std::cout << a+b << "\n";
    }
}