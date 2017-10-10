/* 
 * File:   CrazyRandomSword.cpp
 * Author: Jeremy
 * 
 * Created on October 10th
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
    int ignored = rand()%int(armor/2);
	double damage = hitPoints-armor+ignored;
	if(damage<0)
		damage = 0;
    return damage;
}
