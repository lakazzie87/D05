/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:16:58 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 15:47:59 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strcpy(char *dest, char *src)
{
	int copy;

	copy = 0;
	while(src[copy] != '\0')
	{
		dest[copy] = src[copy];
		copy++;
	}
	dest[copy] = src[copy];
	return(dest);
}
