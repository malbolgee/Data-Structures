noArv* push(noArv *arvore, int numero)
{

	if (!arvore)
	{

		arvore = (noArv *) malloc(sizeof(noArv));
		arvore->numero = numero;
		arvore->esquerda = arvore->direita = NULL;

	}
	else if (arvore->numero > numero)
		arvore->esquerda = insere(arvore->esquerda, numero);

	else
		arvore->direita = insere(arvore->direita, numero);

	return arvore;

}
