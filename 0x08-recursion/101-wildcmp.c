#include "main.h"

/**
 * *move_past_star - iterates past
 * @s2: pointer
 * Return: the pointer
*/
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - bring number
 * @s1: first string
 * @s2: second string
 * Return: 1 if true, 0 if false
*/
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}
/**
 * wildcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical, 0 if false
*/
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2  + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += inception(s1, s2);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
