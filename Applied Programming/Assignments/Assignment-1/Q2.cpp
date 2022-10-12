//2. Write a program that finds the GPA?
#include<iostream>
#include<string>
using namespace std;
int main() {
	char grade[2];
	double gpa=0.0;
	cout<<"Enter your Grade= ";
	cin>>grade;
	switch(grade) 
	{
		case'A+':
		  case'a+':
		  gpa=4.0;
		cout<<"your GPA is "<<gpa;
		break;
		case'A':
		  case'a':
		  gpa=4.0;
		cout<<"your GPA is "<<gpa;
		break;
		case'A-':
		  case'a-':
		  gpa=3.67;
		cout<<"your GPA is "<<gpa;
		break;
		case'B+':
		    case'b+':
		    gpa=3.33;
		cout<<"your GPA is "<<gpa;
		break;
		case'B':
		    case'b':
		    gpa=3.0;
		cout<<"your GPA is "<<gpa;
		break;
		case'B-':
		    case'b-':
		    gpa=2.67;
		cout<<"your GPA is "<<gpa;
		break;
		case'C+':
		     case'c+':
		     gpa=2.33;
		cout<<"your GPA is "<<gpa;
		break;
		case'C+':
		     case'c+':
		     gpa=2.33;
		cout<<"your GPA is "<<gpa;
		break;
		case'C':
		     case'c':
		     gpa=2.0;
		cout<<"your GPA is "<<gpa;
		break;
		case'F':
		       case'f':
		       gpa=0.0;
		cout<<"your GPA is "<<gpa;
		break;
		default:
		    cout<<"invalid grade entered";
		break;
	}
	return 0;
}

