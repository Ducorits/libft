/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hextoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dritsema <dritsema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 15:16:08 by dritsema      #+#    #+#                 */
/*   Updated: 2022/08/11 15:22:27 by dritsema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief The ft_hextoi() function converts the initial portion of the
 * string hexadecimal pointed to by str to int representation.
 * @param str The string to convert.
 * @return The converted integer value.
 */
int	ft_hextoi(const char *str)
{
	unsigned int	n;
	int				mins;

	n = 0;
	mins = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		mins = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= '0' && *str <= '9')
		|| (*str >= 'A' && *str <= 'F')
		|| (*str >= 'a' && *str <= 'f'))
	{
		if (*str >= '0' && *str <= '9')
			n = n * 16 + (*str - 48);
		if (*str >= 'A' && *str <= 'F')
			n = n * 16 + (*str - 65);
		if (*str >= 'a' && *str <= 'f')
			n = n * 16 + (*str - 97);
		str++;
	}
	return ((int)(n * mins));
}
