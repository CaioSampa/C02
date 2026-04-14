/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:40:45 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 14:55:09 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *ptr_src;
    char *ptr_dest;
    unsigned int i;
    
    ptr_src = src;
    ptr_dest = dest;
    i = 0;
    //src copia até n bytes
    while (*ptr_src && i < n)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        i++;
        if(*ptr_src == '\0' && i < n) *ptr_dest = '\0'; 
    }
    return (dest);
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World1";
    ft_strncpy(str2, str1, 4);
    // strncpy(str2, str1, 4);
    printf("%s\n", str1);
    printf("%s\n", str2);
    return (0);
}