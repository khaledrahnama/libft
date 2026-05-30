/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krahnama <krahnama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:49:25 by krahnama          #+#    #+#             */
/*   Updated: 2026/05/30 20:51:46 by krahnama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_word(char const* s, char c)
{
    size_t counter;
    size_t i;
    i=0;
    counter=0;
    while(s[i])
    {
        while(s[i] == c)
        i++;

        if (s[i])
        counter++;

        while(s[i] && s[i] != c)
        {
            i++;
        }
    }
    return (counter);
}

static void	fill_word(char **result, char const *s, char c, size_t *i)
{
	size_t	j;
	size_t	len;

	j = 0;
	len = word_length(&s[*i], c);
	result[0] = malloc(len + 1);
	if (!result[0])
		return ;

	while (s[*i] && s[*i] != c)
		result[0][j++] = s[(*i)++];
	result[0][j] = '\0';
}


size_t word_length(char const* s, char c)
{
    size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
    
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word;
	size_t	counter;

	if (!s)
		return (NULL);
	counter = count_word(s, c);
	result = malloc((counter + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	word = 0;
	while (word < counter)
	{
		while (s[i] == c)
			i++;
		result[word] = malloc(word_length(&s[i], c) + 1);
		if (!result[word])
			return (NULL);
		size_t j = 0;
		while (s[i] && s[i] != c)
			result[word][j++] = s[i++];
		result[word++][j] = '\0';
	}
	result[word] = NULL;
	return (result);
}


#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**split;
	size_t	i;

	printf("Test 1: normal string\n");
	split = ft_split("Arthur Merlin Lancelot", ' ');

	i = 0;
	while (split && split[i])
	{
		printf("[%s]\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	printf("\nTest 2: multiple spaces\n");
	split = ft_split("  hello   world 42  ", ' ');

	i = 0;
	while (split && split[i])
	{
		printf("[%s]\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	printf("\nTest 3: no separator\n");
	split = ft_split("libft", ' ');

	i = 0;
	while (split && split[i])
	{
		printf("[%s]\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	printf("\nTest 4: empty string\n");
	split = ft_split("", ' ');

	i = 0;
	while (split && split[i])
	{
		printf("[%s]\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	return (0);
}