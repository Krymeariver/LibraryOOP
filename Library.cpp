#include "Library.h"

Library::Library(std :: string N,std:: string L, std:: string K, std :: string Adm):
Name(N), Location(L), Key(K), AdminName(Adm)
{
	std :: cout << "Constructor of library: '" << Name << "' called" << std::endl; 
	Librarian Admin(AdminName);
}

Library::~Library()
{
	
}

void Library :: DisplayName() {
	std :: cout << "The library is called: " << Name << " with Admin: "<< AdminName << std :: endl ;  
}

void Library :: ChangeName(std:: string NewName, std:: string userkey){
	if (strcmp(Key.c_str(),userkey.c_str()) == 0) { Name = NewName;}
	else { std :: cout << "Key is not compatible. Changing the name is denied." << std :: endl; }
			
}
