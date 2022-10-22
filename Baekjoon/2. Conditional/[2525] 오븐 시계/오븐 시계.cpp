# include <iostream>

int main() {
    int a,b,c;
    
    std::cin >> a >> b;
    std::cin >> c;
    
    b += c;

    std::cout << (a+b/60) % 24 << " " << b%60 << std::endl;
}

/* int main() {
    int a,b,c,h,m;
    
    std::cin >> a >> b;
    std::cin >> c;

    h = c / 60;
    m = c % 60;

    if (a+h >= 24) {
        if ((b+m) >= 60) {
            std::cout << (a+h+1) % 24 << " " << (b+m) % 60 << std::endl;
        } 
        else {
            std::cout << (a+h) % 24 << " " << (b+m) << std::endl;
        }
    }
    else {
        if ((b+m) >= 60) {
            if ((a+h+1) == 24) {
                std::cout << 0 << " " << (b+m) % 60 << std::endl;
            }
            else{
                std::cout << (a+h+1) % 24 << " " << (b+m) % 60 << std::endl;
            }
        } 
        else {
            std::cout << (a+h) << " " << (b+m) << std::endl;
        }
    }
} */