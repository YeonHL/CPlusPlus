# include <iostream>

int main() {
    int n,i,j,_sum,_count;
    
    std::cin >> n;
    std::string s[n];

    for (i=0;i<n;i++) {
        _count = 1;
        _sum = 0;
        std::cin >> s[i];
        for (j=0;j<s[i].size();j++){
            if (s[i][j] == 'O') {
                _sum += _count++;
            }
            else if (s[i][j] == 'X') {
                _count = 1;
            }
        }
        std::cout << _sum << "\n";
    }
}