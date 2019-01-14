void showPost(noArv *arvore)
{

	if (arvore)
	{

		showPost(arvore->esquerda);
		showPost(arvore->direita);
		printf(" %d", arvore->numero);

	}

}
