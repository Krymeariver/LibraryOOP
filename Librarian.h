#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "Library.h"
class Librarian
{
	public:
		Librarian();
		Librarian(std:: string Name);
		std :: string Name;
		~Librarian();
		void WriteInFile();
		std :: string path;
		std :: string ExePath();
	
	protected:
};

#endif
