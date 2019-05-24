/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:40:34 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/24 16:06:44 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	int	*new;
	int i;
	int size;

	size = 0;
	while (s1[i])
		i++;
	if (!(new = melloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[1])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
