/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:52:59 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/14 14:46:48 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest > src)
	{
		while (len)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	int	dest1[2] = {1, 3};
// 	int src[5] = {1, 2, 3, 4, 5};
// 	printf("%s\n", s2);
// 	ft_memmove(s2, s, 5);
// 	ft_memcpy(src + 2, src, 20);
// 	for (int i = 0; i < sizeof(src) / sizeof(int); i++)
// 		printf("%d", src[i]);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s;
// 	s = NULL;
// 	char *d = NULL;
// 	printf("%s", memmove(d, s, 0));
// }
