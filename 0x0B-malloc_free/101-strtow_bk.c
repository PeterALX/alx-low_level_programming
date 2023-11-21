#include "main.h"
#include <stdio.h>

int scan_and_pack(char **str_array, char *str, int buff_index,
		int len, int cursor, int j, int strlen);

/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: an array of the words, NULL on failure
 */
char **strtow(char *str)
{
	int i;
	int word_count;
	char **str_array = NULL;
	int cursor;
	int len;
	int buff_index;
	int j;
	int strlen = 0;

	if (!str)
		return (NULL);
	word_count = 0;
	for (i = 0; str[i]; i++)
	{
		strlen++;
		if (str[i] == ' ' || str[i] == '	')
			continue;
		if (str[i + 1] == ' ' || str[i + 1] == '	' || str[i + 1] == '\0')
			word_count += 1;
	}
	if (word_count == 0)
		return (NULL);

	str_array = malloc(sizeof(char *) * (word_count + 1));
	if (!str_array)
		return (NULL);

	buff_index = 0;
	len = 0;
	cursor = -1;
	j = 0;
	scan_and_pack(str_array, str, buff_index, len, cursor, j, strlen);
	return (str_array);
}

/**
 * scan-and_pack - scans the string to be split
 * and puts the separate words into str_arr
 *	some decisions here were to fulfil Betty style
 *	eg. passing all those variables as parameters
 *	I apologise if some of those decisions make
 *	this code harder to follow
 * @str_array: where the words will be packed
 * @str: the string to be split
 * @buff_index: index of the buffer currently being packed
 * @len: int used to check the track the lengths of words while scanning
 * @cursor: holds the starting position of a word while scanning its length
 * @j: a variable for tracking the index of the word currently being packed
 * @strlen: length of the string being split
 * Return: 0 if success, 1 if failure
 */
int scan_and_pack(char **str_array, char *str, int buff_index,
		int len, int cursor, int j, int strlen)
{
	int i;

	for (i = 0; i <= strlen; i++)
	{
		if (cursor == -1)
		{
			if (str[i] == ' ' || str[i] == '	' || str[i] == '\0')
				continue;
			cursor = i;
			len++; /* = 1? */
			continue;
		}
		if (cursor >= 0)
		{
			if (str[i] == ' ' || str[i] == '	' || str[i] == '\0')
			{
				i = cursor - 1;
				cursor = -2;
				str_array[buff_index] = malloc(sizeof(char) * (len + 1));
				if (!str_array)
					return (1);
				continue;
			}
			len++;
			continue;
		}
		if (cursor == -2)
		{
			if (str[i] == ' ' || str[i] == '	' || str[i] == '\0')
			{
				str_array[buff_index++][j] = '\0';
				j = 0;
				cursor = -1;
				len = 0;
				continue;
			}
			str_array[buff_index][j++] = str[i];
		}
	}
	return (0);
}
