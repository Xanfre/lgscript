/******************************************************************************
 *  Dll.cpp
 *
 *  This file is part of LgScript
 *  Copyright (C) 2011 Tom N Harris <telliamed@whoopdedo.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 *****************************************************************************/
#include <windows.h>

extern "C"
BOOL WINAPI
DllMain (HINSTANCE hDLL, DWORD dwReason, PVOID lpResv)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hDLL);
		return TRUE;
	}
	return TRUE;
#ifdef __GNUC__
	lpResv = lpResv;
#endif
#ifdef __BORLANDC__
#pragma argsused(hDLL,dwReason)
#endif
}
