#include "Library.h"

Library::Library(std :: string N,std:: string L, std:: string K, std :: string Adm):
Name(N), Location(L), Key(K), AdminName(Adm)
{
	std :: cout << "Constructor of library: '" << Name << "' called" << std::endl; 
	Librarian Admin(AdminName);
	CreateFiles();
	std :: string path = ExePath();	 // gest path
filelibrarian = path + "/Librarians.txt";
fileclients = path + "/Clients.txt";
filebooks = path + "/Books.txt";
}

Library::~Library()
{
	
}

void Library :: DisplayName() {
	std :: cout << "The library is called: " << Name << " with Admin: "<< AdminName << std :: endl ;  
}

void Library :: ChangeName(std:: string NewName, std:: string userkey){
	if (strcmp(Key.c_str(),userkey.c_str()) == 0) { Name = NewName;} // compares the key provided by user with the key when the library was created
	else { std :: cout << "Key is not compatible. Changing the name is denied." << std :: endl; }
			
}


std :: string Library :: ExePath() {  // returns the path of current folder
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    std :: string::size_type pos = std :: string( buffer ).find_last_of( "\\/" );
    std :: string pathstring =  std :: string( buffer ).substr( 0, pos);
    std :: replace (pathstring.begin(), pathstring.end(), '\\', '/');
   return pathstring;
	}

void :: Library :: CreateFiles(){
std :: string path = ExePath();	 // gest path
filelibrarian = path + "/Librarians.txt";
fileclients = path + "/Clients.txt";
filebooks = path + "/Books.txt";

// creates files based on path | c_str() to convert to char*
std :: ofstream file(filelibrarian.c_str(),std:: ios::app); 
std :: ofstream file1(fileclients.c_str(),std ::ios::app);
std :: ofstream file2(filebooks.c_str(),std :: ios::app);


std :: cout << "Files created at: " << path <<  std :: endl; 
//std :: cout << " File: " << filelibrarian << " should have been created \n";

}


	
