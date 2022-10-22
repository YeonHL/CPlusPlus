# include <iostream>

int main() {
    int A;
    int B;
    std::cin >> A >> B;
    std::cout.precision(10);
    std::cout << A/double(B);
}