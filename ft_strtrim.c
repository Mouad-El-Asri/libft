/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:38:25 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/11 21:56:00 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		back;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	s1 += i;
	back = ft_strlen(s1) - 1;
	while (back && ft_strchr(set, s1[back]))
		back--;
	str = ft_substr((char *)s1, 0, back + 1);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
// 	return (0);
// }
