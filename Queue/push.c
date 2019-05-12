void push(tipoFila *fila, tipoDado dado)
{

	tipoNo *auxiliar;

	auxiliar = (tipoNo *) malloc(sizeof(tipoNo));

	if (!auxiliar)
		exit(1);

	if (fila->primeiro)
	{

		fila->ultimo->proximo = auxiliar;
		auxiliar->proximo = NULL;

	}
	else
		fila->primeiro = auxiliar;

	fila->ultimo = auxiliar;
	auxiliar->dado = dado;

}
