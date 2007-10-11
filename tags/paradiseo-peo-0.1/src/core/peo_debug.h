// -*- mode: c++; c-indent-level: 4; c++-member-init-indent: 8; comment-column: 35; -*-

// "peo_debug.h"

// (c) OPAC Team, LIFL, August 2005

/* This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
   
   Contact: paradiseo-help@lists.gforge.inria.fr
*/

#ifndef __peo_debug_h
#define __peo_debug_h

extern void initDebugging ();

extern void endDebugging ();

extern void setDebugMode (bool __dbg = true); /* (Des)activating the Debugging mode */

extern void printDebugMessage (const char * __mess); /* Print a new message both on the
							standard output and a target
							text-file in a subdirectory) */

#endif