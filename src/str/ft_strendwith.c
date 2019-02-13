/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendwith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:37:48 by otahirov          #+#    #+#             */
/*   Updated: 2019/02/12 16:52:59 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool		ft_strendwith(char *str, char c)
{
	long	line;
	char	*found;

	line = (long)ft_strlen(str);
	if ((found = ft_strrchr(str, c)) == NULL)
		return (false);
	if (line == (found - str))
		return (true);
	return (false);
}
