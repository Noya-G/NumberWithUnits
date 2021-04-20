
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
    NumberWithUnits test8 = ton_4+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test10 = 970.0+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45+ILS_45;
    CHECK(test11==NumberWithUnits(58.513511351,"USD"));

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

    //Time-------------------------------
   

    //Weight-------------------------------
   
    //Currency----------------------------
    
    //Exption----------------------------
    CHECK_THROWS(USD_45==km_7);
    CHECK_THROWS(min_4==km_7);
    CHECK_THROWS(kg_50==km_7);
}


TEST_CASE("Prefix Operators")
{
    //Dist-------------------------------
    NumberWithUnits test1 = km_7+m_5;
    CHECK(test1==NumberWithUnits(7.005,"km"));
    NumberWithUnits test2 = km_7+cm_5;
    CHECK(test2==NumberWithUnits(7.00005,"km"));
    NumberWithUnits test3 = cm_5+m_5;
    CHECK(test3==NumberWithUnits(5.05,"m"));
    NumberWithUnits test4 = cm_5+m_5;
    CHECK(test4==NumberWithUnits(5.05,"m"));

    //Time-------------------------------
    NumberWithUnits test5 = hour_4+min_4;
    CHECK(test5==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test6 = sec_5+min_4;
    CHECK(test6==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test7 = 59.0+min_4;
    CHECK(test7==NumberWithUnits(1.05,"hour"));

    //Weight-------------------------------
    NumberWithUnits test8 = ton_4+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test10 = 970.0+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45+ILS_45;
    CHECK(test11==NumberWithUnits(58.513511351,"USD"));

    //Exption----------------------------
    CHECK_THROWS(USD_45+km_7);
    CHECK_THROWS(min_4+km_7);
    CHECK_THROWS(kg_50+km_7);
}

TEST_CASE("Psotfix Operators")
{
    //Dist-------------------------------
    NumberWithUnits test1 = km_7+m_5;
    CHECK(test1==NumberWithUnits(7.005,"km"));
    NumberWithUnits test2 = km_7+cm_5;
    CHECK(test2==NumberWithUnits(7.00005,"km"));
    NumberWithUnits test3 = cm_5+m_5;
    CHECK(test3==NumberWithUnits(5.05,"m"));
    NumberWithUnits test4 = cm_5+m_5;
    CHECK(test4==NumberWithUnits(5.05,"m"));

    //Time-------------------------------
    NumberWithUnits test5 = hour_4+min_4;
    CHECK(test5==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test6 = sec_5+min_4;
    CHECK(test6==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test7 = 59.0+min_4;
    CHECK(test7==NumberWithUnits(1.05,"hour"));

    //Weight-------------------------------
    NumberWithUnits test8 = ton_4+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test10 = 970.0+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45+ILS_45;
    CHECK(test11==NumberWithUnits(58.513511351,"USD"));

    //Exption----------------------------
    CHECK_THROWS(USD_45+km_7);
    CHECK_THROWS(min_4+km_7);
    CHECK_THROWS(kg_50+km_7);
}


TEST_CASE("Multiplication Operators")
{
    //Dist-------------------------------
    NumberWithUnits test1 = km_7+m_5;
    CHECK(test1==NumberWithUnits(7.005,"km"));
    NumberWithUnits test2 = km_7+cm_5;
    CHECK(test2==NumberWithUnits(7.00005,"km"));
    NumberWithUnits test3 = cm_5+m_5;
    CHECK(test3==NumberWithUnits(5.05,"m"));
    NumberWithUnits test4 = cm_5+m_5;
    CHECK(test4==NumberWithUnits(5.05,"m"));

    //Time-------------------------------
    NumberWithUnits test5 = hour_4+min_4;
    CHECK(test5==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test6 = sec_5+min_4;
    CHECK(test6==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test7 = 59.0+min_4;
    CHECK(test7==NumberWithUnits(1.05,"hour"));

    //Weight-------------------------------
    NumberWithUnits test8 = ton_4+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test10 = 970.0+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45+ILS_45;
    CHECK(test11==NumberWithUnits(58.513511351,"USD"));

    //Exption----------------------------
    CHECK_THROWS(USD_45+km_7);
    CHECK_THROWS(min_4+km_7);
    CHECK_THROWS(kg_50+km_7);
}


TEST_CASE("Stream Operators")
{
    //Dist-------------------------------
    NumberWithUnits test1 = km_7+m_5;
    CHECK(test1==NumberWithUnits(7.005,"km"));
    NumberWithUnits test2 = km_7+cm_5;
    CHECK(test2==NumberWithUnits(7.00005,"km"));
    NumberWithUnits test3 = cm_5+m_5;
    CHECK(test3==NumberWithUnits(5.05,"m"));
    NumberWithUnits test4 = cm_5+m_5;
    CHECK(test4==NumberWithUnits(5.05,"m"));

    //Time-------------------------------
    NumberWithUnits test5 = hour_4+min_4;
    CHECK(test5==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test6 = sec_5+min_4;
    CHECK(test6==NumberWithUnits(4.04,"hour"));
    NumberWithUnits test7 = 59.0+min_4;
    CHECK(test7==NumberWithUnits(1.05,"hour"));

    //Weight-------------------------------
    NumberWithUnits test8 = ton_4+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test10 = 970.0+kg_50;
    CHECK(test8==NumberWithUnits(4.05,"ton"));
    NumberWithUnits test11 = 3.0+kg_50;
    CHECK(test11==NumberWithUnits(53,"kg"));

    //Currency----------------------------
    NumberWithUnits test12 = USD_45+ILS_45;
    CHECK(test11==NumberWithUnits(58.513511351,"USD"));

    //Exption----------------------------
    CHECK_THROWS(USD_45+km_7);
    CHECK_THROWS(min_4+km_7);
    CHECK_THROWS(kg_50+km_7);
}
