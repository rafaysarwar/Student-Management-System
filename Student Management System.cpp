#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;


class namedisplay
{
private:

public:
	void slow(string no);
	void projected_by();
};




bool check = true;
struct node    //structure of node //
{
	char name[20];
	char discipline[20];
	int rollNo;
	char section;
	node *next;
 
}*head,*lastptr;

void add()    //Adds record of student//
{
	node *p;
 	p=new node;
	cout<<"Enter name of student:"<<endl;
	gets(p->name);
	fflush(stdin);
	cout<<"Enter discipline of student:"<<endl;
	gets(p->discipline);
	fflush(stdin);
	cout<<"Enter Roll Number of student:"<<endl;
	cin>>p->rollNo;
	fflush(stdin);
	cout<<"Enter section of student:"<<endl;
	cin>>p->section;
	fflush(stdin);
	p->next=NULL;

	if(check)
	{
		head = p;
		lastptr = p;
		check = false;
	}
	else
	{
		lastptr->next=p;
		lastptr=p;
	}
	cout<<endl<<"Recored Entered";
	getch();
}

void modify()   //modifies record of student//
{
	node *ptr;
	node *prev=NULL;
	node *current=NULL;
	int roll_no;
	cout<<"Enter Roll Number to search:"<<endl;
	cin>>roll_no;
	prev=head;
	current=head;
	while(current->rollNo!=roll_no)
	{
	prev=current;
	current=current->next;
	}
	ptr=new node;
	fflush(stdin);
	cout<<"Enter name of student:"<<endl;
	gets(ptr->name);
	fflush(stdin);
	cout<<"Enter discipline of student:"<<endl;
	gets(ptr->discipline);
	fflush(stdin);
	cout<<"Enter Roll Number of student:"<<endl;
	cin>>ptr->rollNo;
	fflush(stdin);
	cout<<"Enter section of student:"<<endl;
	cin>>ptr->section;
	fflush(stdin);
	prev->next=ptr;
	ptr->next=current->next;
	current->next=NULL;
	delete current;
	cout<<endl<<"Recored Modified";
	getch();
}

void search()   //searches record of student//
{
	node *prev=NULL;
	node *current=NULL;
	int roll_no;
	cout<<"Enter Roll Number to search:"<<endl;
	cin>>roll_no;
	prev=head;
	current=head;
	while(current->rollNo!=roll_no)
	{
	prev=current;
	current=current->next;
	}
	cout<<"\nname: ";
	puts(current->name);
	cout<<"\nRoll No:";
	cout<<current->rollNo;
	cout<<"\nDiscipline:";
	puts(current->discipline);
	cout<<"\nSection:";
	cout<<current->section;
	getch();
}

void del()    //deletes record of a student//
{
	node *ptr=NULL;
	node *prev=NULL;
	node *current=NULL;
	int roll_no;
	cout<<"Enter Roll Number to Delete:"<<endl;
	cin>>roll_no;
	prev=head;
	current=head;
	while(current->rollNo!=roll_no)
	{
	prev=current;
	current=current->next;
	}
	prev->next = current->next;
	current->next=NULL;
	delete current;
	cout<<endl<<"Recored Deleted";
	getch();
}

