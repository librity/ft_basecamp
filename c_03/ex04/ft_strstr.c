/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:25:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2020/11/30 23:27:00 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *first_match;
	char *test_string;

	test_string = str;
	while (*test_string != '\0')
	{
		first_match = test_string;
		while (*to_find != '\0' && *test_string == *to_find)
		{
			test_string++;
			to_find++;
		}
		if (*to_find == '\0')
			return (first_match);
		test_string = first_match + 1;
	}
	return ('\0');
}
