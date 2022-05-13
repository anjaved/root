// @(#)root/roostats:$Id: MetropolisHastings.cxx 28978 2009-06-17 14:33:31Z kbelasco $
// Authors: Kevin Belasco        17/06/2009
// Authors: Kyle Cranmer         17/06/2009
/*************************************************************************
 * Copyright (C) 1995-2008, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *                                                                       *
 * This code was autogenerated by RooClassFactory                        *
 *************************************************************************/

#include "RooStats/Heaviside.h"
#include "RooAbsReal.h"

using namespace std;

/** \class RooStats::Heaviside
    \ingroup Roostats

Represents the Heaviside function.
Evaluates to 1.0 when ((double)x) >= ((double)c), 0.0 otherwise.

*/

ClassImp(RooStats::Heaviside);

using namespace RooFit;
using namespace RooStats;

////////////////////////////////////////////////////////////////////////////////

Heaviside::Heaviside(const char *name, const char *title,
                       RooAbsReal& _x,
                       RooAbsReal& _c) :
  RooAbsReal(name,title),
  x("x","x",this,_x),
  c("c","c",this,_c)
{
}

////////////////////////////////////////////////////////////////////////////////

Heaviside::Heaviside(const Heaviside& other, const char* name) :
  RooAbsReal(other,name),
  x("x",this,other.x),
  c("c",this,other.c)
{
}

////////////////////////////////////////////////////////////////////////////////

double Heaviside::evaluate() const
{
  // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE
  if (((double)x) >= ((double)c))
     return 1.0;
  else
     return 0.0;
}
