#include "main.h"
#include <stddef.h>
size_t strspn(const char *str, const char *charset) {
  const char *s1 = str;
  const char *s2;

  size_t count = 0;

  while (*s1 != '\0') {
    s2 = charset;
    while (*s2 != '\0') {
      if (*s1 == *s2) {
	count++;
	break;
      }
      s2++;
    }
    if (*s2 == '\0') {
      return count;
    }
    s1++;
  }

  return count;
}
