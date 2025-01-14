#include "get_next_line.h"

size_t	ft_strlen(char *string)
{
	const char	*last_char_in_string;

	if (!string)
		return (0);
	last_char_in_string = string;
	while (*last_char_in_string)
		last_char_in_string++;
	return (last_char_in_string - string);
}

char	*ft_strchr(char *string, int character)
{
	while (*string)
	{
		if (*string == (char)character)
			return (string);
		string++;
	}
	return (NULL);
}
char	*ft_strcpy(char *destination, char *source)
{
	char	*destination_copy;

	destination_copy = destination;
	while (*source)
	{
		*destination_copy = *source;
		destination_copy++;
		source++;
	}
	*destination_copy = '\0';
	return (destination);
}

char	*ft_strdup(char *source)
{
	size_t	length_source;
	char	*duplicate;

	length_source = ft_strlen(source);
	duplicate = (char *)malloc(sizeof(char) * (length_source + 0x1));
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, source);
	return (duplicate);
}
char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined_strings;
	size_t	length_string_1;
	size_t	length_string_2;

	if (!s1 || !s2)
	{
		free(s1);
		return (NULL);
	}
	length_string_1 = ft_strlen(s1);
	length_string_2 = ft_strlen(s2);
	joined_strings = (char *)malloc(sizeof(char) * \
		((length_string_1 + length_string_2) + 0x1));
	if (!joined_strings)
	{
		free(s1);
		return (NULL);
	}
	ft_strcpy(joined_strings, s1);
	ft_strcpy(joined_strings + length_string_1, s2);
	free(s1);
	return (joined_strings);
}
