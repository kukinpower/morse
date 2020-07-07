#include "morse.h"

int 	morse(char **line)
{
	char	what;

	what = 0;
	if (!(text_validity(line, &what)))
	{
		ft_printf("error");
		return (-1);
	}
	if (what == 'm')
	{
		if (!(parse_line(line)))
			return (0);
	}
	else if (what == 'a')
	{
		if (!(print_morse(line)))
			return (-1);
	}
	return (1);
}
