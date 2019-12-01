#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "Librarian.h"
#include "Clients.h"
#include <io.h>
#include <sstream>
#include <fstream>
#include <dirent.h>
#include <errno.h>
#include <tchar.h>
#include <windows.h>
#include <string>
#include <algorithm>

class Library
{
	public:
	Library(std :: string Name,std:: string Location, std :: string Key, std:: string AdminName);
	~Library();		
	std:: string Name;
	std:: string NewName;
	std:: string AdminName;
	std :: string ExePath(); // get current file path
	std :: string path;
	std :: string filelibrarian;
	std :: string fileclients;
	std :: string filebooks;

    void DisplayName();
    void ChangeName(std:: string NewName, std:: string userkey);
    void CreateFiles();
    
	protected:
	std:: string Key;
	private: 	
	std:: string Location;


};

#endif
