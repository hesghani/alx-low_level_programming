#include "main.h"

/**
 * wildcmp - Compare two strings with a wildcard *
 * @s1: First string
 * @s2: Second string with wildcard *
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*' || *s1 == '\0')
            return (wildcmp(s1, s2 + 1));
        else
            return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    }
    else if (*s1 == '\0' && *s2 == '\0')
    {
        return (1);
    }
    else if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }
    return (0);
}
