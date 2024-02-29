#pragma once
#include <string>
#include <sstream>

using namespace std;

class Date {
public:
    class Triad {
    private:
        int first;
        int second;
        int third;

    public:
        Triad() : first(0), second(0), third(0) {}
   
        int getFirst() const { return first; }
        void setFirst(int value) { first = value; }
        int getSecond() const { return second; }
        void setSecond(int value) { second = value; }
        int getThird() const { return third; }
        void setThird(int value) { third = value; }

        void Init(int firstValue, int secondValue, int thirdValue);
        void Display() const;
        void Read();
        bool Le(const Triad& t) const;
        bool Eq(const Triad& t) const;
        bool Gt(const Triad& t) const;
        bool Ne(const Triad& t) const;
        bool Leq(const Triad& t) const;
        bool Gtq(const Triad& t) const;
        string toString() const;
        double check();
    };

    Triad t;

public:
    Triad getTriad() const { return t; }
    void setTriad(const Triad& tValue) { t = tValue; }

    void Init(const Triad& t);
    void Display() const;
    void Read();
    bool Le(const Date& d) const;
    bool Eq(const Date& d) const;
    bool Gt(const Date& d) const;
    bool Ne(const Date& d) const;
    bool Leq(const Date& d) const;
    bool Gtq(const Date& d) const;
    string toString() const;
};
