#include <iostream>
using namespace std;

class A{
public:
void funA(){
cout<<"This is Class A"<<endl;
}
};

class B:virtual public A{
public:
void funB(){
cout<<"This is Class B"<<endl;
}
};

class C:virtual public A{
public:
void funC(){
cout<<"This is Class C"<<endl;
}
};

class D:virtual public A, public B, public C{
public:
void funD(){
cout<<"This is Class D"<<endl;
}
};

int main(){
A a;
B b;
C c;
D d;

cout<<"class A: "<<endl;
a.funA();
cout<<endl;

cout<<"class B"<<endl;
b.funA();
b.funB();
cout<<endl;

cout<<"class C"<<endl;
c.funA();
c.funC();
cout<<endl;

cout<<"Class D: "<<endl;
d.funA();
d.funB();
d.funC();
d.funD();
}
