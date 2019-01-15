_pqueue* priority_queue()
{

	_pqueue *pqueue;

	pqueue = (_pqueue *) malloc(sizeof(_pqueue));
	if (pqueue)
		pqueue->qtd = 0;

	return pqueue;

}
