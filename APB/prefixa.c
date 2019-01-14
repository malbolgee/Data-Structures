void showPre(noArv *arvore)
{

	if (arvore)
	{

		printf(" %d", arvore->numero);
		showPre(arvore->esquerda);
		showPre(arvore->direita);

	}

}
