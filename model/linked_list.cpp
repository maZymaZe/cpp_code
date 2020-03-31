#include <cstdio>
#include <cstdlib>
//define ll linked_list
struct ll
{
	ll *rear, *front;
	int value;
} list[10008];
ll *create_list(int n)
{
	ll *head, *p, *q;
	head = new ll(); //head=malloc(sizeof(ll));
	head->front = NULL;
	head->value = -1;
	p = head->rear = new ll(); //head->rear=malloc(sizeof(ll));
	int t;
	scanf("%d", &t);
	p->front = head;
	p->value = t;
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &t);
		q = new ll(); //q=malloc(sizeof(ll));
		q->front = p;
		q->value = t;
		p->rear = q;
		p = q;
	}
	p->rear = NULL;
	return head;
}
void *add_element(ll *head, int position, int element, int n)
{
	//let element insert to position
	ll *p, *q, *r;
	p = head;

	if (position <= n)
	{
		for (int i = 1; i <= position; i++)
		{
			p = p->rear;
		}
		q = new ll(); //malloc(sizeof());
		q->front = p->front;
		q->value = element;
		q->rear = p;
		r = p->front;
		r->rear = q;
		p->front = q;
	}
	if (position == n + 1)
	{
		for (int i = 1; i < position; i++)
		{
			p = p->rear;
		}
		q = new ll(); //malloc(sizeof(ll));
		p->rear = q;
		q->front = p;
		q->rear = NULL;
		q->value = element;
	}
}

void free_list(ll *head)
{
	ll *p, *q;
	p = head;
	while (p)
	{
		q = p->rear;
		delete p; //free(p);
		p = q;
	}
}
void delete_element(ll *head, int position)
{
	ll *p, *q, *r;
	p = head;
	for (int i = 1; i <= position; i++)
	{
		q = p->rear;
		p = q;
	}
	q = p->front;
	r = p->rear;
	if (!r)
		r->front = q;
	q->rear = r;
	delete p;
}
void substitude_element(ll *head, int position, int element)
{
	ll *p, *q;
	p = head;
	for (int i = 1; i <= position; i++)
	{
		q = p->rear;
		p = q;
	}
	p->value = element;
}
void print_list(ll *head, int n)
{
	printf("the number of elements: %d\n", n);
	printf("blank \t\t value \t \t front\t \t itself \t rear \t\n");
	ll *p;
	p = head;
	for (int i = 1; i <= n + 1; i++)
	{
		printf("%8d\t %8d\t %8d\t %8d\t %8d\t\n", i - 1, p->value, p->front, p, p->rear);
		p = p->rear;
		if (!p)
			break;
	}
}
int main()
{
	int n;
	ll *head;
	scanf("%d", &n);
	head = create_list(n);
	print_list(head, n);

	int addp, adde;
	scanf("%d%d", &addp, &adde);
	add_element(head, addp, adde, n), n++;
	print_list(head, n);

	int dltp;
	scanf("%d", &dltp);
	delete_element(head, dltp), n--;
	print_list(head, n);

	int subp, sube;
	scanf("%d%d", &subp, &sube);
	substitude_element(head, subp, sube);
	print_list(head, n);

	free_list(head);
	return 0;
}
