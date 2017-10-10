/* 
 * File:   HolyHandGrenadeOfAntioch.h
 * Author: Jeremy
 *
 * Created on October 10th
 */

#include <string>
#include <stdlib.h>
#include <ctime>
#include "Weapon.h"

#ifndef HOLYHANDGRENADEOFANTIOCH_H
#define HOLYHANDGRENADEOFANTIOCH_H

/**
 * Defines the behavior of the holy hand grenade of antioch (hitpoint = 10,
 * damage gets multiplied by 1, 2, or 5)
 */
class HolyHandGrenadeOfAntioch : public Weapon {
public:

    HolyHandGrenadeOfAntioch() : Weapon("Holy Hand Grenade of Antioch", 10.0) {
    }
    virtual ~HolyHandGrenadeOfAntioch() {}; 
    virtual double hit(double armor);

};

#endif /* HOLYHANDGRENADEOFANTIOCH_H */