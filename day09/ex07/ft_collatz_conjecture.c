/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:52:01 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 16:08:24 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base <= 1)
		return (0);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2) + 1);
	else
		return (ft_collatz_conjecture((3 * base) + 1) + 1);
	return (0);
}
