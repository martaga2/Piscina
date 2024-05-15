/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:50:36 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/15 20:05:33 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	n = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	dest[i] = 0;
	return (dest);
}
/*
int	main (void)
{
	char	d[4] = "Hola";
	char	o[15] = "Me llamo Marta";
	int	n;

	n = 0;

	printf("La frasse original es: %s\n", o);
	printf("La frase donde vamos a copiar es: %s\n", d);
	ft_strncpy(d, o, n);
	printf("la frase copiada es: %s", d);
	return (0);
}*/
