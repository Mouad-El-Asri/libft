/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:10:42 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/10 21:26:16 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	char			*s;
	unsigned char	k;

	i = ft_strlen(str);
	s = (char *)str;
	k = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == k)
			return (s + i);
		i--;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "mou\0ad";
// 	int c = '\0';
// 	char *x = ft_strrchr(str, c);
// 	printf("%s", x);
// }
