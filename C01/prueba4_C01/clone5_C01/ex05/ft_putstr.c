/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:02:15 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/11 13:50:48 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void ft_putstr(char *str)
{
	*str = 0;
	write(1, &str, 1);
	str++;

}

int	main(void)
{
	char *str;
	str[20] ="Hola me llamo Marta";
	ft_putstr(&str);
	
	return(0);
}

*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char string[4] = "hola";
	ft_putstr(string);
	return (0);
}*/
