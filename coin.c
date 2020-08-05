#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int rnd,cntH=0,cntT=0;
	//char name[15];
	srand((unsigned int)time(NULL));

	/*printf("Who are you?\n>");
	scanf_s("%s", name,15);
	printf("Hello, %s\n", name);*/

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
	if (cntH > cntT) printf("You won\n");
	else printf("You lost\n");

	return 0;
}