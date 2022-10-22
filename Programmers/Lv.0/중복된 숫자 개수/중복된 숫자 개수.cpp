#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int num = size(array);
    for (int i=0; i<=num-1; i++) if (array[i] == n) answer += 1;
    return answer;
}


// auto를 사용한 경우, 배열 값을 변경할 필요 없이 값만 가져오면 되므로 auto를 활용하여 복사하여 사용

/* int solution(vector<int> array, int n) {
    int answer = 0;
    for(auto i : array) if(i == n) answer++;
    return answer;
} */