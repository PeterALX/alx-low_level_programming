hash tables
	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			return (1);
		}
	}
