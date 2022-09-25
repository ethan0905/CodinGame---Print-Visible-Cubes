/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rubiks_calculation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <esafar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:44:04 by c2h6              #+#    #+#             */
/*   Updated: 2022/09/25 15:44:06 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include <math.h>

int main()
{
    int nb;
    scanf("%d", &nb);

    if (nb > 0)
    {
        int result = 0;

        if (nb > 1)
            result = pow(nb, 3) - (pow((nb - 2), 3));
        else
            result = 1;
        
        printf("%d\n", result);
    }
    else
        perror("Error: invalid value.\n");

    return (0);
}
