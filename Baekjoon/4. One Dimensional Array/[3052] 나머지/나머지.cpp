#include <iostream>

int main () {
    int i,j,_count;
    int a[10];

    _count = 0;

    for (i=0; i<=9; i++) {
        std::cin >> a[i];
        for (j=0; j<=i; j++) {
            if (i == j) _count += 1;
            if ((a[i] % 42) == (a[j] % 42)) break;
        } 
    }
    std::cout << _count << "\n";
}