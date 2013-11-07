/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 7, 2013, 4:31:54 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

#include <string>
using namespace std;

struct Children {
    int Petya;
    int Katya;
    int Serezha;
};

Children cranes(int number);

void newtestclass::testCranes_01() {
    int number = 6;
    Children c = cranes(number);
    int resultOfPetya = c.Petya;
    int expectedOfPetya = 1;
    CPPUNIT_ASSERT_EQUAL(expectedOfPetya, resultOfPetya);

    int resultOfKatya = c.Katya;
    int expectedOfKatya = 4;
    CPPUNIT_ASSERT_EQUAL(expectedOfKatya, resultOfKatya);

    int resultOfSerezha = c.Serezha;
    int expectedOfSerezha = 1;
    CPPUNIT_ASSERT_EQUAL(expectedOfSerezha, resultOfSerezha);
}

void newtestclass::testCranes_02() {
    int number = 24;
    Children c = cranes(number);
    int resultOfPetya = c.Petya;
    int expectedOfPetya = 4;
    CPPUNIT_ASSERT_EQUAL(expectedOfPetya, resultOfPetya);

    int resultOfKatya = c.Katya;
    int expectedOfKatya = 16;
    CPPUNIT_ASSERT_EQUAL(expectedOfKatya, resultOfKatya);

    int resultOfSerezha = c.Serezha;
    int expectedOfSerezha = 4;
    CPPUNIT_ASSERT_EQUAL(expectedOfSerezha, resultOfSerezha);
}

void newtestclass::testCranes_03() {
    int number = 60;
    Children c = cranes(number);
    int resultOfPetya = c.Petya;
    int expectedOfPetya = 10;
    CPPUNIT_ASSERT_EQUAL(expectedOfPetya, resultOfPetya);

    int resultOfKatya = c.Katya;
    int expectedOfKatya = 40;
    CPPUNIT_ASSERT_EQUAL(expectedOfKatya, resultOfKatya);

    int resultOfSerezha = c.Serezha;
    int expectedOfSerezha = 10;
    CPPUNIT_ASSERT_EQUAL(expectedOfSerezha, resultOfSerezha);
}
