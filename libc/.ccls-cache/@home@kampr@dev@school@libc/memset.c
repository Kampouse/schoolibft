/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:26:34 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/05 18:55:42 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset (void *ptr, int value, unsigned int num)

{
	unsigned char	*pted;

	pted = ptr;
	while (num--)
	{
		*pted++ = (unsigned char)value;
	}
	return (ptr);
}
