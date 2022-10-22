#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i = 1;
    while (6*i % n) i++;
    return i;
}