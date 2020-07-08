#include "morse.h"

int 		main()
{
	int		fd;
	int 	i;
	char	*line = 0;
	int		desire;
	char	filename[256];
	char	*file;

	ft_printf("Do you want to use stdin or read from file?\n1 - stdinput\n2 - file\n");
	scanf("%d", &desire);
	if (desire != 1 && desire != 2)
	{
		ft_printf("Please choose 1 or 2 only\n1 - stdinput\n2 - file\n");
		ft_printf("exit");
		return (-1);
	}
	if (desire == 2)
	{
		ft_printf("Please copy your file.txt in this folder. Next to main.c\nThe filename shouldn't contain spaces\n");
		ft_printf("Please enter a fullname of a file including extension: \n");
		scanf("%s", filename);
		if (!(file = ft_strjoin("../", filename)))
			return (0);
		if (!(fd = open(file, O_RDONLY)))
		{
			ft_printf("\nError in open\n");
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
		{
			line = ft_free_and_clear(line);
			return (-1);
		}
		ft_printf("\n");
		line = ft_free_and_clear(line);
	}
	line = ft_free_and_clear(line);
	close(fd);
	if (file)
		file = ft_free_and_clear(file);
	return (0);
}
