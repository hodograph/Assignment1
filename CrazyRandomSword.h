/* 
 * File:   CrazyRandomSword.h
 * Author: Jeremy
 *
 * Created on October 10th
 */

#include <string>
#include <stdlib.h>
#include "Weapon.h"
#include <ctime>


#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = random number between 10 and 100
 * ignores a random amount of armor between 0 and half the armor)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", randHit()) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);
private:
	double randHit(){
		srand(time(NULL));
		return rand()%91+10*1.0;
	}
};

#endif /* CRAZYRANDOMSWORD_H */

