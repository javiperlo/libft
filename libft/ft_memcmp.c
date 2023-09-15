/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:23:14 by javperez          #+#    #+#             */
/*   Updated: 2023/09/15 13:54:32 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t      i;

    i = 0;
    while ((char *))
    {
        /* code */
    }
    
}

int main()
{
    char str1[] = "Hola";
    char str2[] = "HOla";
    int n;
    int puntero;

    n = 1;
    puntero =  memcmp(str1, str2, n); // Devuelve 0 si son iguales, 1 si str1 es mayor que str2 y -1 si str1 es menor que str2
    printf("%d", puntero); //Al almacenar memcmp en una variable int y luego imprimirlo, se imprime el valor de retorno de memcmp
}
