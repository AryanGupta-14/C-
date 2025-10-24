#include<iostream>



using namespace std;

int main(){
    int a=4, b=5;
    cout<<"operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;    
    cout<<"the value of a % b is "<<a%b<<endl; 
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a -- is "<<a--<<endl;  
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
                                            
    //comparison operators
   cout<< "Following are the types of comparison operators in c++"<<endl;
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;

// LOgical operators
cout<<"Following are the logical operator in C++"<<endl;
cout<<"the value of this logical operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b)  || (a<b))<<endl;
cout<<"the value of this logical not operator (!(a==b)) is:"<<(!a==b)<<endl;

}