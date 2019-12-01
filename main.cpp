#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Library.h"
#include "Librarian.h"
#include "Clients.h"


int main (){
	Library libnat("Libraria Nationala","Bucuresti","libelula","Alex");
	libnat.DisplayName();
	libnat.ChangeName("Stupid Library", "libelula");
	libnat.DisplayName();
	libnat.CreateFiles();
	Librarian Pikachu("Pikachu");
	Librarian Motan("Motan");
	Librarian WTF("Nanidafuq");
	Clients FirstClient ("Costel","Bucuresti", 21, "198042121021");
	FirstClient.showinfo();
	}






