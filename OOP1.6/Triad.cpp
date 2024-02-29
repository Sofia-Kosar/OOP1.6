#include "Triad.h"
#include <iostream>

using namespace std;

void Date::Triad::Init(int firstValue, int secondValue, int thirdValue) {
    setFirst(firstValue);
    setSecond(secondValue);
    setThird(thirdValue);
}

void Date::Triad::Display() const {
    cout << first << "." << second << "." << third << endl;
}

void Date::Triad::Read() {
    int firstValue;
    int secondValue;
    int thirdValue;
    cout << "Enter triad " << endl << endl;
    cout << "first =  "; cin >> firstValue;
    cout << "second =  "; cin >> secondValue;
    cout << "third =  "; cin >> thirdValue;
    Init(firstValue, secondValue, thirdValue);
}

bool Date::Triad::Le(const Triad& t) const {
    if (first != t.first) return first < t.first;
    if (second != t.second) return second < t.second;
    return third < t.third;
}

bool Date::Triad::Leq(const Triad& t) const {
    return Le(t) || Eq(t);
}

bool Date::Triad::Eq(const Triad& t) const {
    return first == t.first && second == t.second && third == t.third;
}

bool Date::Triad::Ne(const Triad& t) const {
    return !Eq(t);
}

bool Date::Triad::Gt(const Triad& t) const {
    return !Leq(t);
}

bool Date::Triad::Gtq(const Triad& t) const {
    return !Le(t);
}

string Date::Triad::toString() const {
    stringstream sout;
    sout << first << "." << second << "." << third;
    return sout.str();
}

double Date::Triad::check() {
    return first > second;
}

void Date::Init(const Triad& tValue) {
    setTriad(tValue);
}

void Date::Display() const {
    t.Display();
}

void Date::Read() {
    Triad tValue;
    tValue.Read();
    Init(tValue);
}

bool Date::Le(const Date& d) const {
    return t.Le(d.getTriad());
}

bool Date::Leq(const Date& d) const {
    return t.Leq(d.getTriad());
}

bool Date::Eq(const Date& d) const {
    return t.Eq(d.getTriad());
}

bool Date::Ne(const Date& d) const {
    return t.Ne(d.getTriad());
}

bool Date::Gt(const Date& d) const {
    return t.Gt(d.getTriad());
}

bool Date::Gtq(const Date& d) const {
    return t.Gtq(d.getTriad());
}

string Date::toString() const {
    return t.toString();
}
