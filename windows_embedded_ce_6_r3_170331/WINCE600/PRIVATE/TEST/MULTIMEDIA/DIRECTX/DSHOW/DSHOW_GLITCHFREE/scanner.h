//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES.
//
// --------------------------------------------------------------------
//                                                                     
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF 
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A      
// PARTICULAR PURPOSE.                                                 
//                                                                     
// --------------------------------------------------------------------
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class CScanner
{
public:
	CScanner();
	~CScanner();

	bool Init(const char *szFilename);

	bool SkipWhiteSpace();
	bool Advance();
	bool Match(const char ch);

	bool GetName(char **ppszName, int *pcchName);
	bool GetAttributeName(char **ppszName, int *pcchName);
	bool GetAttributeValue(char **ppszValue, int *pcchValue);
	bool GetCharacters(char **ppszCharacters, int *pcchCharacters);

private:
	FILE* m_ifs;
	char     m_ch;
};