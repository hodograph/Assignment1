/* 
 * File:   SimpleAxe.h
 * Author: Jeremy
 *
 * Created on October 10th
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, ignores all armor 
 * if armor points are between 0 and 20)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Common spear", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */

