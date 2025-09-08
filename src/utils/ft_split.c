/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:47:48 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/01 16:48:06 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == sep))
			s++;
		if (*s && !(*s == sep))
			count++;
		while (*s && !(*s == sep))
			s++;
	}
	return (count);
}

static	int	ft_word_size(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s && (!(*s == sep)))
	{
		count++;
		s++;
	}
	return (count);
}

static void	free_all(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return ;
}

static char	*ft_word(const char *s, char sep)
{
	char	*word;
	int		word_size;
	int		i;

	word_size = ft_word_size(s, sep);
	word = malloc(sizeof(char) * (word_size + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_size)
	{
		word[i] = *s;
		i++;
		s++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char sep)
{
	char	**split;
	int		i;

	if (!s)
		return (NULL);
	split = malloc (sizeof(char *) * (ft_count_words(s, sep) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && (*s == sep))
			s++;
		if (*s && !(*s == sep))
		{
			split[i] = ft_word(s, sep);
			if (!split[i])
				return (free_all(split), NULL);
			i++;
		}
		while (*s && !(*s == sep))
			s++;
	}
	split[i] = NULL;
	return (split);
}
