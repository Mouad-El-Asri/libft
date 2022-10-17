/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:06:45 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/17 01:23:54 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "mouad";
// 	t_list *x;
// 	x = ft_lstnew(s);

// 	char *s0 = "el asri";
// 	t_list *x0;
// 	x0 = ft_lstnew(s0);

// 	ft_lstadd_front(&x, x0);
// 	printf("%s", x->next);
// }
