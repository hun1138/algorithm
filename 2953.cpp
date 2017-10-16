#include <stdio.h>
#define NUM_CNT 5
#define SCORE_CNT 4

int main() {
	int maxNum = 0;
	int iTemp = 0;
	for(int i = 1; i <= NUM_CNT; i++) {
		int sumTemp = 0;
		for(int j = 1; j <= SCORE_CNT; j++) {
			int scoreTemp;
			scanf("%d", &scoreTemp);
			sumTemp += scoreTemp;
		}
		if(maxNum < sumTemp) {
			maxNum = sumTemp;
			iTemp = i;
		}
	}

	printf("%d %d\n", iTemp, maxNum);
	return 0;
}
