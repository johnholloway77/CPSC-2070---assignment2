//
// Created by jholloway on 11/30/24.
// Copyright (c) [2024] John Holloway. All Rights Reserved.
//

#ifndef ASSIGN2_INCLUDE_BASEANIMAL_H_
#define ASSIGN2_INCLUDE_BASEANIMAL_H_

#include <iostream>

class BaseAnimal {
 protected:
  std::string name_;
  std::string breed_;
  int birthYear_;

  BaseAnimal(const std::string& name, const std::string& breed, int birthYear)
      : name_(name), breed_(breed), birthYear_(birthYear){};

 public:
  virtual ~BaseAnimal() = default;
  virtual std::string getName() const = 0;
  virtual std::string getColour() const = 0;
};

#endif  // ASSIGN2_INCLUDE_BASEANIMAL_H_
