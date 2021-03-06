/* Copyright_License {

  Top Hat Soaring Glide Computer - http://www.tophatsoaring.org/
  Copyright (C) 2000-2016 The Top Hat Soaring Project
  A detailed list of copyright holders can be found in the file "AUTHORS".

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
}
*/

#ifndef REACHFAN_PARMS_HPP
#define REACHFAN_PARMS_HPP

#include "Route/RoutePolars.hpp"

class FlatProjection;
class RasterMap;

struct ReachFanParms {
  const RoutePolars &rpolars;
  const FlatProjection &projection;
  const RasterMap* terrain;
  int terrain_base;
  unsigned terrain_counter;
  unsigned fan_counter;
  unsigned vertex_counter;
  unsigned char set_depth;

  ReachFanParms(const RoutePolars& _rpolars,
                const FlatProjection &_projection,
                const short _terrain_base,
                const RasterMap* _terrain=NULL):
    rpolars(_rpolars), projection(_projection), terrain(_terrain),
    terrain_base(_terrain_base),
    terrain_counter(0),
    fan_counter(0),
    vertex_counter(0),
    set_depth(0) {};

  FlatGeoPoint reach_intercept(const int index, const AGeoPoint& ao) const {
    return rpolars.ReachIntercept(index, ao, terrain, projection);
  }
};


#endif
