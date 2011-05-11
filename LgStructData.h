/******************************************************************************
 *  LgStructData.h
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
#ifndef LGSTRUCTDATA_H
#define LGSTRUCTDATA_H

#include <lg/config.h>
#include <lg/objstd.h>
#include <lg/tools.h>
#include <lg/interface.h>

#include "luax.h"

namespace Lgs
{

class StructData
{
public:
	StructData(luax::State& L, const char* D);

	int push(const char* data);
	int push(const char* data, const char* name);

private:
	luax::State& m_lua;
	SInterface<IStructDescTools> m_sd;
	const sStructDesc* m_desc;

	void pushField(const sFieldDesc* field, const char* data);
};

} // namespace Lgs

#endif // LGMESSAGE_H
