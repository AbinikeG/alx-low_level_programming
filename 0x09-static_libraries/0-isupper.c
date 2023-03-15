#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * _isupper - uppercase letters
  * @c: char to check
  *
  * return: always return _isupper  A to Z.
  */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
