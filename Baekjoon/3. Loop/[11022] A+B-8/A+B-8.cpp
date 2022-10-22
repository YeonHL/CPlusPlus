#include <iostream>

int main() {
    std::cin.tie(NULL); std::cout.tie(NULL);
    int t,a,b,i;

    std::cin >> t;

    for (i=1; i<=t; i++){
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }
}