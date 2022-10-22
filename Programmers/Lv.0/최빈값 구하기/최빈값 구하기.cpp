#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    vector<int> num = {array[0]};
    sort(array.begin(),array.end());
    int _count = 1;
    int _max = 0;

    for (int i=1; i < array.size(); i++){
        if (array[i] == array[i-1]) _count++;
        else _count = 1;

        if (_count > _max) {
            _max = _count;
            num.clear();
            num.push_back(array[i]);
        }
        else if (_count == _max) num.push_back(array[i]);
    }

    if (num.size() == 1) return num[0];
    else return -1;
}