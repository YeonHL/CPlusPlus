#include <cstdio>

int main() {
    int N, A, _Min, _Max;
    _Min = 1000000;
    _Max = -1000000;

    scanf("%d", &N);

    while (N--) {
        scanf("%d", &A);
        if (A > _Max) _Max = A;
        if (A < _Min) _Min = A;
    }

    printf("%d %d", _Min, _Max);
}

// 예제 1

/* #include <cstdio>
#include <unistd.h>
#define l (1 << 17)

char s[l], *c = s;
inline char get()
{
  if(*c <= 0) s[read(0, c = s, l)] = 0;
  return *c;
}

inline int scan()
{
  int x = 0, n = 0;
  for(c += n = *c == '-'; get() >= '0'; c++)
    x = (x * 10) + (*c & 15);
  c++;
  return n ? -x : x;
}

int main()
{
  int min = 1e6, max = -1e6;
  
  for(int n = scan(); n; n--)
  {
    register int num = scan();
    min = min < num ? min : num;
    max = max > num ? max : num;
  }

  printf("%d %d", min, max);
} */


// 예제 2

/* #include <bits/stdc++.h>
#include <unistd.h>
#include <sys/mman.h>
#ifdef TOPOLOGY
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
using namespace std;

int main(){
	int flag = PROT_READ | PROT_WRITE;
	char *ptr = (char *) mmap(0, 8000100, flag, MAP_PRIVATE, 0, 0);
	int n = 0, m = (int) 2e9, M = (int) -2e9;
	while (*ptr > 40) n = 10 * n + (*ptr++ & 15);
	for (int i=0; i<n; i++){
		int tmp = 0;
		bool f = false;
		while (*ptr < 40) ptr++;
		if (*ptr == 45) ptr++, f = true;
		while (*ptr > 40) tmp = 10 * tmp + (*ptr++ & 15);
		tmp = f ? -tmp : tmp;
		m = min(m, tmp);
		M = max(M, tmp);
	}
	printf("%d %d\n", m, M);
	return 0;
} */