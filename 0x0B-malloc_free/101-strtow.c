#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * is_space - checks if a char is a space char or '\0'
 * @c: the char to be checked
 * Return: 1 if is space 0 otherwise
 */
int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\0') /*check new line?*/
		return (1);
	else
		return (0);
}

/**
 * append_string - appends a string to an array of strings
 * @strarr: the array of strings to be appended to
 * @str: the string to be appended
 * @str_len: the length of the string to be appended
 * Return: 1 is success, 0 if fail
 */
int append_string(char **strarr, char *str, int str_len)
{
	int len = 0;
	char *new_word;
	int i;

	while (strarr[len])
		len++;

	new_word = malloc(sizeof(char) * (str_len + 1));
	if (!new_word)
		return (0);

	for (i = 0; i < str_len; i++)
	{
		new_word[i] = str[i];
	}
	new_word[str_len] = '\0';

	strarr[len] = new_word;
	strarr[len + 1] = NULL;

	return (1);
}

/**
 * free_strarr - frees an array of strings
 * @strarr: the array of strings to be freed
 * Return: 1 is success, 0 if fail
 */
void free_strarr(char **strarr)
{
	while (*strarr)
	{
		free(*strarr);
		strarr++;
	}
}
/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: an array of the words, NULL on failure
 */
char **strtow(char *str)
{
	int i;
	int word_count = 0;
	char **strarr = NULL;
	int word_start;


	if (!str || !str[0])
		return (NULL);

	/*figure out word count */
	for (i = 0; str[i]; i++)
	{
		if (!is_space(str[i]) && is_space(str[i + 1]))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	/* alloc some mem */
	strarr = malloc(sizeof(char *) * (word_count + 1));
	if (!strarr)
		return (NULL);
	strarr[0] = NULL;

	/*pack them words */
	word_start = 0;
	for (i = 0; str[i]; i++)
	{
		if (i > 0)
		{
			if (!is_space(str[i]) && is_space(str[i - 1]))
				word_start = i;
		}
		if (!is_space(str[i]) && is_space(str[i + 1]))
		{
			if (!append_string(strarr, str + word_start, i - word_start + 1))
			{
				free_strarr(strarr);
				return (NULL);
			}
		}
	}

	return (strarr);
}
