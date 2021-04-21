#include "NumberWithUnits.hpp"


    using namespace ariel;
    using namespace std;


    NumberWithUnits::NumberWithUnits(double num, std::string unit){
        this->num=num;
        this->unit=unit;
    }
    NumberWithUnits::NumberWithUnits(const NumberWithUnits& n)
    {
        this->num=n.num;
        this->unit=n.unit;
    }
    void NumberWithUnits::read_units(std::ifstream& units_file){}
    NumberWithUnits::~NumberWithUnits(){}

    //===============================================================
    //Arithmetic Operators===========================================
    NumberWithUnits& NumberWithUnits::operator+ (const NumberWithUnits& nwu)
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator+= (const NumberWithUnits& nwu)
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator+ ()
    {return *this;}
    NumberWithUnits ariel::operator+(double number, const NumberWithUnits &nwu)
    {return nwu;}
    NumberWithUnits& NumberWithUnits::operator- (const NumberWithUnits& nwu)
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator-= (const NumberWithUnits& nwu)
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator- ()
    {return *this;}
    //===============================================================


    //===============================================================
    //Compartion Operators===========================================
    bool ariel::NumberWithUnits::operator< (const NumberWithUnits& nwu) const
    {return true;}
    bool ariel::NumberWithUnits::operator<= (const NumberWithUnits& nwu) const
    {return true;}
    bool ariel::NumberWithUnits::operator> (const NumberWithUnits& nwu) const
    {return true;}
    bool ariel::NumberWithUnits::operator>= (const NumberWithUnits& nwu) const
    {return true;}
    bool ariel::NumberWithUnits::operator== (const NumberWithUnits &nwu) const
    {return true;}
    bool ariel::NumberWithUnits::operator!= (const NumberWithUnits& nwu) const
    {return true;}
    //===============================================================


    //===============================================================
    //Prefix Operators===============================================
    NumberWithUnits& NumberWithUnits::operator++ ()
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator-- ()
    {return *this;}
    //==============================================================


    //==============================================================
    //Psotfix Operators=============================================
    NumberWithUnits& NumberWithUnits::operator++ (int)
    {return *this;}
    NumberWithUnits& NumberWithUnits::operator-- (int)
    {return *this;}
    //==============================================================


    //==============================================================
    //Multiplication Operators======================================
    NumberWithUnits& NumberWithUnits::operator* (double num1)
    {return *this;}
    NumberWithUnits ariel::operator*(double number, const NumberWithUnits &nwu)
    {return nwu;}
    //==============================================================


    //==============================================================
    //Stream Operators==============================================
    std::ostream &ariel::operator<<(std::ostream &os, const NumberWithUnits &nwu) {
    return os;}

    std::istream &ariel::operator>>(std::istream &is, NumberWithUnits &nwu) 
    {
    return is;}
    //==============================================================
