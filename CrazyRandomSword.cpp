/* 
 * File:   CrazyRandomSword.cpp
 * Author: Jeremy
 * 
 * Created on October 10th
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    int ignored = rand()%(armor/2)
	double damage = hitPoints-armor+ignored;
    return damage;
}
