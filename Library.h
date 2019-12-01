#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "Librarian.h"

class Library
{
	public:
	Library(std :: string Name,std:: string Location, std :: string Key, std:: string AdminName);
	~Library();		
	std:: string Name;
	std:: string NewName;
	std:: string AdminName;
//	Librarian Admin;
    void DisplayName();
    void ChangeName(std:: string NewName, std:: string userkey);
    
	protected:
	std:: string Key;
	private: 	
	std:: string Location;

};

#endif
