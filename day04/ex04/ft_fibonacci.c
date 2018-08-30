/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:36:46 by bangela           #+#    #+#             */
/*   Updated: 2018/08/12 17:11:10 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index <= 2)
		return (1);
	if (index >= 3 && index < 2178309)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}
