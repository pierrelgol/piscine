/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:49:45 by pollivie          #+#    #+#             */
/*   Updated: 2023/10/02 11:49:48 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (n >= 'a' && n <= 'z')
		return (1);
	if (n >= 'A' && n <= 'Z')
		return (1);
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
