bool pop(tipoFila *fila, tipoDado *retorno)
{
	tipoNo *auxiliar;

	if (fila->primeiro)
	{

		if (fila->primeiro->proximo)
		{

			*retorno = fila->primeiro->dado;
			auxiliar = fila->primeiro;
			fila->primeiro = fila->primeiro->proximo;
			free(auxiliar);
			return true;

		}
		else
		{

			*retorno = fila->primeiro->dado;
			auxiliar = fila->primeiro;
			fila->primeiro = fila->ultimo = NULL;
			free(auxiliar);
			return true;

		}

	}
	else
	{

		retorno = NULL;
		return false;

	}

}
