void pop(tipoPilha *pilha)
{

	tipoNo *auxiliar;

	auxiliar = pilha->primeiro;

	if (auxiliar)
	{

		pilha->primeiro = auxiliar->proximo;
		free(auxiliar);

	}

}
