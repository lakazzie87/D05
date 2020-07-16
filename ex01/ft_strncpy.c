/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:00:16 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 16:06:47 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = 0;
	while (src[c] != '\0' && c > n)
	{
		dest[c] = src[c];
		c++;
	}
	while(c < n)
	{
		dest[c] == '\0';
		c++;
	}
	return(dest);
}
