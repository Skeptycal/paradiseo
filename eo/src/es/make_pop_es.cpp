// -*- mode: c++; c-indent-level: 4; c++-member-init-indent: 8; comment-column: 35; -*-

//-----------------------------------------------------------------------------
// make_pop_es.cpp
// (c) Maarten Keijzer, Marc Schoenauer and GeNeura Team, 2001
/* 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Contact: todos@geneura.ugr.es, http://geneura.ugr.es
             Marc.Schoenauer@polytechnique.fr
             mkeijzer@dhi.dk
 */
//-----------------------------------------------------------------------------

/** This file contains ***INSTANCIATED DEFINITIONS*** of pop. init. fns
 * of the library for  evolution of ***ES genotypes*** indis inside EO.
 * It should be included in the file that calls any of the corresponding fns
 * Compiling this file allows one to generate part of the library (i.e. object
 * files that you just need to link with your own main and fitness code).
 *
 * The corresponding ***INSTANCIATED DECLARATIONS*** are contained 
 *       in src/es/es.h
 * while the TEMPLATIZED code is define in make_pop.h in the src/do dir
 */

// The templatized code
#include <do/make_pop.h>
// the instanciating EOType(s)
#include <es/eoEsSimple.h>	   // one Sigma per individual
#include <es/eoEsStdev.h>	   // one sigmal per object variable
#include <es/eoEsFull.h>	   // full correlation matrix per indi

/// The following function merely call the templatized do_* functions above

// Init POP
///////////
eoPop<eoEsSimple<double> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsSimple<double> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}

eoPop<eoEsSimple<eoMinimizingFitness> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsSimple<eoMinimizingFitness> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}

///////////
eoPop<eoEsStdev<double> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsStdev<double> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}

eoPop<eoEsStdev<eoMinimizingFitness> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsStdev<eoMinimizingFitness> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}

///////////
eoPop<eoEsFull<double> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsFull<double> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}

eoPop<eoEsFull<eoMinimizingFitness> >&  make_pop(eoParser& _parser, eoState& _state, eoInit<eoEsFull<eoMinimizingFitness> > & _init)
{
  return do_make_pop(_parser, _state, _init);
}


