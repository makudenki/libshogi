/**
 *****************************************************************************

 @file       Shogi.cpp

 @brief      Common functions
  
 @author     Hiroki Takada (http://wwww.tsoftware.jp/)

 @date       2016-03-31

 @version    $Id:$


  Copyright 2014, 2015, 2016, 2017 Hiroki Takada

  This file is part of libshogi.

  libshogi is free software: you can redistribute it and/or modify it under
  the terms of the GNU Lesser General Public License as published by the
  Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  libshogi is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with libshogi. If not, see <http://www.gnu.org/licenses/>.

   
  ----------------------------------------------------------------------------
  RELEASE NOTE :

   DATE          REV    REMARK
  ============= ====== =======================================================
  31st Mar 2016  0.1   Initial release
 
 *****************************************************************************/ 

#include <Shogi.h>

// begin namespace 'game::Shogi'
namespace game { namespace Shogi {

/* ------------------------------ parameters ------------------------------- */
const char *                GlobalVersion = "2016121402";
/* ------------------------------------------------------------------------- */



/* ---------------------------- implementations ---------------------------- */

/**
 * Whole initialization
 * 
 */
void initialize (void)
{

    using namespace game;

    // Effect tables
    Effect ::initialize();

    // Zobrist hashing
    Zobrist::initialize();

}

/* ------------------------------------------------------------------------- */

// end namespace 'game::Shogi'
} }



