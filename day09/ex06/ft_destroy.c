/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:13:09 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 15:33:39 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != NULL)
	{
		j = 0;
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
