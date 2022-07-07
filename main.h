#ifndef PRINTFH
#define PRINTFH


typedef struct formats {

	char * spec;
	void (*f)(va_list)
} fs;

#endif
