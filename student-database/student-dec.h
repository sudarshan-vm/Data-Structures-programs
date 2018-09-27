#include<iostream>
#ifndef STUDENT_h

#define STUDENT_h
using namespace std;
class student{
	static int roll;
	char name[50];
	int t1,t2,t3,usn;
	float avg;	
	void calc(int ,int);	
public:
	student() {
		roll=1;	
	}	
	void read();
	void besttwo();
	
	void display();	
	
};
#endif

