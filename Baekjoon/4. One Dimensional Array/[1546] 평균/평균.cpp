#include <cstdio>

int main() {
    int n,i;
    double _max, _sum;

    scanf("%d", &n);
    double a[n];

    _max,_sum = 0;
    
    for (i=0; i<n; i++) {
        scanf("%lf", &a[i]);
        if (_max < a[i]) _max = a[i];
    }

    for (i=0; i<n; i++) {
        a[i] = a[i] / _max * 100;
        _sum += a[i];
    }

    printf("%lf", _sum/n);
}