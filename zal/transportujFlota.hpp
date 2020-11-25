#pragma once

#include "Stocznia.hpp"
unsigned int transportujFlota(unsigned int towar)
{
  unsigned int liczba_z = 0;
  unsigned int suma_t = 0;

if (towar == 0)
{ 
  return 0;
}
else
while (suma_t<towar)
{
Stocznia stocznia{};
Statek* s1=stocznia();
suma_t=suma_t+s1->transportuj();
if (s1==dynamic_cast<Zaglowiec*>(s1))
{
liczba_z=liczba_z+1;
}
delete s1;
}
return liczba_z;
}
