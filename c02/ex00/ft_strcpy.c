/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbarre <marbarre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:11:56 by marbarre          #+#    #+#             */
/*   Updated: 2024/09/22 21:23:35 by marbarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int main(void)
{
    char str[4];
    char dest[4];

    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'y';
    str[3] = '\0';
    ft_strcpy(dest, str);
    printf("%s\n", dest);
    return(0);
}*/