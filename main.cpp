#include "Number.h"
#include <iostream>
#include "SimplePoint2D.h"
#include "Segment2D.h"
#include "HalfSegment2D.h"
#include "AttributedHalfSegment2D.h"
using namespace std;


int main (void)
{
    std::cout << "Compiled" << std::endl;

    Number num1;
    std::cout << "Enter a number (Decimal Form): " << std::endl;
    std::cin >> num1;

    Number num2;
    std::cout << "Enter a number (Decimal Form): " << std::endl;
    std::cin >> num2;

    Number sum = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << sum << std::endl;

    Number diff1 = num1 - num2;
    Number diff2 = num2 - num1;
    std::cout << num1 << " - " << num2 << " = " << diff1 << std::endl;
    std::cout << num2 << " - " << num1 << " = " << diff2 << std::endl;

    Number product = num1 * num2;
    std::cout << num1 << " * " << num2 << " = " << product << std::endl;

    Number quotient1 = num1 / num2;
    Number quotient2 = num2 / num1;
    std::cout << num1 << " / " << num2 << " = " << quotient1 << std::endl;
    std::cout << num2 << " / " << num1 << " = " << quotient2 << " (This value might not be correct)" << std::endl;

    Number squareRoot = sqrt(product);
    std::cout << "sqrt( " << num1 << " * " << num2 << " ) = " << squareRoot << std::endl;

    // Testing SimplePoint2D

    // Number objects for testing
    Number one = 1.0;
    Number two = 2.0;
    Number three = 3.0;

    // Testing Constructors
    SimplePoint2D pointA;
    SimplePoint2D pointB(one,two);
    SimplePoint2D pointC(pointB);
    SimplePoint2D pointD(one, one);
    SimplePoint2D pointE(two, two);
    SimplePoint2D pointF(two, one);

    SimplePoint2D pointG(three, three);

    cout << "~ SimplePoint2D Tests\n\n-> Default Constructor [pointA]: " << pointA.x << ", " << pointA.y <<
         "\n-> Preset Value Constructor [pointB]: " << pointB.x << ", " << pointB.y
         << "\n-> Constructing from previous SimplePoint2D [pointC created from pointB]: " << pointC.x << ", " << pointC.y << endl;

    // Testing Reassignment from Point to Point
    pointA = pointB;
    cout << "\nAssignment Operator Test [pointA = pointB]: pointA = " << pointA.x << ", " << pointA.y <<
         " | pointB = " << pointB.x << ", " << pointB.y << endl;
    cout << "-> After assigning point A equal to point B, comparison should yield true:" << endl;
    if(pointA == pointB)
        cout << "True, previous points are the same\n" << endl;
    else
        cout << "False, equality operator or assignment operator are erroneous...\n" << endl;

    // Testing Equality Operators
    cout << "Equality Operator Tests: pointA = " << pointA.x << ", " << pointA.y <<
         " | pointB = " << pointB.x << ", " << pointB.y << " | pointC = " << pointC.x << ", " <<
         pointC.y << " | pointD = " << pointD.x << ", " << pointD.y << "\n" << endl;

    cout << "-> pointC < pointD: " << endl;
    if (pointC < pointD)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;
    cout << "-> pointC <= pointC: " << endl;
    if (pointC <= pointC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> pointC > pointD: " << endl;
    if (pointC > pointD)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> pointD >= pointC: " << endl;
    if (pointC >= pointD)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "All tests ran for this data structure...\n\n" << endl;

    // Testing Segment2D

    // Segment objects for testing
    Segment2D segA(pointD, pointB);
    Segment2D segB(pointF, pointE);
    Segment2D segC(pointD, pointE);
    Segment2D segD(segA);

    Segment2D segLongC(pointD, pointG);

    // Testing Constructors
    cout << "~ Segment2D Tests\n\n-> Preset Value Constructor [segA]: L (" << segA.leftEndPoint.x << ", " << segA.leftEndPoint.y <<
         ") ; R (" << segA.rightEndPoint.x << ", " << segA.rightEndPoint.y << ")"
         << "\n-> Constructing from previous Segment2D [segD created from segA]: L (" << segD.leftEndPoint.x << ", " << segD.leftEndPoint.y <<
         ") ; R (" << segD.rightEndPoint.x << ", " << segD.rightEndPoint.y << ")" << endl;

    // Testing Reassignment from Point to Point
    segD = segC;
    cout << "\nAssignment Operator Test [segD = segC]: segD = L (" << segD.leftEndPoint.x << ", " << segD.leftEndPoint.y <<
         ") ; R (" << segD.rightEndPoint.x << ", " << segD.rightEndPoint.y << ")  |  segC = L (" << segC.leftEndPoint.x << ", " << segC.leftEndPoint.y <<
         ") ; R (" << segC.rightEndPoint.x << ", " << segC.rightEndPoint.y << ")" << "\n" << endl;
    cout << "-> After assigning segD = segC, comparison should yield true:" << endl;
    if (segD == segC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;

    // Testing Equality Operators
    cout << "Equality Operator Tests: segA = L (" << segA.leftEndPoint.x << ", " << segA.leftEndPoint.y <<
         ") ; R (" << segA.rightEndPoint.x << ", " << segA.rightEndPoint.y << ")  |  segB = L (" << segB.leftEndPoint.x << ", " << segB.leftEndPoint.y <<
         ") ; R (" << segB.rightEndPoint.x << ", " << segB.rightEndPoint.y << ")  |  segC = L (" << segC.leftEndPoint.x << ", " << segC.leftEndPoint.y <<
         ") ; R (" << segC.rightEndPoint.x << ", " << segC.rightEndPoint.y << ")  |  segD = L (" << segD.leftEndPoint.x << ", " << segD.leftEndPoint.y <<
         ") ; R (" << segD.rightEndPoint.x << ", " << segD.rightEndPoint.y << ")" << "\n" << endl;

    cout << "-> segC < segA: " << endl;
    if (segC < segA)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;
    cout << "-> segC <= segC: " << endl;
    if (segC <= segC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> segB > segA: " << endl;
    if (segB > segA)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> segA >= segB: " << endl;
    if (segA >= segB)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;
    cout << "All tests ran for this data structure...\n\n" << endl;

    // Testing HalfSegment2D

    // HalfSegment objects for testing
    HalfSegment2D hsegA(segA, true);
    HalfSegment2D hsegB(segB, true);
    HalfSegment2D hsegC(segC, true);
    HalfSegment2D hsegD(hsegA);

    HalfSegment2D hsegFlipC(segC, false);
    HalfSegment2D hsegLongC(segLongC, true);

    // Testing Constructors
    cout << "~ HalfSegment2D Tests\n\n-> Preset Value Constructor [hsegA]: L (" << hsegA.s.leftEndPoint.x << ", " << hsegA.s.leftEndPoint.y <<
         ") ; R (" << hsegA.s.rightEndPoint.x << ", " << hsegA.s.rightEndPoint.y << ") ; Left-Dom = " << hsegA.isDominatingPointLeft
         << "\n-> Constructing from previous HalfSegment2D [hsegD created from hsegA]: L (" << hsegD.s.leftEndPoint.x << ", " << hsegD.s.leftEndPoint.y <<
         ") ; R (" << hsegD.s.rightEndPoint.x << ", " << hsegD.s.rightEndPoint.y << ") ; Left-Dom = " << hsegA.isDominatingPointLeft << endl;

    // Testing Reassignment from Point to Point
    hsegD = hsegC;
    cout << "\nAssignment Operator Test [hsegD = hsegC]: hsegD = L (" << hsegD.s.leftEndPoint.x << ", " << hsegD.s.leftEndPoint.y <<
         ") ; R (" << hsegD.s.rightEndPoint.x << ", " << hsegD.s.rightEndPoint.y << ") ; Left-Dom = " << hsegD.isDominatingPointLeft << "  |  hsegC = L (" << hsegC.s.leftEndPoint.x << ", " << hsegC.s.leftEndPoint.y <<
         ") ; R (" << hsegC.s.rightEndPoint.x << ", " << hsegC.s.rightEndPoint.y << ") ; Left-Dom = " << hsegC.isDominatingPointLeft << "\n" << endl;
    cout << "-> After assigning hsegD = hsegC, comparison should yield true:" << endl;
    if (hsegD == hsegC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;

    // Testing Equality Operators
    cout << "Equality Operator Tests: hsegA = L (" << hsegA.s.leftEndPoint.x << ", " << hsegA.s.leftEndPoint.y <<
         ") ; R (" << hsegA.s.rightEndPoint.x << ", " << hsegA.s.rightEndPoint.y << ") ; Left-Dom = " << hsegA.isDominatingPointLeft << "  |  hsegB = L (" << hsegB.s.leftEndPoint.x << ", " << hsegB.s.leftEndPoint.y <<
         ") ; R (" << hsegB.s.rightEndPoint.x << ", " << hsegB.s.rightEndPoint.y << ") ; Left-Dom = " << hsegB.isDominatingPointLeft << "  |  hsegC = L (" << hsegC.s.leftEndPoint.x << ", " << hsegC.s.leftEndPoint.y <<
         ") ; R (" << hsegC.s.rightEndPoint.x << ", " << hsegC.s.rightEndPoint.y << ") ; Left-Dom = " << hsegC.isDominatingPointLeft << "  |  hsegD = L (" << hsegD.s.leftEndPoint.x << ", " << hsegD.s.leftEndPoint.y <<
         ") ; R (" << hsegD.s.rightEndPoint.x << ", " << hsegD.s.rightEndPoint.y << ") ; Left-Dom = " << hsegD.isDominatingPointLeft << "  |  hsegFlipC = L (" << hsegFlipC.s.leftEndPoint.x << ", " << hsegFlipC.s.leftEndPoint.y <<
         ") ; R (" << hsegFlipC.s.rightEndPoint.x << ", " << hsegFlipC.s.rightEndPoint.y << ") ; Left-Dom = " << hsegFlipC.isDominatingPointLeft << "  |  hsegLongC = L (" << hsegLongC.s.leftEndPoint.x << ", " << hsegLongC.s.leftEndPoint.y <<
         ") ; R (" << hsegLongC.s.rightEndPoint.x << ", " << hsegLongC.s.rightEndPoint.y << ") ; Left-Dom = " << hsegLongC.isDominatingPointLeft << "\n" << endl;

    // IMPORTANT + RELEVANT LESS THAN OPERATOR W/ CASES

    // Case 1: differ on Points of Segment
    cout << "-> hsegA < hsegB: " << endl;
    if (hsegA < hsegB)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    // Case 2a: differ on Dominating Point
    cout << "-> hsegA < hsegFlipC: " << endl;
    if (hsegA < hsegFlipC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    // Case 2b: differ in rotation
    cout << "-> hsegA < hsegC: " << endl;
    if (hsegA < hsegC)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;
    // Case 3: differ in length
    cout << "-> hsegA < hsegLongC: " << endl;
    if (hsegA < hsegLongC)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;

    // other equality operators
    cout << "-> hsegD <= hsegA: " << endl;
    if (hsegD <= hsegA)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> hsegB > hsegA: " << endl;
    if (hsegB > hsegA)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> hsegA >= hsegB: " << endl;
    if (hsegA >= hsegB)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;

    cout << "All tests ran for this data structure...\n\n" << endl;

    // Testing AttributedHalfSegment2D --- NOTE: does not provide extensive < (less than) testing because it is the same as HalfSegment tests

    // AttributedHalfSegment objects for testing
    AttributedHalfSegment2D ahsegA(hsegA, true);
    AttributedHalfSegment2D ahsegB(hsegB, true);
    AttributedHalfSegment2D ahsegC(hsegC, true);
    AttributedHalfSegment2D ahsegD(ahsegA);

    // Testing Constructors
    cout << "~ HalfSegment2D Tests\n\n-> Preset Value Constructor [ahsegA]: L (" << ahsegA.hs.s.leftEndPoint.x << ", " << ahsegA.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegA.hs.s.rightEndPoint.x << ", " << ahsegA.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegA.above
         << "\n-> Constructing from previous AttributedHalfSegment2D [ahsegD created from ahsegA]: L (" << ahsegD.hs.s.leftEndPoint.x << ", " << ahsegD.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegD.hs.s.rightEndPoint.x << ", " << ahsegD.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegA.above << endl;

    // Testing Reassignment from Point to Point
    ahsegD = ahsegC;
    cout << "\nAssignment Operator Test [ahsegD = ahsegC]: hsegD = L (" << ahsegD.hs.s.leftEndPoint.x << ", " << ahsegD.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegD.hs.s.rightEndPoint.x << ", " << ahsegD.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegD.above << "  |  ahsegC = L (" << ahsegC.hs.s.leftEndPoint.x << ", " << ahsegC.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegC.hs.s.rightEndPoint.x << ", " << ahsegC.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegC.above << "\n" << endl;
    cout << "-> After assigning ahsegD = ahsegC, comparison should yield true:" << endl;
    if (ahsegD == ahsegC)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;

    // Testing Equality Operators
    cout << "Equality Operator Tests: ahsegA = L (" << ahsegA.hs.s.leftEndPoint.x << ", " << ahsegA.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegA.hs.s.rightEndPoint.x << ", " << ahsegA.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegA.above << "  |  ahsegB = L (" << ahsegB.hs.s.leftEndPoint.x << ", " << ahsegB.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegB.hs.s.rightEndPoint.x << ", " << ahsegB.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegB.above << "  |  ahsegC = L (" << ahsegC.hs.s.leftEndPoint.x << ", " << ahsegC.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegC.hs.s.rightEndPoint.x << ", " << ahsegC.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegC.above << "  |  ahsegD = L (" << ahsegD.hs.s.leftEndPoint.x << ", " << ahsegD.hs.s.leftEndPoint.y <<
         ") ; R (" << ahsegD.hs.s.rightEndPoint.x << ", " << ahsegD.hs.s.rightEndPoint.y << ") ; Is-Above = " << ahsegD.above << "\n" << endl;

    cout << "-> ahsegA < ahsegB: " << endl;
    if (ahsegA < ahsegB)
        cout << "True [correct]\n" << endl;
    else
        cout << "-> ahsegD <= ahsegA: " << endl;
    if (ahsegD <= ahsegA)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> ahsegB > ahsegA: " << endl;
    if (ahsegB > ahsegA)
        cout << "True [correct]\n" << endl;
    else
        cout << "False [incorrect]\n" << endl;
    cout << "-> ahsegA >= ahsegB: " << endl;
    if (ahsegA >= ahsegB)
        cout << "True [incorrect]\n" << endl;
    else
        cout << "False [correct]\n" << endl;

    cout << "All tests ran for this data structure... oh wow! I'm done. Goodnight moon :)\n\n" << endl;

    return 0;
}