#pragma once  //______________________________________ Sensores.h  
#include "Resource.h"
class Sensores: public Win::Dialog
{
public:
	Sensores()
	{
	}
	~Sensores()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"Sensores";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
