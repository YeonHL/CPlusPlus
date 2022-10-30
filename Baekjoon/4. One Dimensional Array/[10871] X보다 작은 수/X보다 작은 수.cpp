#include <iostream>
#include <vector>

int main(){
    int n,x,i;
    std::vector<int> arr(n);
    std::cin >> n >> x;
    for (i=0;i<n;i++) {
        std::cin >> arr[i];
    }
    for (i=0;i<n;i++) {
        if (arr[i]<x) std::cout<<arr[i]<<" ";
    }
}