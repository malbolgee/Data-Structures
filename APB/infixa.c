void showIn(noArv *arvore)
{

	if (arvore)
	{

		showIn(arvore->esquerda);
		printf(" %d", arvore->numero);
		showIn(arvore->direita);

	}

}
