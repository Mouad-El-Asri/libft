/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:40:54 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/14 00:28:20 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)s;
	while (n > i)
	{
		x[i] = 0;
		i++;
	}
	s = x;
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int s[] = {255, 2, 3, 4};
// 	bzero(NULL, 1);
// 	printf("%d", s[0]);
// }
