/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathcombine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:33:25 by otahirov          #+#    #+#             */
/*   Updated: 2019/02/12 17:08:21 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathcombine(char *p1, char *p2)
{
	char	*path;
	bool	endwithslash;
	size_t	len;
	int		off;

	endwithslash = ft_strendwith(p1, '/');
	len = (endwithslash) ? ft_strlen(p1) + ft_strlen(p2) :
		ft_strlen(p1) + 1 + ft_strlen(p2);
	path = (char *)ft_memalloc(len * sizeof(char));
	ft_strcpy(path, p1);
	len = ft_strlen(p1);
	off = (endwithslash) ? 0 : 1;
	if (!endwithslash)
		path[len] = '/';
	ft_strcpy(path + len + off, p2);
	return (path);
}
