#include "matriz.h"

matriz::matriz()
{
  //ctor
}

matriz::~matriz()
{
  //dtor
}

matriz::matriz(const matriz& other)
{
  //copy ctor
}

matriz& matriz::operator=(const matriz& rhs)
{
  if (this == &rhs) return *this; // handle self assignment
  //assignment operator
  return *this;
}
