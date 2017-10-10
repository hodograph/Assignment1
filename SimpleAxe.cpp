/* 
 * File:   SimpleAxe.cpp
 * Author: Jeremy
 * 
 * Created on October 10th
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    if(armor>0 && armor<20)
		armor = 0;
	double damage = hitPoints-armor;
    return damage;
}
