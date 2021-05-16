/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:26:22 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/11 17:32:23 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalphanum(char str)
{
	if (ft_isalpha(str) || ft_isdigit(str))
		return (1);
	return (0);
}
