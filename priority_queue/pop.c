void pop(_pqueue *pqueue)
{

	if (pqueue == NULL)
		exit(1);

	if (pqueue->qtd == 0)
		exit(1);

	--pqueue->qtd;
	pqueue->dados[0] = pqueue->dados[pqueue->qtd];
	balanceiaRemocao(pqueue, 0);

}

void balanceiaRemocao(_pqueue *pqueue, int pai)
{

	int filho;
	pessoa tmp;

	filho = 2 * pai + 1;

	while (filho < pqueue->qtd)
	{

		if (filho < pqueue->qtd - 1)
			if(pqueue->dados[filho].prioridade < pqueue->dados[filho + 1].prioridade)
				++filho;

		if (pqueue->dados[pai].prioridade >= pqueue->dados[filho].prioridade)
			break;

		tmp = pqueue->dados[pai];
		pqueue->dados[pai] = pqueue->dados[filho];
		pqueue->dados[filho] = tmp;

		pai = filho;
		filho = 2 * pai + 1;

	}

}
