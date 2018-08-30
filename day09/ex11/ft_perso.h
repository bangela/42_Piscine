/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 20:18:56 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 20:31:01 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD 1
# include <string.h>

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	int		profession;
}				t_perso;
#endif
