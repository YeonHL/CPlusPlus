# include <iostream>

int main() {
    int a,b;
    std::cin >> a;
    std::cin >> b;
    std::cout << a*(b%10) << std::endl
              << a*(b%100/10) << std::endl
              << a*(b/100) << std::endl
              << a*b << std::endl;
}