// lpcm.h : main header file for the lpcm DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ClpcmApp
// See lpcm.cpp for the implementation of this class
//

class ClpcmApp : public CWinApp
{
public:
	ClpcmApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
