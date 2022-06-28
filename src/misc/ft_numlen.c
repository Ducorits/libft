/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dritsema <dritsema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/28 14:54:58 by dritsema      #+#    #+#                 */
/*   Updated: 2022/06/28 15:01:19 by dritsema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Counts the amount of decimal digits in an integer.
 * This can be used to determine how many bytes an integer
 * would take if you convert it to an ascii string.
 *
 * @param num The integer to count the digits for.
 * @return The amount of decimal digits in the integer.
 */
int	ft_numlen(int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
