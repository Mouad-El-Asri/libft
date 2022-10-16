/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:26:55 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/11 13:18:07 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (x + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	const char str[] = "http://www.sonofguun.com";
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
//    	const char ch = '.';
// 	char *ret;

//    ret = memchr(s, 258, 3);

//    printf("%s\n", ret);

//    return(0);
// }
