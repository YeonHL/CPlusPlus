#include <iostream>

int main() {
    int x,n,a,b,sum,i;
    std::cin >> x;
    std::cin >> n;

    sum = 0;
    
    for (i=1; i <= n; i++){
        std::cin >> a >> b;
        sum += a*b;
    }

    if (sum == x) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
}