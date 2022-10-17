/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 21:18:31 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/17 01:05:58 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "mouad";
// 	t_list *x;
// 	x = ft_lstnew(NULL);
// 	if (x)
// 		printf("%s", x->content);
// }
