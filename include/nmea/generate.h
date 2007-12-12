/*
 *
 * NMEA library
 * URL: http://nmea.sourceforge.net
 * Author: Tim (xtimor@gmail.com)
 * Licence: http://www.gnu.org/licenses/lgpl.html
 * $Id$
 *
 */

#ifndef NMEA_GENERATOR_H
#define NMEA_GENERATOR_H

#include "info.h"

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct _nmeaGENERATOR
{
    nmeaPACKET_HANDLER  *handler;

} nmeaGENERATOR;

int     nmea_generator_init(nmeaGENERATOR *gen, int generate_mask);
void    nmea_generator_destroy(nmeaGENERATOR *gen);

int     nmea_generate(
        nmeaGENERATOR *gen,
        nmeaDB *db,
        char *buff, int buff_sz
        );