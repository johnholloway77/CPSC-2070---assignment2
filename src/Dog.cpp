//
// Created by jholloway on 11/30/24.
// Copyright (c) [2024] John Holloway. All Rights Reserved.
//

#include "../include/Dog.h"

#include <iostream>

std::string Dog::getColour() const {
  return colourToString(colour_);
}

std::string Dog::getMarking() const {
  return markingToString(marking_);
}
