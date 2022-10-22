#include <iostream>

int main() {
    std::cin.tie(NULL); std::cout.tie(NULL);
    int t,a,b,i;

    std::cin >> t;

    for (i=1; i<=t; i++) {
        std::cin >> a >> b;
        std::cout << a+b << "\n";
    }
}

// 빠른 풀이 보면서 어떤 코드를 사용한건지 다시 이해하기

// 예시 1

/* #include <cstdio>
#include <cstring>

int main()
{
	char digit[2001][8], board[5] = { 48,48,48,48,'\n' };
	int len[2001], num = 1, L = 1;

	for (; num <= 1000; num++)
	{
		board[3]++;
		for (int i = 3; i > 0 && board[i] > 57; i--)
			board[i] -= 10, board[i - 1]++;
		if (board[4 - L] > 48) L++;

		memcpy(digit[num], board + 5 - L, L);
		len[num] = L;
	}

	for (; num <= 2000; num++)
	{
		board[3]++;
		for (int i = 3; i > 0 && board[i] > 57; i--)
			board[i] -= 10, board[i - 1]++;

		memcpy(digit[num], board, 5);
		len[num] = 5;
	}

	char Text[10000020], * pR = Text + 10, * pW = Text;
	fread(Text + 10, 1, 10000010, stdin);

	int N = *pR & 15;
	while (*++pR & 16)
		N = 10 * N + (*pR & 15);

	int A, B;
	while (N--)
	{
		A = *++pR & 15;
		if (*++pR & 16) {
			A = 10 * A + (*pR & 15);
			if (*++pR & 16) {
				A = 10 * A + (*pR & 15);
				if (*++pR & 16)
					A = 1000, pR++;
			}
		}

		B = *++pR & 15;
		if (*++pR & 16) {
			B = 10 * B + (*pR & 15);
			if (*++pR & 16) {
				B = 10 * B + (*pR & 15);
				if (*++pR & 16)
					B = 1000, pR++;
			}
		}

		A += B;
		memcpy(pW, digit[A], 8);
		pW += len[A];
	}

	fwrite(Text, 1, pW - Text, stdout);
} */


// 예시 2

/* #pragma GCC optimize ("O3")
#pragma GCC target("arch=skylake")

#include <string.h>
#include <unistd.h>

char a[2002][8], b[2002];
char s[131072];
char r[4500000];

int main() {
    register char *p = s, *q = r;
    register int i, x, y, n = 0;
    for (i = 2; i <= 2000; i++) {
        if (i > 999) {
            a[i][0] = i / 1000 | 48;
            a[i][1] = i / 100 % 10 | 48;
            a[i][2] = i / 10 % 10 | 48;
            a[i][3] = i % 10 | 48;
            a[i][4] = 10;
            b[i] = 5;
        }
        else if (i > 99) {
            a[i][0] = i / 100 | 48;
            a[i][1] = i / 10 % 10 | 48;
            a[i][2] = i % 10 | 48;
            a[i][3] = 10;
            b[i] = 4;
        }
        else if (i > 9) {
            a[i][0] = i / 10 | 48;
            a[i][1] = i % 10 | 48;
            a[i][2] = 10;
            b[i] = 3;
        }
        else {
            a[i][0] = i | 48;
            a[i][1] = 10;
            b[i] = 2;
        }
    }
    syscall(0, 0, s, 131072);
    while (*p & 16) n = n * 10 + (*p++ & 15);
    for (i = 0; i < n; i++) {
        if ((i & 16383) == 16383) {
            memmove(s, p, s + 131072 - p);
            syscall(0, 0, s + (s + 131072 - p), p - s);
            p = s;
        }
        p++;
        x = *p++ & 15;
        if (*p & 16) {
            x = x * 10 + (*p++ & 15);
            if (*p & 16) {
                x = x * 10 + (*p++ & 15);
                if (*p & 16) {
                    x = x * 10 + (*p++ & 15);
                }
            }
        }
        p++;
        y = *p++ & 15;
        if (*p & 16) {
            y = y * 10 + (*p++ & 15);
            if (*p & 16) {
                y = y * 10 + (*p++ & 15);
                if (*p & 16) {
                    y = y * 10 + (*p++ & 15);
                }
            }
        }
        x += y;
        memcpy(q, a[x], 8);
        q += b[x];
    }
    syscall(1, 1, r, q - r);
} */


// 예시 3

/* #include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
using namespace std;

constexpr int SZ = 1 << 16;

int main() {
	struct stat st; fstat(0, &st);
	char w[SZ], *p = (char*)mmap(0, st.st_size, PROT_READ, MAP_SHARED, 0, 0), *q = w;
	auto ReadInt = [&]() {
		int ret = 0;
		for (char c = *p++; c & 16; ret = 10 * ret + (c & 15), c = *p++);
		return ret;
	};
	auto WriteInt = [&](int n) {
		if (q + 20 >= w + SZ) write(1, w, q - w), q = w;
		int sz = 1;
		for (int t = n; t >= 10; t /= 10) sz++;
		for (int i = sz; i --> 0; n /= 10) q[i] = n % 10 | 48;
		q += sz;
	};

	int N = ReadInt();
	while (N--) {
		int a = ReadInt(), b = ReadInt();
		WriteInt(a + b); *q++ = '\n';
	}
	write(1, w, q - w);
} */