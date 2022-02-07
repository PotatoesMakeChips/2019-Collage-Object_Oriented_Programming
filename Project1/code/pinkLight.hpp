#include "systemclass.hpp"
#ifndef PINKLIGHT_HPP
#define PINKLIGHT_HPP
class pinkLight :public systemClass{
public:
  pinkLight(
    float InUserData,
    float InUserTexts,
    float InUserMinuets,
    float InUser080Minuets,
    float InUserTetherSent,
    float InUserTetherReseaved,
    float InMontlyCharge,
    float InCurrentVat,
    float InCostPerMb,
    float InCostPerText,
    float InCostPerMin
  );

  // this function will calculate the bill
  float calculateBill();
};
#endif
