#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int marks=0;
string name;
void ict()
{
	
	char answer;
	int percentage;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*              ***WELCOME TO ICT QUIZ***               *!*!*!"<<endl;
    cout<<"\t\t\t!*!*!*                                                      *!*!*!"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tMonitor is a ______ device?"<<endl;
	cout<<"\t\t\ta) Input device"<<endl;	
	cout<<"\t\t\tb) Output device"<<endl;	
	cout<<"\t\t\tc) Storage device"<<endl;	
	cout<<"\t\t\td) Communication device"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')  
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else          
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\tFastest, most expensive and powerful type of computer?"<<endl;
	cout<<"\t\t\ta) Super computer"<<endl;	
	cout<<"\t\t\tb) Embedded computer"<<endl;	
	cout<<"\t\t\tc) Mainframe computer"<<endl;	
	cout<<"\t\t\td) Personal computer"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\tYour answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\tCorrect answer is 'a'."<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\tWhat abouts fourth generation of computer?"<<endl;
	cout<<"\t\t\ta) 1946 - 1958"<<endl;	
	cout<<"\t\t\tb) 1959 - 1964"<<endl;	
	cout<<"\t\t\tc) 1965 - 1970"<<endl;	
	cout<<"\t\t\td) 1971 - today"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tThe use of spoofed domain names to obtain personal information?"<<endl;
	cout<<"\t\t\ta) Cyber bullying"<<endl;	
	cout<<"\t\t\tb) Phishing"<<endl;	
	cout<<"\t\t\tc) Pharming"<<endl;	
	cout<<"\t\t\td) Dot con"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
	    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
	    marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    	cout<<"\t\t\t\t\t<---------------------------------------->"<<endl;
	}
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tA sequence of activities to be processed for getting desired output from a given input?"<<endl;
	cout<<"\t\t\ta) Algorithm"<<endl;	
	cout<<"\t\t\tb) Pseudocode"<<endl;	
	cout<<"\t\t\tc) Implementation phase"<<endl;	
	cout<<"\t\t\td) Problem solving phase"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
	    cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
	    marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
	}
	
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();  
    system("cls");  
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\tTotal marks:     5"<<endl;
	cout<<"\t\t\tObtained marks:  "<<marks<<endl;
	percentage=(marks*100)/5;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
    
}  

void pf()
{

	char answer;
	int percentage;
    cout<<"\t\t\t!*!*!*               ***WELCOME TO PF QUIZ***               *!*!*!"<<endl;
    cout<<"\n\n\t\t\tAnswers the following questions one by one."<<endl;
    cout<<"\n\t\t\t=> Question NO 1:-"<<endl;
	cout<<"\t\t\tTo store a value inside a computer _______ is used?"<<endl;
	cout<<"\t\t\ta) Variable"<<endl;	
	cout<<"\t\t\tb) Class"<<endl;	
	cout<<"\t\t\tc) Pointers"<<endl;	
	cout<<"\t\t\td) Structure"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 2:-"<<endl;
	cout<<"\t\t\tKeyword used in declaration of text type data?"<<endl;
	cout<<"\t\t\ta) int"<<endl;	
	cout<<"\t\t\tb) float"<<endl;	
	cout<<"\t\t\tc) double"<<endl;	
	cout<<"\t\t\td) char"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='d' or answer=='D')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'd'."<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 3:-"<<endl;
	cout<<"\t\t\t&& and || are _______ operators?"<<endl;
	cout<<"\t\t\ta) Arithmetic"<<endl;	
	cout<<"\t\t\tb) Relational"<<endl;	
	cout<<"\t\t\tc) Logical"<<endl;	
	cout<<"\t\t\td) Arithmetic assignment"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='c' or answer=='C')
	{
	cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
	marks++;
	}
	else
	{
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'c'."<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 4:-"<<endl;
	cout<<"\t\t\tAn if _______ exist without an else?"<<endl;
	cout<<"\t\t\ta) Cannot"<<endl;	
	cout<<"\t\t\tb) Can"<<endl;	
	cout<<"\t\t\tc) Before"<<endl;	
	cout<<"\t\t\td) After"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='b' or answer=='B')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
		marks++;
	}
	else
	{
    	cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'b'."<<endl;
    }
	cout<<"\n\n\t\t\t=> Question NO 5:-"<<endl;
	cout<<"\t\t\tAn array is a collection of variables of _______ type?"<<endl;
	cout<<"\t\t\ta) Similar"<<endl;	
	cout<<"\t\t\tb) Alternative"<<endl;	
	cout<<"\t\t\tc) Different"<<endl;	
	cout<<"\t\t\td) No"<<endl;
	cout<<"\t\t\tEnter your answer: ";
	cin>>answer;
	if(answer=='a' or answer=='A')
	{
		cout<<"\t\t\t\t\t\t  ***Congratulations***"<<endl;
	    marks++;
	}
	else
    {
		cout<<"\t\t\t\t\t\t   Your answer is wrong."<<endl;
    	cout<<"\t\t\t\t\t\t   Correct answer is 'a'."<<endl;
    }
    cout<<"\n\t\t\t\t\t ***Press enter to check your result***  "<<endl;
    getch();  
    system("cls");  
	cout<<"\t\t\t:::::             ***WELCOME TO RESULT MENU***               :::::"<<endl;
	cout<<"\t\t\tTotal marks:     5"<<endl;
	cout<<"\t\t\tObtained marks:  "<<marks<<endl;
	percentage=(marks*100)/5;
	cout<<"\t\t\tPercentage:      "<<percentage<<"%"<<endl;
}
void visit()
{
	system("cls");
    cout<<"\t\t\t!*!*!*     ***THANKS FOR VISITING ONLINE QUIZ SYSTEM***     *!*!*!"<<endl;
}

int main()  
{
	char press;
	system("cls");  
	cout<<"\t\t\t<*><*><*>**      ***WELCOME TO ONLINE QUIZ SYSTEM***      **<*><*><*>"<<endl;
	cout<<"\n\t\t\tEnter your Name:  ";   
    cin>>name;  
	do{              
	int option;     
	system("cls");
	 cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\t*****               ***BS SOFTWARE ENGINEERING***                *****"<<endl;
    cout<<"\t\t\t+++++++++++                                                 ++++++++++"<<endl;
    cout<<"\t\t\tPress 1 for Introduction to Information and Communication Technology"<<endl;
    cout<<"\t\t\tPress 2 for Programming Fundamental"<<endl;
    cout<<"\n\t\t\tSelect:  ";   
	cin>>option;   
	system("cls");
	switch(option)   
	{
		case 1:
			{
				ict();
				break;
			}
		case 2:
			{
				pf();
			    break;
			}
	   
			{
				cout<<"\n\n\n\t\t\tYou enter invalid number.....";
				break;
			}	
		}           
			cout<<"\n\t\t\tDo you want to continue(Y/N)??  ";
			cin>>press;
	}while(press=='y'or press=='Y');   
	if(press=='n'or press=='N')
	{
		visit();  
	}
}





 

