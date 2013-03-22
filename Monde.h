/* 
 * File:   Monde.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:04
 */

#ifndef MONDE_H
#define MONDE_H

#include <vector>
#include <map>
#include "Position.h"
#include "Element.h"
#include "Parametres.h"
#include <stdlib.h>
#include <time.h>
#include "Homme.h"
#include "Femme.h"
#include "Arbre.h"
#include "Baie.h"
#include "Sanglier.h"
#include "Lapin.h"

class Element;
// Contre problème d'inclusion cyclique

class Monde : public vector<Element *>
{
public:
  // Constructeurs
  Monde();
  virtual
  ~Monde();

  // Getters & setters
  const map<Position, unsigned int>&
  getMap() const;
  map<Position, unsigned int>&
  getMap();

  // Autres méthodes
  void
  afficher() const;
  bool
  estValide(Position _pos) const; // Pour vérifier si la position est valide (renvoie 1) ou non (renvoie 0)
  void
  ajouter(Element *_elt);
  Position
  posAleatoire();

private:
  map<Position, unsigned int> wMap;
  Parametres param;
};

#endif	/* MONDE_H */

