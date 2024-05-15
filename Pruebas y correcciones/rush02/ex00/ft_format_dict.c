/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:52:19 by martaga2          #+#    #+#             */
/*   Updated: 2023/11/12 22:06:07 by fsevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// ["1: one"]
//
// ["20       :     twenty"]

#include <stdio.h>
#include <stdlib.h>

int ft_number_size(char * str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			break ;
	}
	return (i);
}

int ft_is_alpha(char c)
{
	return (c >= 'a' && c <= 'z'
		|| c >= 'A' && c <= 'Z');
}

int ft_value_size(char * str)
{
	int i;
	int v_size;

	i = 0;
	v_size = 0;
	while (str[i] != '\0')
	{
		if(	ft_is_alpha(str[i]) || str[i] == ' ')
		{
			if (ft_is_alpha(str[i]) || str[i] == ' ' && ft_is_alpha(str[i - 1]))
				v_size++;	
		}
		i++;
	}
	return (v_size);
}

char	*ft_draw_number(char *line)
{
	int i;
	char *number_string;

	i = 0;
	number_string = (char*)malloc(ft_number_size(line) * sizeof(char));
	while (line[i] != '\0')
	{
		if(line[i] >= '0' && line[i] <= '9')
		{	
			number_string[i] = line[i];
			i++;
		}
		else
			break ;	
	}	
	return (number_string);
}

char	*ft_draw_value(char *line)
{
	int i;
	int v_length;
	char *value_string;

	v_length = 0;	
	value_string = (char*)malloc(ft_value_size(line) * sizeof(char));
	i = 0;
	while (line[i] != '\0')
	{
		if(	ft_is_alpha(line[i]) || line[i] == ' ')
		{
			if (ft_is_alpha(line[i]) || line[i] == ' ' && ft_is_alpha(line[i - 1]))
			{
				value_string[v_length] = line[i];
				v_length++;
			}
		}
		i++;
	}
	return (value_string);
}
/*
int main(void)
{

	char **array_bi[1];

	array_bi[0][0] = ft_draw_number("1000000000000000000000000000000000000     :         hey    you    everybody");	 
	array_bi[0][1] = ft_draw_value("1000000000000000000000000000000000000     :         hey     you    everybody");	
	
	printf("%s\n", array_bi[0][0]);
	printf("%s\n", array_bi[0][1]);
	// ["1000000000000000", "hey you everybody"]


	return (0);
}
*/

