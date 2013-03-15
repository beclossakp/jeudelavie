/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile() :
    Element(), vision(1), vitesse(1)
{
}

Mobile::Mobile(const Element& _elem, const unsigned int _vision,
    const unsigned int _vitesse) :
    Element(_elem), vision(_vision), vitesse(_vitesse)
{
}

Mobile::Mobile(const Position & _pos, const string & _nom,
    const unsigned int _vision, const unsigned int _vitesse) :
    Element(_pos, _nom), vision(_vision), vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
}

unsigned int
Mobile::getVitesse() const
{
  return vitesse;
}

void
Mobile::setVitesse(const unsigned int _vitesse)
{
  vitesse = _vitesse;
}

unsigned int
Mobile::getVision() const
{
  return vision;
}

void
Mobile::setVision(const unsigned int _vision)
{
  vision = _vision;
}

