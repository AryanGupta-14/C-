 #include <iostream>

 using namespace std;

 int c = 45;

 int main(){

    // **********build in data types*********
     // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // cin>>b;
    // c = a+b;
    // cout<<" the sum is "<<c<<endl;
    // cout<<"the global c is "<<::c; 


    //*******Float, double, and long doubble literals******** 
   // float d=34.4f;
   // long double e=34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
     //cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
     //cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
     //cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;  
     //cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e; 

    // ********* Reference variables*******

    // rohan-----> monty-----> rohu -----> dangerous coder
    //float x = 455;
    //float & y = x;
    //cout<<x<<endl;
    //cout<<y<<endl; 

    // *******Type Casting **********
    int a= 45;
    float b= 45.56;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<<float(a)<<endl;

    cout<<"the value of b is "<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    int c = int(b);
      

    cout<<"the expression is "<<a + b<<endl;
    cout<<"the expression is "<<a +  int(b)<<endl;
    cout<<"the expression is "<<a +  (int)b<<endl; 


    return 0;
 }
 