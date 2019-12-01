#ifndef CLIENTS_H
#define CLIENTS_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

class Clients
{
	public:
		Clients(std :: string N,	std :: string R,int AGE, std :: string cnp);
		std :: string Name;
		std :: string Residence;
		int age;
		~Clients();
		void showinfo ();
	protected:
		std :: string CNP;
};

#endif
