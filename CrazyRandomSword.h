/* 
 * File:   CrazyRandomSword.h
 * Author: Jeremy
 *
 * Created on October 10th
 */

#include <string>
#include <stdlib.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, ignores all armor 
 * if armor points are between 0 and 20)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", rand()%91+10*1.0) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

