//Amna faisal
//sap id:82583
#include<iostream>
using namespace std;
int main()
{
   int marks=0;
    int age=0;
    cout<<"Enter marks: ";
    cin>>marks;
cout<<"Enter age: ";
    cin>>age;   
    if (marks>=60)
    {
        if (age>=18)
        {
            cout<<"You are eligible for admission";
        }
        else
        {
            cout<<"You are not eligible for admission";
        }
    }
    else
    {
        cout<<"You are not eligible for admission";
    }
    return 0;
}
