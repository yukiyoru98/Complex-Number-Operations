//
//  main.cpp
//  HW3
//
//  Created by Christine on 2018/3/16.
//  Copyright © 2018年 Christine. All rights reserved.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
    
    Complex a(0.6, 0.5); //0.6+0.5 i
    Complex b(0.4, 0.3); //0.4+0.3 i
    Complex c(0.7, 0.8);
    Complex d(1.4, 0.34);
    
    Complex arr[4]={a,b,c,d};
    
    for(int i=0; i<4; i++){
        arr[i].print();
    }
    
    /*Complex a(0.6, 0.5); //0.6+0.5 i
    
    Complex b(0.4, 0.3); //0.4+0.3 i
    
    Complex c;
    
    a = a.conjugate(); //0.6 - 0.5 i
    a.print();
    c = a.add(b); // a+b
    c.print();
    c = a.divide(b); // a 除以 b
    c.print();
    a.print(); //印出 0.6+0.5 i*/
    /*
    double a=0, b=0, c=0, d=0;
    cout << "x=a+bi\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << endl;
    Complex x(a,b);
    
    cout << "y=c+di\n";
    cout << "c=";
    cin >> c;
    cout << "d=";
    cin >> d;
    cout << endl;
    Complex y(c,d);
    
    Complex result;
    //addition
    cout << "ADD\n";
    result = x.add(y);
    result.print();
    //x.print();
    
    //multiplication
    cout << "\nMULTI\n";
    result = x.multiply(y);
    result.print();
    //x.print();
    
    //division
    cout << "\nDIV\n";
    result = x.divide(y);
    result.print();
    //x.print();
    
    //conjugation
    cout << "\nCONJ\n";
    result = x.conjugate();
    result.print();
    //x.print();
    */
    
    return 0;
}