int main()
{   

	
	namedisplay n;
	n.projected_by();
	string userName1,userPassword1;
	int loginAttempt = 0;
	while (loginAttempt < 5)
	{
		{
			cout << "\n\n\tPlease enter your user name: ";
			cin >> userName1;
			cout << "\n\tPlease enter your user password: ";
			cin >> userPassword1;

			if (userName1 == "admin" && userPassword1 == "admin123")
			{
				system("cls");
				cout << "\n\n\t\t\t\t\t Welcome Admin! \n\n";
				break;
			}
			else if (userName1 == "Noumanali" && userPassword1 == "nomi123")
			{
				system("cls");
				cout << "\n\n\t\t\t\t\t Welcome Nouman Ali !\n\n";
				break;
			}
			else
			{
				cout << "Invalid login attempt. Please try again.\n" << '\n';
				loginAttempt++;
			}
		}
		if (loginAttempt == 5)
		{
			cout << "\n\n\t\t\tToo many login attempts! The program will now terminate. \n\n\n\n" << endl;
			system("pause");
			return 0;
		}

	}
	cout << "\n\n\n\t\t\t\t\tThank you for logging in .!!!\n\n\n\n\n\n\n";
	system("pause");
	system("cls");



	
	char x;
	
	cout<<"\n\nPress Any Key To Continue . . . ."<<endl;
	getch();
	do
	{
		system("cls");
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**********************************";
		cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t   STUDENT RECORD MANAGEMENT SYSTEM";
		cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t**********************************";
		cout<<"\n\n\n\n\t\t\t\t\t1--->Press '1' to add New record:"<<endl;
		cout<<"\n\n\t\t\t\t\t2--->Press '2' to search a record:"<<endl;
		cout<<"\n\n\t\t\t\t\t3--->Press '3' to modify a record:"<<endl;
		cout<<"\n\n\t\t\t\t\t4--->Press '4' to delete a record:"<<endl;
		cout<<"\n\n\t\t\t\t\t5--->Press '5' to exit:"<<endl;
		x=getch();
		if(x=='1')
		{
		system("cls");
		add();
		}
		else if(x=='2')
		{
		system("cls");
		search();
		}
		else if(x=='3')
		{
		system("cls");
		modify();
		}
		else if(x=='4')
		{
		system("cls");
		del();
		}
		else if(x=='5')
		{
		exit(0);
		}
	}while(x != 27);
	getch();
}




void namedisplay::slow(string no)
{
	int length = no.length();
	for (int i = 0; i < length; i++)
	{
		cout << no[i];
		Sleep(100);
	}
}

void namedisplay::projected_by()
{
	int width = 80;
	int height = 20;
	int a = 10;
	bool z;
	for (int i = 1; i <= width + 2; i++)
	{
		Sleep(a);
		cout << "*";
		cout << "*";
		if (i == (width + 2) / 2)
		{
			cout << endl;
		}
	}
	cout << endl;

	for (int j = 1; j < height + 1; j++)
	{
		z = true;
		for (int i = 1; i < width + 1; i++)
		{
			if (i == 1 || i == width)
			{
				Sleep(a);
				cout << "!!";
			}
			else
			{
				cout << " ";
			}


			if (!z)
			{
				if (i == width - 1)
				{
					if (j == 9)
					{
						cout.width(34);
					}
					else if (j == 10)
					{
						cout.width(29);
					}
					else if (j == 11)
					{
						cout.width(32);
					}
					else if (j == 12)
					{
						cout.width(32);
					}
					else if (j == 13)
					{
						cout.width(32);
					}
					else if (j == 14)
					{
						cout.width(32);
					}
				}
				else
				{
					cout << "\b";
				}
			}


			if (j == 9)
			{
				if (z)
				{
					Sleep(a);
					cout.width(32);
					slow("..Project By..");
					z = false;
				}

			}
			else if (j == 10)
			{
				if (z)
				{
					Sleep(a);
					cout.width(27);
					slow("..Syed Nouman Ali Shah..");
					z = false;
				}
			}
			else if (j == 11)
			{
				if (z)
				{
					Sleep(a);
					cout.width(29);
					slow("..Umar Ahmad Khan..");
					z = false;
				}
			}
			else if (j == 12)
			{

				if (z)
				{
					Sleep(a);
					cout.width(30);
					slow("..Sudhakar Kumar..");
					z = false;
				}
			}
			else if (j == 13)
			{

				if (z)
				{
					Sleep(a);
					cout.width(30);
					slow("..Fajjar Shehzad..");
					z = false;
				}
			}
			else if (j == 14)
			{

				if (z)
				{
					Sleep(a);
					cout.width(32);
					slow("..Rafay Sarwar..");
					z = false;
				}
			}
		}
		cout << endl;
	}

	for (int i = 1; i <= width + 2; i++)
	{
		Sleep(a);
		cout << "*";
		cout << "*";
		if (i == (width + 2) / 2)
		{
			cout << endl;
		}
	}
	_getch();
	system("cls");
}

