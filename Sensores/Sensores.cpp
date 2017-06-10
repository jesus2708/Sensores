#include "stdafx.h"  //________________________________________ Sensores.cpp
#include "Sensores.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Sensores app;
	return app.BeginDialog(IDI_Sensores, hInstance);
}

void Sensores::Window_Open(Win::Event& e)
{
	wstring name(L"Termometro");
	const double weight = 49.0;
	const int width = 4;
	const int height = 10;
	const int depth = 5;
	wstring text;
	Sys::Format(text,L"Name:%s\r\nWeight: %g gr\r\nSize: %d cm x %d cm x %d", name.c_str(), weight, width, height, depth);
	this->MessageBoxW(text, L"Specificaciones", MB_OK);
}

