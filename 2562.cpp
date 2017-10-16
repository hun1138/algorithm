#include <stdio.h>
#define NUM_CNT 9

int main() {
	int maxNum = 0;
	int iTemp = 0;
	for(int i = 1; i <= NUM_CNT; i++) {
		int numTemp;
		scanf("%d", &numTemp);
		if(maxNum < numTemp) {
			maxNum = numTemp;
			iTemp = i;
		}
	}
	printf("%d\n%d\n", maxNum, iTemp);
	return 0;
}
