#include "holberton.h"
#include <limits.h>

int main(void)
{
	char *name = "Musangi";
	char *sec = "Silvia";
	char let = 's';
	int len = 0;
	int n;
	
	n = INT_MAX;

	len = _printf("My name i%c Alfred\n", let);
	_printf("Length is %d\n", len);
	len = _printf("Her name is %s, second is %s, third is Muthangya but we call her MusMus %h.--\n", name, sec);
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is%a Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is 789304u  Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My number  is %d\n", n);
	_printf("Length is %d\n", len);
	len = _printf("My number binary %b \n", -10);
	_printf("Length is %d\n", len);

	_printf(NULL);
	return (0);
}

