#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPSILON 1.0E-5

typedef struct Node
{
	int power;
	double coef;
	struct Node *link, *b;
} Node;
/*TODO*/
Node *addPoly(Node *l, Node *k)
{
	int pw;
	double cf;

	struct Node *head, *p, *t, *w, *r;
	p = l;
	head = l;
	while (k)
	{
		pw = k->power;
		cf = k->coef;
		r = p;
		for (p = head; p; p = p->link)
		{

			if (p == NULL || p->power <= pw)
				break;
			r = p; //remember the one before
		}
		if (p != NULL && p->power == pw)
		{

			p->coef += cf;
		}
		else if (p == head)
		{
			p = (Node *)malloc(sizeof(Node));
			p->link = head;
			head->b = p;
			head = p;
			p->coef = cf;
			p->power = pw;
			p->b = NULL;
		}
		else if (p != NULL)
		{
			t = (Node *)malloc(sizeof(Node));
			w = p->b;
			w->link = t;
			p->b = t;
			t->b = w;
			t->link = p;
			t->coef = cf;
			t->power = pw;
		}
		else
		{
			t = (Node *)malloc(sizeof(Node));
			r->link = t;
			t->b = r;
			t->link = p;
			t->coef = cf;
			t->power = pw;
		}
		k = k->link;
	}
	return head;
}
/*TODO*/
Node *createPoly()
{
	printf("输入多项式：幂次和系数对，幂次小于0输入结束\n");
	int pw;
	double cf;
	struct Node *head, *p, *t, *w, *r;
	head = (Node *)malloc(sizeof(Node));
	p = head;
	head->link = NULL;
	head->b = NULL;
	scanf("%d%lf", &pw, &cf);
	head->coef = cf;
	head->power = pw;
	scanf("%d", &pw);
	while (pw >= 0)
	{
		scanf("%lf", &cf);
		if (fabs(cf) < EPSILON)
		{
			scanf("%d", &pw);
			continue;
		}
		r = p;
		for (p = head; p; p = p->link)
		{

			if (p == NULL || p->power < pw)
				break;
			r = p; //remember the one before
		}
		if (p == head)
		{
			p = (Node *)malloc(sizeof(Node));
			p->link = head;
			head->b = p;
			head = p;
			p->coef = cf;
			p->power = pw;
			p->b = NULL;
		}
		else if (p != NULL)
		{
			t = (Node *)malloc(sizeof(Node));
			w = p->b;
			w->link = t;
			p->b = t;
			t->b = w;
			t->link = p;
			t->coef = cf;
			t->power = pw;
		}
		else
		{
			t = (Node *)malloc(sizeof(Node));
			r->link = t;
			t->b = r;
			t->link = p;
			t->coef = cf;
			t->power = pw;
		}
		scanf("%d", &pw);
	}
	return head;
}
/*TODO*/

void writePoly(struct Node *q)
{
	int f = 0;
	for (; q; q = q->link)
	{
		if (fabs(q->coef) > EPSILON)
		{

			if (!f)
				printf("%.2lfx^%d", q->coef, q->power), f = 1;
			else
			{
				if (q->coef < 0 + EPSILON)
					printf("%.2lfx^%d", q->coef, q->power);
				else
					printf("+%.2lfx^%d", q->coef, q->power);
			}
		}
	}
	printf("\n");
}
/*TODO*/

void freePoly(struct Node *h)
{
	Node *t;
	while (h)
	{
		t = h->link;
		free(h);
		h = t;
	}
}

int main()
{
	Node *h1, *h2, *p, *q;
	h1 = createPoly();
	writePoly(h1);
	h2 = createPoly();
	writePoly(h2);
	h1 = addPoly(h1, h2);
	printf("answer is\n");
	writePoly(h1);
	freePoly(h1);
	freePoly(h2);
	return 0;
}
