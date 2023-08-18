#include <iostream>
using namespace std;

int myMarks = 99;
float myPercentage = 50;
char myGPA = 'A';
string mySentence = "This is a Test Sentence";
int yourint;
float yourPerc;
char yourchar;
string yourstring;

int main(){

    /*cout<<"My marks were " << myMarks <<" During ese \n";
    cout<<"My percentage is " << myPercentage <<" %\n";
    cout<<"My GPA was " << myGPA <<"\n";
    cout<<"Size of that character is " << sizeof(myGPA) <<"\n";
    cout<<"The string is = "<<mySentence <<"\n";
    cout<<"Size of that string is " << sizeof(mySentence) <<"\n";*/
    cout<<"Name an integer value: ";
    cin>>yourint;
    cout<<"What was the percentage?: ";
    cin>>yourPerc;
    cout<<"Name a character: ";
    cin>>yourchar;
    cout<<"That Character is "<<yourchar;
    cout<<"Write a string: ";
    cin>>yourstring;
    cout<<"\n the integer value is "<<yourint<<", the percentage was "<<yourPerc <<", the character was"<<yourchar<<" and that string was"<<yourstring;    
    return 0;
}