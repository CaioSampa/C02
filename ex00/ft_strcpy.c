/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:01:33 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 13:40:13 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr_src;
	char	*ptr_dest;

	ptr_src = src;
	ptr_dest = dest;
	while (*ptr_src)
	{
		*ptr_dest = *ptr_src;
		ptr_src++;
		ptr_dest++;
	}
	return (dest);
}
