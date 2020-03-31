#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
struct Card
{
	char *c;
	char *v;
	int w;
};

void outputCards(struct Card cards[], int n)
{
	int i;
	putchar('\n');
	for (i = 0; i < n; i++)
	{
		printf("%s_%s\n", cards[i].v, cards[i].c);
	}
	putchar('\n');
}

/*TODO*/
/*shuffle the cards: shuffleCards*/
void shuffleCards(struct Card *p, int n)
{
	int i;
	struct Card *q, *r;
	for (i = 1; i <= 1000; i++)
	{
		q = p + (rand() % 52);
		r = p + (rand() % 52);
		*p = *r;
		*r = *q;
		*q = *p;
	}
}

/*TODO*/
void dealCards(struct Card cards[], struct Card pCards[][13])
{
	int i;
	for (i = 0; i < 52; i++)
	{
		pCards[i / 13][i % 13] = cards[i];
	}
}

/*TODO*/
/*Compare two cards:cmpCards*/
int cmpCards(struct Card a, struct Card b)
{
	if (a.w > b.w)
		return 1;
	else
		return -1;
}

int main()
{
	char colors[][30] = {"Diamond", "Flower", "RedHeart", "BlackHeart"};
	char values[][30] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	int i, j;
	int t;
	struct Card cards[52];
	struct Card pCards[4][13];
	srand(time(NULL));

	for (i = 0; i < 13; i++)
		for (j = 0; j < 4; j++)
		{
			cards[i * 4 + j].c = colors[j];
			cards[i * 4 + j].v = values[i];
			cards[i * 4 + j].w = i * 4 + j;
		}

	printf("\nshuffleCards:\n");
	shuffleCards(cards, 52);
	outputCards(cards, 52);

	printf("\ndealCards:\n");
	dealCards(cards, pCards);
	for (i = 0; i < 4; i++)
		outputCards(pCards[i], 13);

	printf("\ncmpCards:\n");
	printf("%s_%s :", pCards[0][0].v, pCards[0][0].c);
	printf(" %c ", cmpCards(pCards[0][0], pCards[3][3]) > 0 ? '>' : '<');
	printf("%s_%s\n", pCards[3][3].v, pCards[3][3].c);
	return 0;
}
