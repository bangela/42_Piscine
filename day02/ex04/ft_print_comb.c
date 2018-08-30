/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:21:40 by bangela           #+#    #+#             */
/*   Updated: 2018/08/09 16:15:25 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_show(int i, int j, int k)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_show(i, j, k);
				if (i != 7 || j != 8 || k != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
