/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:00:37 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/12 20:30:49 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	if ((!src || !dest) && size == 0)
		return (0);
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	j = dest_length;
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_length + src_length);
}

/*int	main(void)
{
	char dest[10] = "mo3ad";
	char *dest1 = "mo3ad";

	ft_strlcat(dest, dest1, 10);
	printf("%s\n", dest); 
}
*/