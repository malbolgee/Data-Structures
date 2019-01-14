void push(tipoPilha *pilha, tipoDado dado)
{


	tipoNo *auxiliar;

	auxiliar = (tipoNo *) malloc(sizeof(tipoNo));

	if (!auxiliar)
		exit(1);

	auxiliar->proximo = pilha->primeiro;
	pilha->primeiro = auxiliar;
	auxiliar->dado = dado;

}
