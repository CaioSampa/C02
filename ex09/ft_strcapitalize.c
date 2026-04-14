/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:27:42 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 19:01:08 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int initial_letter;

	initial_letter = 1;
	while (*str)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		{
			if (initial_letter && (*str >= 97 && *str <= 122)) 
			{
				*str -= 32;
				initial_letter = 0;
			}
			else
				*str += 32;
		} else 
		{
			initial_letter = 1;
		}
		str++;
	}
	return (str);
}
