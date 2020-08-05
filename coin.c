#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int rnd,cntH=0,cntT=0;
	srand((unsigned int)time(NULL));

	printf("Tossing a coin...\n");
	for (int i = 0;i < 3;i++) {
		printf("Round %d: ",i+1);
		rnd = rand()% 2;
		if (rnd == 0) {
			cntH++;
			printf("Heads\n");
		}
		else if (rnd == 1) {
			cntT++;
			printf("Tails\n");
		}
	}
	printf("Heads: %d, Tails: %d\n",cntH,cntT);

	return 0;
}