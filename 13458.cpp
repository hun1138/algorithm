#include <stdio.h>
#define MAX_SIZE 1000000

int n;
int arr[MAX_SIZE] = {0};
int b, c;

long long pCnt = 0;

void input() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &b, &c);
}

void process() {
	for(int i = 0; i < n; i++) {
		int numTemp = arr[i] - b;
		pCnt++;

		if(numTemp > 0) {
			pCnt += (long long)(numTemp / c);
			if(numTemp % c != 0) pCnt++;
		}
	}
}

void output() {
	printf("%lld\n", pCnt);
}

int main() {
	input();
	process();
	output();
	return 0;
}
