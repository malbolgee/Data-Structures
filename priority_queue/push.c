void push(_pqueue *pqueue, int prioridade, int id)
{

	if (pqueue == NULL)
		exit(1);

	if (pqueue->qtd == MAX)
		exit(1);

	pqueue->dados[pqueue->qtd].id = id;
	pqueue->dados[pqueue->qtd].prioridade = prioridade;
	balanceiaInsercao(pqueue, pqueue->qtd);
	++pqueue->qtd;

}

void balanceiaInsercao(_pqueue *pqueue, int filho)
{

	int pai;
	pessoa tmp;

	pai = (filho - 1) / 2;

	while ((filho > 0) && (pqueue->dados[pai].prioridade <= pqueue->dados[filho].prioridade))
	{

		tmp = pqueue->dados[filho];
		pqueue->dados[filho] = pqueue->dados[pai];
		pqueue->dados[pai] = tmp;

		filho = pai;
		pai = (pai - 1) / 2;

	}

}
