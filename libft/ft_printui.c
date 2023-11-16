/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <abuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:46:01 by abuchet           #+#    #+#             */
/*   Updated: 2023/05/01 16:53:14 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uilen(unsigned int str)
{
	int	len;

	len = 0;
	while (str != 0)
	{
		len++;
		str = str / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_uilen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_printui(unsigned int n)
{
	int		print_length;
	char	*str;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		str = ft_uitoa(n);
		print_length += ft_printstr(str);
		free(str);
	}
	return (print_length);
}
