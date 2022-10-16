/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:35:03 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/16 01:54:03 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	if (!dest && !src)
		return (NULL);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int	dest1[2] = {1, 3};
// 	int src[4] = {1, 2, 3, 4};
// 	memcpy(dest1, src, 0);
// 	for (int i = 0; i < sizeof(dest1) / sizeof(int); i++)
// 		printf("%d", dest1[i]);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[] = "abcde";
// 	printf("%s", ft_memmove(s, s+2, 3));
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[] = "youness";
// 	printf("%s", memmove(s + 1, s, 3));
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[] = "abc";
// 	int d[] = {1, 2, 3, 4};
// 	int* tmp = memcpy(s, d, 2);
// 	printf("|%c|", tmp[0]);
// }

// int main()
// {
// 	char src[] = "abcde";
// 	printf("org dest = %s\n", ft_memcpy(src, src + 2, 3));
// 	//printf("%s\n", dest);
// }
