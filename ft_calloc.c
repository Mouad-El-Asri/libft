/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:31:42 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/17 15:30:46 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*x;

	if (size && (count > (SIZE_MAX / size)))
		return (NULL);
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
// 	x = ft_calloc(SIZE_MAX, SIZE_MAX);
// 	printf("d = %s", x);
// 	//printf("p = %p\n", x);
// }
