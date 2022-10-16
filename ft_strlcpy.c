/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:26:40 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/07 10:34:12 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
		j++;
	}
	if (dest_size == 0)
		return (i);
	j = 0;
	while (src[j] != '\0' && j < (dest_size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

/*#include <stdio.h>
int main(void)
{
    char dest[] = "mou";
    printf ("%d", sizeof(dest));
    size_t x = ft_strlcpy(dest, "amine", sizeof(dest) / sizeof(char));
    printf("\n%zu\n%s", x, dest);
}*/
