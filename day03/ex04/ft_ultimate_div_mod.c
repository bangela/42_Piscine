/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:01:16 by bangela           #+#    #+#             */
/*   Updated: 2018/08/09 21:09:31 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;
	int div;
	int mod;

	c = *a;
	d = *b;
	div = c / d;
	mod = c % d;
	*a = div;
	*b = mod;
}
