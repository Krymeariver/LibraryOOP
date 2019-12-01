#include "Librarian.h"


Librarian::Librarian(std:: string N):
	Name(N)
{
std :: cout << "Librarian: " << Name << " constructor called \n";	
} 

Librarian::Librarian()
{
std :: cout << "Librarian: without name constructor called \n";	
}


Librarian::~Librarian()
{
}
