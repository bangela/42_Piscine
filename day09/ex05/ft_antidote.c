/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:33:52 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 15:07:57 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((k < i && i < j) || (j < i && i < k))
		return (i);
	if ((k < j && j < i) || (i < j && j < k))
		return (j);
	else
		return (k);
}
