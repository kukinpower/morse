#include "morse.h"

static _Bool	ismorse(char c)
{
	char	m[] = ".-/ ";
	int		i;

	i = 0;
	while (m[i])
	{
		if (c == m[i])
			return (1);
		i++;
	}
	return (0);
}

static _Bool	isvalid(char c)
{
	int		i;

	i = 0;
	if (ft_isalpha(c) || ft_isdigit(c)) // || c == ' ' || c == '!'
		return (1);
	return (0);
}

_Bool 			text_validity(char **line, char *w)
{
	int		i;
	int		flag;


	i = 0;
	if ((*line)[i] == '-' || (*line)[i] == '.')
		flag = 1;
	else if (ft_isprint(*line[i]))
		flag = 0;
	else
		return (-1);
	i++;
	if (flag)
	{
		while (ismorse((*line)[i]))
		{
			i++;
		}
		if ((*line)[i])
			return (0);
		(*w) = 'm';
		return (1);
	}
	else if (!flag)
	{
		while ((isvalid((*line)[i])))
		{
			i++;
		}
		if ((*line)[i])
			return (0);
		(*w) = 'a';
		return (1);
	}
	return (0);
}
