#include <iostream>
using namespace std ;

class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation::get()
{                                            // inline function// 
    cout<<"Enter first value: ";
    cin>>a;                                   // enter values of a and b // 
    cout<<"Enter second value: ";
    cin>>b;
}

inline void operation::sum()                        // sum operation //
{
    add=a+b;
    cout<<"Addition of two Numbers: "<< add <<"\n";
}

inline void operation::difference()                      // subtraction operation //
{
    sub=a-b;
    cout<<"Difference of two Numbers: "<< sub <<"\n";
}

inline void operation::product()                            // product operation // 
{
    mul=a*b;
    cout<<"Product of two Numbers: "<< mul <<"\n";
}

inline void operation::division()                             // division operation //
{
    div=a/b;
    cout<<"Division of two Numbers: "<< div <<"\n";
}


int main()
{
    cout<<"Program using Inline Function\n";                 // various operations mentioned here //
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}
