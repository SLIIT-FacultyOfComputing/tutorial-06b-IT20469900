#include "Student.h"
#include <iostream>
#include<string.h>
using namespace std;
// Assign studentId and name
void Student:: assignDetails(int sid ,char sname[])
{
  studentId=sid;
  strcpy(name,sname);
}

// Display StudentId
 void Student:: display()
 {
  cout<<"Student ID" << studentId<<endl;
    cout<<"Student Name" << name <<endl;

}