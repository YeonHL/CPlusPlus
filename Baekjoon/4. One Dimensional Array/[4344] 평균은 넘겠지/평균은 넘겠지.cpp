#include <cstdio>

int main() {
    int c,n,i,_sum;
    double _avg,_count;
    scanf("%d", &c);

    while(c--) {
        scanf("%d", &n);
        int a[n];

        _count = 0;
        _sum = 0;

        for (i=0;i<n;i++) {
            scanf("%d", &a[i]);
            _sum += a[i];
        }

        _avg = _sum / n;

        for (i=0;i<n;i++) {
            if (a[i] > _avg) _count += 1;
        }

        printf("%.3lf%\n",_count/n*100);
    }
}