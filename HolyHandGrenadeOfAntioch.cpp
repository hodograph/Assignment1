/* 
 * File:   HolyHandGrenadeOfAntioch.cpp
 * Author: Jeremy
 * 
 * Created on October 10th
 */

#include "HolyHandGrenadeOfAntioch.h"

double HolyHandGrenadeOfAntioch::hit(double armor) {
    int multiplier = rand()%3+1
	if(multiplier == 3)
		multiplier = 5;
	double damage = hitPoints*multiplier-armor+ignored;
    return damage;
}
