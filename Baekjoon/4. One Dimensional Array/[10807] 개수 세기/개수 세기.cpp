#include <iostream>
#include <vector>

int main(){
    int n,i,v;
    std::cin >> n;
    std::vector<int> arr(n);

    for(i=0;i<n;i++){
        std::cin >> arr[i];
    }

    std::cin >> v;
    int cnt = 0;

    for(i=0;i<n;i++) {
        if (arr[i] == v) cnt++;
    }

    std::cout << cnt;
}