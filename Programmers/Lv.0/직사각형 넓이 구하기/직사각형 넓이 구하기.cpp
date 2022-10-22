#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int x_min = min({dots[0][0],dots[1][0],dots[2][0],dots[3][0]});
    int x_max = max({dots[0][0],dots[1][0],dots[2][0],dots[3][0]});
    int y_min = min({dots[0][1],dots[1][1],dots[2][1],dots[3][1]});
    int y_max = max({dots[0][1],dots[1][1],dots[2][1],dots[3][1]});
    return (x_max-x_min)*(y_max-y_min);
}