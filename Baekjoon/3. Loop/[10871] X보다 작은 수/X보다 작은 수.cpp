#include <cstdio>

int main(){
	int N, X;
	scanf("%d %d", &N, &X);

	int A;
	while(N--){
		scanf("%d", &A);
		if(A < X)
			printf("%d ", A);
	}
}

// scanf가 Buffer에 미리 입력하는 것으로 보임, 맞는지 확인