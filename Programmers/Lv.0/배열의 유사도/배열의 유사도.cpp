#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (int i=0; i<= s1.size()-1; i++) {
        for (int j=0; j <= s2.size()-1; j++) {
            if (s1[i] == s2[j]) answer++;
        }
    }
    return answer;
}