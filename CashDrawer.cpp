// Archivo DLL principal.

#include "stdafx.h"
#include <windows.h>
#include "CashDrawer.h"

namespace CashDrawer
{

void
CashDrawer::Open()
{
	HANDLE hCom;
	BOOL fSuccess;
	char *pcCommPort = "//MUSICA/SAMSUNGS";

	hCom = CreateFile( pcCommPort,
		GENERIC_READ | GENERIC_WRITE,
		0,    // must be opened with exclusive-access
		NULL, // no security attributes
		OPEN_EXISTING, // must use OPEN_EXISTING
		0,    // not overlapped I/O
		NULL  // hTemplate must be NULL for comm devices
		);
    if (hCom == INVALID_HANDLE_VALUE) 
	{
		throw new System::Exception("No se pudo abrir la impresora");
	}

	char mensaje[5] ;
	mensaje[0] = 0x1B ;
	mensaje[1] = 0x70 ;
	mensaje[2] = 0x00 ;
	mensaje[3] = 0x50 ;
	mensaje[4] = 0x50 ;

	DWORD escribidos ;

	if(!WriteFile(hCom, mensaje, 5, &escribidos, NULL))
	{
		throw new System::Exception("No se pudo abrir el cajon");
	}
    
	CloseHandle(hCom);
	
}

}