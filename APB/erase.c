void erase(noArv *arvore)
{

	if (!arvore)
		return;

	erase(arvore->esquerda);
	erase(arvore->direita);
	free(arvore);
	arvore = NULL;


}
