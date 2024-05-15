/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:50:36 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/16 20:29:26 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src [i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
/*
int	main (void)
{
	int n = 15;
	char	d[20] = "holi holi";
	char	o[5] = "esto";

	printf("Texto que se copia: %s\n", o);
	printf("Destino donde copiar: %s\n", d);
	//printf("La frase donde vamos a copiar es: %s\n", d);
	ft_strncpy(d, o, 30);
	printf("Funcion implementada => %s\n", d);
	
	char	d2[20] = "holi holi";
	char	o2[15] = "";

	strncpy(d2, o2, n);
	printf("Función estándar => %s", d2);
	return (0);
}*/
