/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:35:09 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/16 15:52:25 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*new_str;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	new_str = (char *)malloc(s_len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (f)(i, (char)s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char	fx(unsigned int i, char c)
// {
// 	i = 0;
// 	if (c >= 97 && c <= 122)
// 		c -= 32;
// 	return (c);
// }

// #include <stdio.h>
// int main()
// {

// 	char s[] = "mouad";

// 	printf("%s", ft_strmapi(s, fx));
// }
