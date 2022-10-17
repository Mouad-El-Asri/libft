/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:25:32 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/16 22:49:40 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *)malloc ((ft_strlen(str) * sizeof(char)) + 1);
	if (!cp)
		return (NULL);
	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *src = "abc";
// 	char *x = ft_strdup(NULL);
// 	printf("%s", x);
// }
