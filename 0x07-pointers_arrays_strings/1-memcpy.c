#include "main.h"
/**
 *  * _memcpy - copys n bytes of memory
 *
 *    * @dest: pointer to dest str
 *
 *     * @src: source to be copied from
 *
 *      * @n: num bytes to copy from src
 *
 *       *
 *
 *        * Return: pointer to beginning of memory area dest
 */
char *_memset(char *s, char b, unsigned int n)

{

		unsigned int i;



			for (i = 0; i < n; i++)

					{

								*(s + i) = b;

									}

				return (s);

}

© 2022 Git
