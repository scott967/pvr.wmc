/*
 *      Copyright (C) 2005-2015 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */
#pragma once


#include "libXBMC_addon.h"
#include "libXBMC_pvr.h"
#include "libKODI_guilib.h"
#include <p8-platform/util/StringUtils.h>

#include "clientversion.h"

#define string_format StringUtils::Format
#define split StringUtils::Split

extern bool								m_bCreated;
extern std::string						g_strUserPath;
extern std::string						g_strClientPath;
extern std::string						g_strServerName;		// the name of the server to connect to
extern std::string						g_strClientName;		// the name of the computer running addon
extern std::string						g_clientOS;				// OS of client, passed to server
extern int								g_port;
extern bool								g_bSignalEnable;
extern int								g_signalThrottle;
extern bool								g_bEnableMultiResume;
extern ADDON::CHelper_libXBMC_addon		*XBMC;
extern CHelper_libXBMC_pvr				*PVR;
extern std::string						g_strServerMAC;
extern bool								g_bWakeOnLAN;
extern std::string						g_AddonDataCustom;

enum backend_status
  {
    BACKEND_UNKNOWN,
    BACKEND_DOWN,
    BACKEND_UP
  };
extern backend_status					g_BackendOnline;
