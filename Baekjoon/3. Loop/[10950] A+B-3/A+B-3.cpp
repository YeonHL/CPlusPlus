#include <iostream>

int main() {
    int a,b,n,i;
    
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> a >> b;
        std::cout << a+b << std::endl;
    }
}