#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Library.h"
#include "Librarian.h"

int main (){
	Library libnat("Libraria Nationala","Bucuresti","libelula","Alex");
	libnat.DisplayName();
	libnat.ChangeName("Stupid Library", "libelula");
	libnat.DisplayName();
	}






