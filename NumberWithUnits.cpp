#include "NumberWithUnits.hpp"

    using namespace ariel;

    NumberWithUnits::NumberWithUnits(std::string unit){
        this->num=0;
        this->unit=unit;
    }
    NumberWithUnits::NumberWithUnits(double num, std::string unit){
        this->num=num;
        this->unit=unit;
    }
    //===============================================================
    //Arithmetic Operators===========================================
    NumberWithUnits& NumberWithUnits::operator+ (const NumberWithUnits& nwu)
    {return;}
    NumberWithUnits& NumberWithUnits::operator+= (const NumberWithUnits& nwu)
    {return;}
    NumberWithUnits& NumberWithUnits::operator+ ()
    {return;}
    NumberWithUnits& operator- (const NumberWithUnits& nwu)
    {return;}
    NumberWithUnits& NumberWithUnits::operator-= (const NumberWithUnits& nwu)
    {return;}
    NumberWithUnits& NumberWithUnits::operator- ()
    {return;}
    //===============================================================


    //===============================================================
    //Compartion Operators===========================================
    bool NumberWithUnits::operator< (const NumberWithUnits& nwu)
    {return true;}
    bool NumberWithUnits::operator<= (const NumberWithUnits& nwu)
    {return true;}
    bool NumberWithUnits::operator> (const NumberWithUnits& nwu)
    {return true;}
    bool NumberWithUnits::operator>= (const NumberWithUnits& nwu)
    {return true;}
    bool NumberWithUnits::operator== (const NumberWithUnits& nwu)
    {return true;}
    bool NumberWithUnits::operator!= (const NumberWithUnits& nwu)
    {return true;}
    //===============================================================


    //===============================================================
    //Prefix Operators===============================================
    NumberWithUnits& NumberWithUnits::operator-- ()
    {return;}
    NumberWithUnits& NumberWithUnits::operator++ ()
    {return;}
    //==============================================================


    //==============================================================
    //Psotfix Operators=============================================
    NumberWithUnits& NumberWithUnits::operator++ (int)
    {return;}
    NumberWithUnits& NumberWithUnits::operator++ (int)
    {return;}
    //==============================================================


    //==============================================================
    //Multiplication Operators======================================
    NumberWithUnits& operator* (NumberWithUnits& nwu, double num)
    {return;}
    NumberWithUnits& operator* (double num1, NumberWithUnits& nwu)
    {return;}
    //==============================================================


    //==============================================================
    //Stream Operators==============================================
    std::ostream NumberWithUnits::operator<< (std::ostream& os)
    {return;}
    std::istream NumberWithUnits::operator>> (std::istream& is)
    {return;}
    //==============================================================
