# include <iostream>

int main() {
    int i, _max, _number;
    int a[9];
    
    _max = 0;

    for (i=0;i<=8;i++) {
        std::cin >> a[i];
        if (_max < a[i]) {
            _max = a[i];
            _number = i+1;
        }
    }

    std::cout << _max << "\n"
              << _number << "\n";
}