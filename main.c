#include "get_next_line/get_next_line.h"
# include <fcntl.h>

# include <stdio.h>

#include "morse.h"

size_t 	two_d_counter(char ***s)
{
	size_t	i;

	i = 0;
	while ((*s)[i])
	{
		i++;
	}
	return (0);
}

char 	*alpha_to_morse(char c, size_t *l)
{
	t_alpha	tab;

	init_alpha(&tab);
	if (c == 'A' || c == 'a')
	{
		*l = ft_strlen(tab.a);
		return (tab.a);
	}
	else if (c == 'B' || c == 'b')
	{
		*l = ft_strlen(tab.b);
		return (tab.b);
	}
	else if (c == 'C' || c == 'c')
	{
		*l = ft_strlen(tab.c);
		return (tab.c);
	}
	return (NULL);
}

int		print_morse(char **line)
{
	int	i;
	char	*str;
	size_t 	len;

	i = 0;
	while ((*line)[i])
	{
		write(1, alpha_to_morse((*line)[i], &len), len);
		write(1, " ", 1);
		i++;
	}
	return (0);
}

int 	morse(char **line)
{
	char	what;

	if (!(text_validity(line, &what)))
	{
		free(*line);
		write(1, "error", 5);
		return (-1);
	}
	if (what == 'm')
		parse_line(*line);
	else if (what == 'a')
		print_morse(line);
	return (0);
}

int 	main() {
	int fd;
	int i;
	char *line = 0;
	int desire;
	int choice;
	char filename[256];
	char	*file;

	choice = 1;
	printf("Do you want to use stdin or read from file?\n1 - stdinput\n2 - file\n");
	scanf("%d", &desire);
	printf("%d\n", desire);
	if (desire == 1 || desire == 2)
		choice = 0;
	else
		desire = 0;
	while (choice)
	{
		printf("Please choose 1 or 2 only\n1 - stdinput\n2 - file\n");
		scanf("%d", &desire);
		if (desire == 1 || desire == 2)
			choice = 0;
	}
	if (desire == 2)
	{
		printf("Please copy your file.txt in this folder. Next to main.c\nThe filename shouldn't contain spaces\n");
		printf("Please enter a fullname of a file including extension: \n");
		scanf("%s", filename);
		printf("%s\n", filename);
		printf("%d\n", (int)ft_strlen(filename));
		if (!(file = ft_strjoin("../", filename)))
			return (0);
		free(filename);
		if (!(fd = open(file, O_RDONLY)))
		{
			printf("\nError in open\n");
			return (0);
		}
	}
	else if (desire == 1)
		fd = 0;
	else
		fd = -1;
	while ((i = get_next_line(fd, &line)) > 0)
	{
		if ((morse(&line)) == -1)
			return (-1);
		write(1, "\n", 1);
		free(line);
	}
}
