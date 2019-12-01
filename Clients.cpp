#include "Clients.h"

Clients :: Clients (std :: string N,	std :: string R,int AGE, std :: string cnp)
{
this -> Name = N;
this ->	Residence = R;
this -> age = AGE;
this -> CNP = cnp;
	
}


Clients :: ~Clients (){
	
	
}

void Clients :: showinfo (){
	std :: cout <<"Client Name: " << Name  << std :: endl;
		std :: cout <<"Client Residence: " <<  Residence << std :: endl;
			std :: cout <<"Client Age " << age  << std :: endl;
				std :: cout <<"Client CNP " << CNP  << std :: endl;  
}
