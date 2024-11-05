#include "clib.h"

static int	safe_malloc(char **token_v, int position, size_t buffer)
{
	token_v[position] = malloc(buffer);
	if (token_v[position] == NULL)
	{
		while (position > 0)
			free(token_v[--position]);
		free(token_v);
		return (1);
	}
	return (0);
}

static size_t	count_tokens(char const *s, char delimiter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	inside_token = 0;
	while (*s)
	{
		if (*s == delimiter)
			inside_token = 0;
		else if (!inside_token)
		{
			inside_token = 1;
			tokens++;
		}
		s++;
	}
	return (tokens);
}

static void	allocate_and_copy(char **token_v, const char *s, size_t len, int i)
{
	if (safe_malloc(token_v, i, len + 1) == 0)
	{
		strlcpy(token_v[i], s, len + 1);
		token_v[i][len] = '\0';
	}
}

static void	fill(char **token_v, char const *s, char delimiter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == delimiter)
			s++;
		while (s[len] && s[len] != delimiter)
			len++;
		if (len > 0)
		{
			allocate_and_copy(token_v, s, len, i);
			i++;
		}
		s += len;
	}
}

char	**split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (!s)
		return (NULL);
	tokens = count_tokens(s, c);
	token_v = malloc(sizeof(char *) * (tokens + 1));
	if (!token_v)
		return (NULL);
	token_v[tokens] = NULL;
	fill(token_v, s, c);
	return (token_v);
}
