/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:33:07 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/16 18:39:15 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sep(char s, char c)
{
	int	i;

	i = 0;
	if (s == c)
		return (1);
	return (0);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((!ft_sep(s[i], c) && ft_sep(s[i - 1], c)) || (i == 0 && s[0] != c))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		words;
	char	**x;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	x = (char **)malloc(sizeof(char *) * words + 1);
	if (!x)
		return (NULL);
	while (i < words)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j])
		{
			if (s[j] == c)
				break ;
			j++;
		}
		x[i] = ft_substr(s, start, j - start);
		j++;
		i++;
	}
	x[i] = NULL;
	return (x);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	const char *s = "hello world 10202 go";
// 	ft_split(NULL, ' ');
// 	while (j[i])
// 	{
// 		printf("%s\n", j[i]);
// 		i++;
// 	}
// }
