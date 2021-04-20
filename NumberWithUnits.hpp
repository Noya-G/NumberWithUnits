/************************************************************************************
 * C++ course, Ariel university.
 *
 * Authots: Noya Gendelman
 ***********************************************************************************/

#include <iostream>
#include <string>
#include <iostream>

namespace ariel{
    class NumberWithUnits
    {
    private:
        std::string unit;
        double num;
    public:
        NumberWithUnits(std::string unit);
        NumberWithUnits(double num, std::string unit);
        ~NumberWithUnits();

        //===============================================================
        //Arithmetic Operators===========================================
        NumberWithUnits& operator+ (const NumberWithUnits& nwu);
        NumberWithUnits& operator+= (const NumberWithUnits& nwu);
        NumberWithUnits& operator+ ();
        NumberWithUnits& operator- (const NumberWithUnits& nwu);
        NumberWithUnits& operator-= (const NumberWithUnits& nwu);
        NumberWithUnits& operator- () ;
        //===============================================================


        //===============================================================
        //Compartion Operators===========================================
        bool operator< (const NumberWithUnits& nwu);
        bool operator<= (const NumberWithUnits& nwu);
        bool operator> (const NumberWithUnits& nwu);
        bool operator>= (const NumberWithUnits& nwu);
        bool operator== (const NumberWithUnits& nwu);
        bool operator!= (const NumberWithUnits& nwu);
        //===============================================================


        //===============================================================
        //Prefix Operators===============================================
        NumberWithUnits& operator-- ();
        NumberWithUnits& operator++ ();
        //==============================================================


        //==============================================================
        //Psotfix Operators=============================================
        NumberWithUnits& operator++ (int);
        NumberWithUnits& operator++ (int);
        //==============================================================


        //==============================================================
        //Multiplication Operators======================================
        friend NumberWithUnits& operator* (NumberWithUnits& nwu, double num); 
        friend NumberWithUnits& operator* (double num1, NumberWithUnits& nwu);
        //==============================================================


        //==============================================================
        //Stream Operators==============================================
        std::ostream operator<< (std::ostream& os);
        std::istream operator>> (std::istream& is);
        //==============================================================
    };
}
