#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,m,i;
    cin >> n >> m;
    vector<vector<int>> a(n,vector <int>(m,0));
    vector<vector<int>> b(n,vector <int>(m,0));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] + b[i][j] << ' ';
        cout << '\n';
    }
}




/* int main() {
	int a[100][100] = { 0 }, n, m, num;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &num);
			printf("%d%c", a[i][j] + num, (j == m - 1 ? '\n' : ' '));
		}
	}
} */
