#ifndef SYSTEMCLASS_HPP
#define SYSTEMCLASS_HPP
class systemClass{
// protected set up all properties in scope
protected:
  float userData;
  float userTexts;
  float userMinuets;
  float user080Minuets;
  float userTetherSent;
  float userTetherReseaved;
  float montlyCharge;
  float currentVat; //store as decimal (ie: 20% vat as 0.2) the fig 1.2 would be 120% vat
  float costPerMb;
  float costPerText;
  float costPerMin;
public:
  // system is the constructor it takes all of the properties as inputs and assigns them to the opject
  systemClass(
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
  // get and set functions
  void setUserData(float InUserData);
  float getUserData();
  void setuserTexts(float InUserTexts);
  float getuserTexts();
  void setuserMinuets(float InUserMinuets);
  float getuserMinuets();
  void setuser080Minuets(float InUser080Minuets);
  float getuser080Minuets();
  void setuserTetherSent(float InUserTetherSent);
  float getuserTetherSent();
  void setuserTetherReseaved(float InUserTetherReseaved);
  float getuserTetherReseaved();
  void setmontlyCharge(float InMontlyCharge);
  float getmontlyCharge();
  void setcurrentVat(float InCurrentVat);
  float getcurrentVat();
  void setcostPerMb(float InCostPerMb);
  float getcostPerMb();
  void setcostPerText(float InCostPerText);
  float getcostPerText();
  void setcostPerMin(float InCostPerMin);
  float getcostPerMin();

  // this function adds the current vat ammount to the price provided
  float addVat(float priceExVat);
  // this function will calculate the bill in the child classes
  float calculateBill();
};

#endif
