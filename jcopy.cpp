// jcopy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
# include <stdlib.h>
# include "Windows.h"

int main(int argc, char* argv[])
{
	if( argc<3) {
	
		printf("Uso: jcopy [retardo] [desde] [hasta]\n");
		return 0;
	}
	printf("Un momento mientras se completa la actualizacion\n");
	Sleep(atoi(argv[1]));
	DeleteFile( argv[3]);
	MoveFile( argv[2], argv[3]);
	WinExec( argv[3], SW_NORMAL);
	return 0;
}

