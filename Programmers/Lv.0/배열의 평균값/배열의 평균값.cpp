#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    int n = size(numbers);

    for (int i=0; i<= n-1; i++) sum += numbers[i];

    return sum / n;
}