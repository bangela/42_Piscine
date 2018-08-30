/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:49:47 by bangela           #+#    #+#             */
/*   Updated: 2018/08/22 19:55:07 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*elem;

	if (begin_list == NULL)
		return (0);
	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (elem);
}
