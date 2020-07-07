#include "morse.h"

int		print_morse(char **line)
{
	int	i;
	char	*m_toprint;
	char	*tmp;
	t_alpha	tab;

	i = 0;
	m_toprint = NULL;
	tmp = NULL;
	init_alpha(&tab);
	while ((*line)[i])
	{
		tmp = m_toprint;
		if (!(m_toprint = ft_strjoin_free_s1(tmp, alpha_to_morse((*line)[i], &tab))))
		{
			tmp = ft_free_and_clear(tmp);
			return (0);
		}
		i++;
	}
	tmp = m_toprint;
	if (!(m_toprint = ft_strtrim(m_toprint, " ")))
	{
		tmp = ft_free_and_clear(tmp);
		return (0);
	}
	tmp = ft_free_and_clear(tmp);
	ft_printf("%s", m_toprint);
	m_toprint = ft_free_and_clear(m_toprint);
	return (1);
}
