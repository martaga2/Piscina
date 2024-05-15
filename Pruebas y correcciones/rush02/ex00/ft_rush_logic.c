/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_logic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsevilla <fsevilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:11:23 by fsevilla          #+#    #+#             */
/*   Updated: 2023/11/12 23:26:56 by fsevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// 12331
// length - 3
// 1 - one
// 100 - hundred
// length -- 2
// 2 * 10 
// 20 twety
// length -- 1
// 3 -three
/*
void	ft_get_number_value(char ***formatted_dict)
{
	write(1, "hey", 3);
}
*/

char *ft_generate_10e(int n, int length, char ***formatted_dict)
{
	int index;
	int max;

	index = 0;
	max = 0;
	while( index < 100)
	{
		if (sizeof(formatted_dict[index][0]) <= length)
			max = index;
		index++;	
	}
	return formatted_dict[max][0];
}

void ft_get_number_break_down(char *argv_number, char ***formatted_dict)
{	
	int	n_length;
	char c_nlength;
	int	i;

	i = 0;
	n_length = 0;
	while (argv_number[n_length] != '\0')
		n_length++;
	c_nlength = n_length + 48;
	while (i < n_length)
	{
		printf("%s\n", ft_generate_10e(argv_number[i], i, formatted_dict));
		i++;
	}
}


