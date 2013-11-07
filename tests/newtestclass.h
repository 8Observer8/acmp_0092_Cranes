/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 7, 2013, 4:31:54 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testCranes_01);
    CPPUNIT_TEST(testCranes_02);
    CPPUNIT_TEST(testCranes_03);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testCranes_01();
    void testCranes_02();
    void testCranes_03();
};

#endif	/* NEWTESTCLASS_H */

