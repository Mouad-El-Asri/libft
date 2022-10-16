/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:31:42 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/16 18:35:16 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;

	x = malloc (count * size);
	if (!x)
		return (NULL);
	ft_bzero(x, count * size);
	return (x);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*x;
// 	x = calloc(SIZE_MAX, SIZE_MAX);
// 	printf("d = %s", x);
// 	//printf("p = %p\n", x);
// }
