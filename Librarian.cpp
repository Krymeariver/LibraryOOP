#include "Librarian.h"


Librarian::Librarian(std:: string N):
	Name(N)
{
std :: cout << "Librarian: " << Name << " constructor called \n";
WriteInFile();	
} 

Librarian::Librarian()
{
std :: cout << "Librarian: without name constructor called \n";	
}


Librarian::~Librarian()
{
}

void Librarian :: WriteInFile() {
	std :: string path = ExePath();
	path = path + "/Librarians.txt";
//	std ::ofstream libfile(path,std:: ios :: out | std ::ios: app);
std :: ofstream libfile;
libfile.open(path, std :: ofstream :: out | std :: ofstream::app);
//	libfile = fopen(path, std :: ios ::app);	
	libfile << "Librarian: " << this->Name << "\n";
	libfile.close();
std :: cout << "New entry added to librarian file" << std :: endl ; 	
}


std :: string Librarian :: ExePath() {  // returns the path of current folder
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    std :: string::size_type pos = std :: string( buffer ).find_last_of( "\\/" );
    std :: string pathstring =  std :: string( buffer ).substr( 0, pos);
    std :: replace (pathstring.begin(), pathstring.end(), '\\', '/');
   return pathstring;
	}
