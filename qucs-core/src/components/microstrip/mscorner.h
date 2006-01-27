/*
 * mscorner.h - microstrip corner class definitions
 *
 * Copyright (C) 2004, 2006 Stefan Jahn <stefan@lkcc.org>
 * Copyright (C) 2004 Michael Margraf <Michael.Margraf@alumni.TU-Berlin.DE>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * $Id: mscorner.h,v 1.7 2006-01-27 09:32:02 raimi Exp $
 *
 */

#ifndef __MSCORNER_H__
#define __MSCORNER_H__

class mscorner : public circuit
{
 public:
  mscorner ();
  void calcSP (nr_double_t);
  void initSP (void);
  void initDC (void);
  void initAC (void);
  void calcAC (nr_double_t);

 private:
  void initCheck (void);
  matrix calcMatrixZ (nr_double_t);
  nr_double_t L, C, h;
};

#endif /* __MSCORNER_H__ */
