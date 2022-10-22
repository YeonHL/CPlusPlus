# include <iostream>

int main() {
    int test_score;
    std::cin >> test_score;
    if (test_score >= 90) {
        std::cout << "A" << std::endl;
    }
    else if (test_score <= 89 && test_score >= 80) {
        std::cout << "B" << std::endl;
    }
    else if (test_score <= 79 && test_score >= 70) {
        std::cout << "C" << std::endl;
    }
    else if (test_score <= 69 && test_score >= 60) {
        std::cout << "D" << std::endl;
    }
    else {
        std::cout << "F" << std::endl;
    }
}