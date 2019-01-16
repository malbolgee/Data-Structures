void bfs(noArv *no)
{

	noArv *fila;
	unsigned i, f;
	_Bool flag = false;

	fila = (noArv *) malloc(qtsNos * sizeof(noArv));
	fila[0] = *no;
	i = 0; f = 1;

	while (f > i)
	{

		*no = fila[i++];
		if (!flag)
			printf("%u", no->numero), flag = true;
		else
			printf(" %u", no->numero);

		if (no->esquerda)
			fila[f++] = *no->esquerda;
		if (no->direita)
			fila[f++] = *no->direita;

	}

	free(fila);

}
