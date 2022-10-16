/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:36:20 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/15 01:30:38 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

// #include <stdio.h>

// void	fx(unsigned int i, char *c)
// {
// 	i = 0;
// 	if (c[i] >= 97 && c[i] <= 122)
// 		c[i] -= 32;
// }

// int main()
// {
// 	char s[] = "mouad";

// 	ft_striteri(s, &fx);
// 	printf("%s", s);
// }
