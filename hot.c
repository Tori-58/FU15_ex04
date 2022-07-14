#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main()
{
	int countH = 0;
	int countT = 0;
	
	srand((unsigned int)time(NULL));
	
	printf("Tossing a coin...\n");
	
	for(int i = 1; i <= 3; i++)
	{
		if(rand() < (RAND_MAX / 2))
		{
			printf("Round %d: Heads\n",i);
			countH++;
		}
		else
		{
			printf("Round %d: Tails\n",i);
			countT++;
		}
		sleep(0.5);
	}
	
	printf("Heads: %d, Tails: %d\n",countH,countT);
}