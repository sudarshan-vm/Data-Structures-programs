#include"student.h"
int main()
{
	int i,n;
	student s;
	cout<<"Enter the number of students: ";
	cin>>n;
	cout<<"Enter the details of "<<n<<"students\n"<<endl;
	while(n--)
	{

	
		
	
	s.read();
	//s[i].calc();
	s.besttwo();
	 s.display();
	}


	return 0;
}
