/* 
 * File:   main.cpp
 * Author: Rajini Kanth
 *
 * Created on 22. tammikuuta 2013, 5:27
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
 * 
 */

// base class
class A {
protected:
    string name;
    double pay;
public:
    A();
    A(string n, double p);
    string getName(){
        return name;
    }
    double getPay() {
        return pay;
    }
    void setName(string n) {
        name = n;
    }
    void setPay(double p) {
        pay = p;
    }
    
    string toString(){
        stringstream stm;
        stm << name << ": " << pay ;
        
        return stm.str();
    }
    
    double grossPay(int hours){
        return pay * hours;
    }
};

// derived class
class B: public A {
private:
    bool salaried;
public:
    B(string n, double p, bool sal): A(n, p){
        salaried = sal;
    }
    
    bool getSalaried(){
        return salaried;
    }
    
    double grssPay(){
        return pay;
    }
};  



A::A() {
    name = "";
    pay = 0.0;
}

A::A(string n, double p):name(n), pay(p) { }


int main(int argc, char** argv) {
    
    A a("Rajini", 45.00);
    cout << a.getName()<<endl;
    cout << a.getPay()<<endl;
    cout << a.grossPay(50)<<endl;
    a.setName("Ravi");
    a.setPay(35.00);
    cout << a.grossPay(50);
    
        cout << a.getName()<<endl;
    cout << a.getPay()<<endl;
    cout << a.toString()<< endl;    

    
    B b("Sandhya", 9000.00, true);
    cout <<b.getName()<<endl;
    cout <<b.getPay()<<endl;
    cout <<b.getSalaried()<<endl;
    cout << b.grssPay();
    return 0;
}

