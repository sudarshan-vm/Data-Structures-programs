#include"student.h"


void student::read()
{
	cout<<"Enter the name:"<<endl;
	cin>>name;
	cout<<"Enter the marks in 3 tests: \n"<<endl;
	cin>>t1>>t2>>t3;
	
}
int student::roll;
void student::besttwo()
{
	int min,temp;
	int m1,m2;
	if(t1<t2&&t1<t3)
	{
	m1=t2;
 	m2=t3;
	}

	if(t2<t3&&t3<t1)
	{
	m1=t1;
 	m2=t3;
	}

	if(t3<t2&&t3<t2)
	{
	m1=t2;
 	m2=t1;
	}
	calc(m1,m2);

	

}

void student::calc(int m1,int m2)
{
	float average;
	
	average=(float)(m1+m2)/2;
	avg=average;

}

void student::display()
{
	usn=roll++;
	cout<<"STUDENT DETAILS: "
	cout<<"Roll no.: "<<usn<<"\n"<<"Name: "<<name<<endl;
	cout<<"Average marks best two tests is : "<<avg<<endl;


}
