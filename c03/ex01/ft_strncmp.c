/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 08:41:40 by egrevess          #+#    #+#             */
/*   Updated: 2022/09/20 10:36:47 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int    ft_strncmp(char *s1, char *s2, unsigned int n)
{   unsigned int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] < s2[i])
                return (-1);
            if (s1[i] > s2[i])
                return (1);
        }
        if (s1[i] == '\0' && s2[i] != '\0')
            return (-1);
        if (s1[i] != '\0' && s2[i] == '\0')
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    char    *s1 = "bonjour";
    char    *s2 = "bo";
    printf("%d\n", ft_strncmp(s1,s2,4));
    return (0);
}
