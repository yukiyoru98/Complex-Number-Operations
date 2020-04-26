#include "Complex.h"
#include <iostream>

using namespace std;

//constructor
Complex::Complex(double a, double b){
    
    real = a;
    imag = b;
    
}

double Complex::getReal(){
    return real;
}

double Complex::getImag(){
    return imag;
}

//addition
Complex Complex::add(Complex y){
    
    Complex result;
    result.real = real + y.real;
    result.imag = imag + y.imag;
    return result;
}

//multiplication
Complex Complex::multiply(Complex y){
    
    Complex result;
    result.real = real * y.real - imag * y.imag;
    result.imag = real * y.imag + imag * y.real;
    return result;
}

//division
Complex Complex::divide(Complex y){
    
    Complex result;
    Complex temp;//same as x
    Complex conjY = y.conjugate();
    temp.real = real;
    temp.imag = imag;
    
    double denominator;
    denominator = (y.multiply(conjY)).real;//the denominator is y times its conjugation
    result.real = temp.multiply(conjY).real / denominator;
    result.imag = temp.multiply(conjY).imag / denominator;
    return result;
}

//conjugation
Complex Complex::conjugate(){
    
    Complex result(real, -imag);
    return result;
    
}

//print complex number
void Complex::print(){
    
    if(real != 0){
        cout << real;
    }
    
    if(imag > 0){
        cout << '+';
        if(imag != 1){
            cout << imag;
        }
    }
    else if(imag < 0){
        
        if(imag != -1){
            cout << imag;
        }
        else{
            cout << '-';
        }
    }
    
    if(imag != 0){
        cout << 'i' ;
    }
    cout << endl;
    
}



