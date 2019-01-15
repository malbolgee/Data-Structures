int top(_pqueue *pqueue, char *str)
{

	if (pqueue == NULL || pqueue->qtd == 0)
		return 0;

	if (strcmp(str, "first") == 0)
		return (pqueue->dados[0].prioridade);
	else if (strcmp(str, "second") == 0)
		return (pqueue->dados[0].id);

}
