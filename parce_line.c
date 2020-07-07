#include "morse.h"

int 	parse_line(char *str)
{
	int	i;
	char **letters;
	char *ptr_space;
	int	j;
	char *toprint;
	char *check_space;
	char	c;

	i = 0;
	j = 0;
	ptr_space = NULL;
	if ((ptr_space = ft_strchr(str, ' ')))
	{
		if (!(letters = ft_split(str, ' ')))
			return (-1);
		if (!(toprint = malloc((two_d_counter(&letters)) + 1)))
			return (-1);
		while (letters[i])
		{
			toprint[i] = parse_morse_letter(letters[i]);
			i++;
		}
		toprint[i] = '\0';
		write(1, toprint, ft_strlen(toprint));
	}
	else
	{
		c = parse_morse_letter(str);
		write(1, &c, 1);
	}
	ft_free_and_clear(toprint);


	return (0);
}