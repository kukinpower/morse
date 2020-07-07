#include "morse.h"

static char parse_morse_digit(char *code)
{
	int 	i;

	i = 0;
	if (code[i] == '.')
	{
		i++;
		if (code[i] == '.')
		{
			i++;
			if (code[i] == '.')
			{
				i++;
				if (code[i] == '.')
				{
					i++;
					if (code[i] == '.')
						return ('5');
					else if (code[i] == '-')
						return ('4');
				}
				else if (code[i] == '-')
					return ('3');
			}
			else if (code[i] == '-')
				return ('2');
		}
		else if (code[i] == '-')
			return ('1');
	}
	else if (code[i] == '-')
	{
		i++;
		if (code[i] == '-')
		{
			i++;
			if (code[i] == '-')
			{
				i++;
				if (code[i] == '-')
				{
					i++;
					if (code[i] == '-')
						return ('0');
					else if (code[i] == '.')
						return ('9');
				}
				else if (code[i] == '.')
					return ('8');
			}
			else if (code[i] == '.')
				return ('7');
		}
		else if (code[i] == '.')
			return ('6');
	}
	return (0);
}

char	parse_morse_letter(char *code) //Capital letter or simple?
{
	size_t	len;
	int		i;

	len = ft_strlen(code);
	i = 0;
	if (len == 1)
	{
		if (code[i] == '-')
			return ('T');
		else if (code[i] == '.')
			return ('E');
		else if (code[i] == '/')
			return (' ');
	}
	else if (len == 2)
	{
		if (code[i] == '.')
		{
			i++;
			if (code[i] == '-')
				return ('A');
			else if (code[i] == '.')
				return ('I');
		}
		else if (code[i] == '-')
		{
			i++;
			if (code[i] == '.')
				return ('N');
			else if (code[i] == '-')
				return ('M');
		}
	}
	else if (len == 3)
	{
		if (code[0] == '.')
		{
			if (code[1] == '.')
			{
				if (code[2] == '.')
					return ('S');
				else if (code[2] == '-')
					return ('U');
			}
			else if (code[1] == '-')
			{
				if (code[2] == '.')
					return ('R');
				else if (code[2] == '-')
					return ('W');
			}
		}
		else if (code[0] == '-') {
			if (code[1] == '.') {
				if (code[2] == '.')
					return ('D');
				else if (code[2] == '-')
					return ('K');
			}
			else if (code[1] == '-') {
				i++;
				if (code[2] == '.')
					return ('G');
				else if (code[2] == '-')
					return ('O');
			}
		}
	}
	else if (len == 4)
	{
		if (code[0] == '.')
		{
			if (code[1] == '.')
			{
				if (code[2] == '.')
				{
					if (code[3] == '.')
						return ('H');
					else if (code[3] == '-')
						return ('V');
				}
				else if (code[2] == '-')
				{
					if (code[3] == '.')
						return ('F');
//					else if (code[3] == '-') // [..--]
//						return ('V');
				}
			}
			else if (code[1] == '-')
			{
				if (code[2] == '.')
				{
					if (code[3] == '.')
						return ('L'); // L = [.-..]
//					else if (code[3] == '-') // [.-.-]
//						return ('');
				}
				else if (code[2] == '-')
				{
					if (code[3] == '.')
						return ('P'); // P = [.--.]
					else if (code[3] == '-')
						return ('J'); // J = [.---]
				}
			}
		}
		else if (code[0] == '-')
		{
			if (code[1] == '.')
			{
				if (code[2] == '.')
				{
					if (code[3] == '.')
						return ('B'); // B = [-...]
					else if (code[3] == '-')
						return ('X'); // X = [-..-]
				}
				else if (code[2] == '-')
				{
					if (code[3] == '.')
						return ('C'); // C = [-.-.]
					else if (code[3] == '-') // Y = [-.--]
						return ('Y');
				}
			}
			else if (code[1] == '-')
			{
				if (code[2] == '.')
				{
					if (code[3] == '.')
						return ('Z'); // Z = [--..]
					else if (code[3] == '-') // Q = [--.-]
						return ('Q');
				}
//				else if (code[2] == '-')
//				{
//					if (code[3] == '.')
//						return ('P'); // P = [.--.]
//					else if (code[3] == '-')
//						return ('J'); // J = [.---]
//				}
			}
		}

	}
	else if (len == 5)
		return (parse_morse_digit(code));
	return (0);
}