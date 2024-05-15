/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:36:15 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/15 20:22:31 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	//src = "Me llamo Marta";
	//dest = " ";

	char *result = strcpy(dest, src);
	//printf("Cadena copiada: %s\n", dest);
	//printf("puntero all final: %s\n", result);

	return (dest);
}
int	main(void)
{
	char d[20] = "";
	char o[] = "Me llamo Marta";

	ft_strcpy(d, o);
	printf("Cadena copiada: %s", d);
	printf("\n");
	printf("puntero al final: %s", o);
	return (0);
}*/

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char o[] = "Me llamo Marta";
	char d[16] = "Yo";

	printf("la frase original es: %s.\n", o);
	ft_strcpy(d, o);
	printf("la frase copiada es: %s.\n",d);
	
	printf("------------------------------\n");
	printf("la frase original es: %s.\n", o);
	strcpy(d, o);
	printf("la frase copiada es: %s.\n",d);

	return (0);
}*/
