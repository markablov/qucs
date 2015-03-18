/***************************************************************************
                         iexp.h  -  description
                        ------------------------
    begin                : Tue Mar 06 2007
    copyright          : (C) 2007 by Gunther Kraut
    email                : gn.kraut@t-online.de
    spice4qucs code added  Wed. 18 March 2015
    copyright          : (C) 2015 by Mike Brinson
    email                : mbrin72043@yahoo.co.uk

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef IEXP_H
#define IEXP_H

#include "component.h"


class iExp : public Component  {
public:
  iExp();
  ~iExp();
  Component* newOne();
  static Element* info(QString&, char* &, bool getNewOne=false);
  QString spice_netlist(bool isXyce = false);
};

#endif
