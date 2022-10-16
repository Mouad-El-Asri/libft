/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:30:25 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/12 20:27:56 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!to_find || !str) && len == 0)
		return (NULL);
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0' && (i + j) <= len)
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strnstr("mouad", "uad", 5));
// }