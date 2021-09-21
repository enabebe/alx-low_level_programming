#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */
int number(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}
/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = number(str);

