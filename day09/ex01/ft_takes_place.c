/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 21:51:50 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 21:53:00 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (hour <= 24 && hour >= 0)
	{
		if (hour > 12)
			h = hour % 12;
		if (hour == 0)
			h = 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", h, (h + 1) % 12);
		else if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		else if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		else if (hour == 24)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else if (hour <= 24)
			printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
	}
}
