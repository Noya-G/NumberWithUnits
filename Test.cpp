
/************************************************************************************
 * C++ course, Ariel university.
 *
 * AUTHORS: Noya Gendelman
 ***********************************************************************************/
#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>

using namespace ariel;

//Dist-------------------------------
NumberWithUnits km_7(7, "km");
NumberWithUnits m_5(5, "m");
NumberWithUnits cm_5(5, "cm");
//Time-------------------------------
NumberWithUnits hour_4(4, "hour");
NumberWithUnits min_4(4, "min");
NumberWithUnits sec_5(5, "sec");
//Weight-------------------------------
NumberWithUnits ton_4(4, "ton");
NumberWithUnits kg_50(50, "kg");
//Currency----------------------------
NumberWithUnits USD_45(45, "USD");
NumberWithUnits ILS_45(45, "ILS");


TEST_CASE("create a number with unit")
{

    //Exption----------------------------
    CHECK_THROWS(NumberWithUnits(0,""));
    CHECK_THROWS(NumberWithUnits(0,"df"));

}

using namespace ariel;
TEST_CASE("Arithmetic Operators +")
{
    //Dist-------------------------------
    NumberWithUnits dist_test = km_7+m_5;
    CHECK(dist_test==NumberWithUnits(7.005,"km"));
    dist_test = km_7+cm_5;
    CHECK(dist_test==NumberWithUnits(7.00005,"km"));
    dist_test = cm_5+m_5;
    CHECK(dist_test==NumberWithUnits(5.05,"m"));
    dist_test = cm_5+m_5;
    CHECK(dist_test==NumberWithUnits(5.05,"m"));
    dist_test = cm_5-m_5;
    CHECK(dist_test==NumberWithUnits(-4.95,"m"));
    dist_test = m_5-NumberWithUnits(495,"m");
    CHECK(dist_test==NumberWithUnits(5,"cm"));
    dist_test=+ NumberWithUnits(1,"m");
    CHECK(dist_test==NumberWithUnits(6,"cm"));
    dist_test=+ NumberWithUnits(94,"cm");
    CHECK(dist_test==NumberWithUnits(1,"m"));
    dist_test=+ NumberWithUnits(94,"cm");
    CHECK(dist_test==NumberWithUnits(1,"m"));
    dist_test=- NumberWithUnits(1,"cm");
    CHECK(dist_test==NumberWithUnits(99,"cm"));
    dist_test=- NumberWithUnits(9,"cm");
    CHECK(dist_test==NumberWithUnits(90,"cm"));
    dist_test=dist_test-NumberWithUnits(9,"cm");
    CHECK(dist_test==NumberWithUnits(81,"cm"));
    dist_test=+dist_test;
    CHECK(dist_test==NumberWithUnits(81,"cm"));
    dist_test=-dist_test;
    CHECK(dist_test==NumberWithUnits(-81,"cm"));


    //Time-------------------------------
    NumberWithUnits time_test = hour_4+min_4;
    CHECK(time_test==NumberWithUnits(4.04,"hour"));
    time_test = sec_5+min_4;
    CHECK(time_test==NumberWithUnits(4.04,"hour"));
    time_test = 59.0+min_4;
    CHECK(time_test==NumberWithUnits(1.05,"hour"));
    time_test=+NumberWithUnits(3,"min");
    CHECK(time_test==NumberWithUnits(1.1,"hour"));
    time_test=time_test-NumberWithUnits(3,"min");
    CHECK(time_test==NumberWithUnits(1.05,"hour"));
    time_test=-NumberWithUnits(6,"min");
    CHECK(time_test==NumberWithUnits(57,"min"));
    time_test=+time_test;
    CHECK(time_test==NumberWithUnits(57,"min"));
    time_test=-time_test;
    CHECK(time_test==NumberWithUnits(-57,"min"));

    //Weight-------------------------------
    NumberWithUnits weight_test = ton_4+kg_50;
    CHECK(weight_test==NumberWithUnits(4.05,"ton"));
    weight_test = 970.0+kg_50;
    CHECK(weight_test==NumberWithUnits(4.05,"ton"));
    weight_test = 3.0+kg_50;
    CHECK(weight_test==NumberWithUnits(53,"kg"));
    weight_test = 3.0+kg_50;
    CHECK(weight_test==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits currency_test = USD_45+ILS_45;
    CHECK(currency_test==NumberWithUnits(58.513511351,"USD"));

    //Exption----------------------------
    CHECK_THROWS(USD_45+km_7);
    CHECK_THROWS(min_4+km_7);
    CHECK_THROWS(kg_50+km_7);

}


TEST_CASE("Compartion Operators +")
{
    //Dist-------------------------------
    CHECK(m_5==NumberWithUnits(5,"m"));
    CHECK(m_5==NumberWithUnits(500,"cm"));
    CHECK(m_5==NumberWithUnits(500,"cm"));
    CHECK(km_7==NumberWithUnits(7000,"m"));
    CHECK(m_5<=NumberWithUnits(5,"m"));
    CHECK_EQ(m_5<=NumberWithUnits(5,"m"),true);
    CHECK_FALSE(m_5<=NumberWithUnits(400,"cm"));
    CHECK_FALSE(m_5<=NumberWithUnits(5,"km"));
    CHECK_FALSE(m_5>NumberWithUnits(5,"km"));

    //Time-------------------------------
    CHECK(hour_4==NumberWithUnits(4,"hour"));
    CHECK(hour_4==NumberWithUnits(240,"min"));
    CHECK(min_4==NumberWithUnits(240,"sec"));
    CHECK(hour_4<=NumberWithUnits(250,"min"));
    CHECK_EQ(hour_4<=NumberWithUnits(4,"hour"),true);
    CHECK_FALSE(min_4>=NumberWithUnits(240,"sec"));
    CHECK_FALSE(min_4!=NumberWithUnits(5,"hour"));

    //Weight-------------------------------
    CHECK(kg_50==NumberWithUnits(50,"kg"));
    CHECK(kg_50==NumberWithUnits(0.05,"ton"));
    CHECK(min_4==NumberWithUnits(240,"sec"));
    CHECK(NumberWithUnits(7,"g")<=NumberWithUnits(250,"g"));
    CHECK_EQ(NumberWithUnits(4000,"g")<=NumberWithUnits(4,"kg"),true);
    CHECK_FALSE(ton_4>=NumberWithUnits(240,"kg"));
    CHECK_FALSE(ton_4!=NumberWithUnits(5,"kg"));

    //Currency----------------------------
    CHECK(USD_45==NumberWithUnits(45,"USD"));
    CHECK(USD_45==NumberWithUnits(149.84,"ILS"));
    CHECK_EQ(NumberWithUnits(7,"USD")<=NumberWithUnits(250,"ILS"),true);
    CHECK_EQ(NumberWithUnits(4000,"g")<=NumberWithUnits(4,"kg"),true);
    CHECK_FALSE(USD_45>=NumberWithUnits(1000,"ILS"));
    CHECK_FALSE(USD_45!=NumberWithUnits(5,"USD"));
}


TEST_CASE("Prefix Operators && Psotfix Operators")
{
    //Dist-------------------------------
    CHECK_EQ(cm_5++,NumberWithUnits(6,"cm"));
    CHECK_EQ(m_5++,NumberWithUnits(6,"m"));
    CHECK_EQ(km_7++,NumberWithUnits(8,"km"));
    CHECK_EQ(NumberWithUnits(99,"m"),NumberWithUnits(1,"km"));

    //Time-------------------------------
    CHECK_EQ(sec_5++,NumberWithUnits(6,"sec"));
    CHECK_EQ(min_4,NumberWithUnits(5,"min"));
    CHECK_EQ(hour_4++,NumberWithUnits(5,"hour"));
    CHECK_EQ(NumberWithUnits(59,"min"),NumberWithUnits(1,"hour"));

    //Weight-------------------------------
    CHECK_EQ(NumberWithUnits(5,"g"),NumberWithUnits(6,"g"));
    CHECK_EQ(kg_50++,NumberWithUnits(51,"kg"));
    CHECK_EQ(NumberWithUnits(999,"kg")++,NumberWithUnits(1,"ton"));
    CHECK_EQ(NumberWithUnits(999,"g"),NumberWithUnits(1,"kg"));

    //Currency----------------------------
    CHECK_EQ(ILS_45++,NumberWithUnits(46,"ILS"));
    CHECK_EQ(USD_45++,NumberWithUnits(46,"USD"));
}


TEST_CASE("Multiplication Operators")
{
    //Dist-------------------------------
    NumberWithUnits dist_test = 3*m_5;
    CHECK(dist_test==NumberWithUnits(15,"km"));
    dist_test = m_5*3;
    CHECK(dist_test==NumberWithUnits(15,"km"));
    dist_test = m_5*1000;
    CHECK(dist_test==NumberWithUnits(5000,"km"));

    //Time-------------------------------
    NumberWithUnits time_test = hour_4*2;
    CHECK(time_test==NumberWithUnits(8,"hour"));
    time_test = sec_5*2;
    CHECK(time_test==NumberWithUnits(10,"sec"));
    time_test = NumberWithUnits(60,"min")*2;
    CHECK(time_test==NumberWithUnits(2,"hour"));

    //Weight-------------------------------
    NumberWithUnits weight_test = ton_4*2;
    CHECK(weight_test==NumberWithUnits(8,"ton"));
    weight_test = ton_4*2;
    CHECK(weight_test==NumberWithUnits(8,"ton"));
    weight_test = 1000*NumberWithUnits(5,"kg");
    CHECK(weight_test==NumberWithUnits(5,"ton"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45*2;
    CHECK(weight_test==NumberWithUnits(90,"USD"));

}
