/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:28:34 by amendibi          #+#    #+#             */
/*   Updated: 2026/01/26 17:00:53 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_char(char c, char const *tofind)
{
	int	i;

	i = 0;
	while (tofind[i])
	{
		if (tofind[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *tofind)
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (search_char(str[i], tofind) && str[i])
		i++;
	while (search_char(str[len - 1], tofind) && (len - 1))
		len--;
	if (len < i)
		len = i;
	new = malloc(len - i + 1);
	if (!new)
		return (NULL);
	while (i < len)
		new[j++] = str[i++];
	new[j] = '\0';
	return (new);
}

/*int	main(void)
{
	char	str[] = "los catalanes hacen cosas";
	char	busca[] = "las";
	printf("%s", ft_strtrim(str, busca));
}*/
