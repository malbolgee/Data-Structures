bool busca(Mortos *mortos, char *chave)
{

	bool direita, esquerda;

	if (!mortos)
		return false;

	if (strcmp(mortos->morto, chave) == 0)
		return true;

	if (strcmp(mortos->morto, chave) > 0)
		esquerda = busca(mortos->esquerdo, chave);
	else
		direita = busca(mortos->direito, chave);

}
