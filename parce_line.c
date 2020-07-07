#include "morse.h"

int 	parse_line(char **str)
{
	int	i;
	char **letters;
	char *ptr_space;
	int	j;
	char *toprint;
	char	c;
	size_t l;

	i = 0;
	j = 0;
	ptr_space = NULL;
	letters = NULL;
	toprint = NULL;
	if ((ptr_space = ft_strchr(*str, ' ')))
	{
		if (!(letters = ft_split(*str, ' ')))
			return (-1);
		l = ft_two_d_counter(&letters);
		if (!(toprint = malloc(l + 1)))
			return (-1);
		while (letters[i])
		{
			toprint[i] = parse_morse_letter(letters[i]);
			i++;
		}
		toprint[i] = '\0';
		ft_printf("%s", toprint);
		ft_free_and_clear(toprint);
		if (letters)
			ft_free2d(letters);
		letters = NULL;
	}
	else
	{
		c = parse_morse_letter(*str);
		write(1, &c, 1);
	}
	return (0);
}