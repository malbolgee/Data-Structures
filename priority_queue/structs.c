typedef struct pessoa{

	int id;
	int prioridade;

} pessoa;

typedef struct _pqueue{

	int qtd;
	struct pessoa dados[MAX];

} _pqueue;

void pop(_pqueue *);
void show(_pqueue *);
_pqueue* priority_queue();
void push(_pqueue *, int, int);
int top(_pqueue *, char *);
void balanceiaRemocao(_pqueue *, int);
void balanceiaInsercao(_pqueue *, int);
