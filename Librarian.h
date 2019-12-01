#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

class Librarian
{
	public:
		Librarian();
		Librarian(std:: string Name);
		std :: string Name;
		~Librarian();
	protected:
};

#endif
