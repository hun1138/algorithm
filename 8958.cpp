#include <stdio.h>
#include <string.h>

#define MAX_SIZE 80

void process() {
	char quiz[MAX_SIZE + 1] = {0};
	int quizLength = 0;

	scanf("%s", quiz);
	quizLength = strlen(quiz);

	int score = 0;
	int totalScore = 0;
	for(int i = 0; i < quizLength; i++) {
		if(quiz[i] == 'O') score++;
		else score = 0;
		totalScore += score;
	}

	printf("%d\n", totalScore);
}

int main() {
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		process();
	}
	return 0;
}
