/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:24:08 by ucabanil          #+#    #+#             */
/*   Updated: 2023/11/12 23:07:05 by fsevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // para open
#include <unistd.h> // para read y close
#include <stdlib.h> // para malloc y free
#include <stdio.h>

char	*ft_draw_number(char *);

char	*ft_draw_value(char *);

void	ft_run_into_array(char ***formatted_dict, int formatted_dict_index, char *number, char *value)
{
	int	i;
	int j;

	i = 0;
	j = 0;

	while (number[i] != '\0')
	{
		formatted_dict[formatted_dict_index][0][i] = number[i];
		i++;	
	}
	while (value[j] != '\0')
	{
		formatted_dict[formatted_dict_index][1][j] = value[j];
		j++;	
	}
	

}


void load_lines(char *buffer, char ***formatted_dict)
{
	char *line;
	int	i;
	int j;	
	int formatted_dict_index;

	line = (char *) malloc(100 * sizeof(char));
	i = 0;
	j = 0;	
	formatted_dict_index = 0;
	while (buffer[i] != '\0')
	{	
		if(buffer[i] != '\n')
		{
			line[j] = buffer[i];
			j++;
		}
		else
		{
			line[j] = '\0';
			ft_run_into_array(formatted_dict, formatted_dict_index, ft_draw_number(line), ft_draw_value(line));
			j = 0;
			formatted_dict_index++;
		}
		i++;
	}
	free(line);
}

void	read_file(char *file , char ***formatted_dict)
{
	int		fd;
	char 	buffer[1024];
	ssize_t bytes_read;
	fd = open(file, O_RDONLY);
	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	load_lines(buffer, formatted_dict);
	if (fd == -1)
		printf("Error mirando el fichero");
}
/*
int	main(void)
{
	char ***formatted_dict;
	int rows;
	int cols;
	int depth;
	int index;

	index = 0;
	rows = 100;
	cols = 2;
	depth = 50;	
	// Allocate memory for the first dimension (rows)
    formatted_dict = (char ***)malloc(rows * sizeof(char **));
	ft_init_array(formatted_dict, rows, cols, depth);
	read_file("numbers.dict", formatted_dict);
	
	while (index < 100)
	{	
		printf("%s, %s\n", formatted_dict[index][0], formatted_dict[index][1]);	
		index++;
	}
	return (0);
}
*/
