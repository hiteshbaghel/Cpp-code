#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Structure defining

//For students
struct student
{
 string name;
 string enrollment;
 string Branch;
 string contact;
 string address;
}studentData;//Variable of student type

//For teachers
struct teacher
    {
      string name;
      string qualification;
      string exp;
      string pay;
      string subj;
      string lec;
      string addrs;
      string cel_no;
    }tech[50];//Variable of teacher type
//Main function
int main()
{
	int login();
	login();

int i=0,j;//for processing usage 
char choice;//for getting choice
string find;//for sorting
string srch;

while(1)//outer loop
{ 
 system("cls");//Clear screen

//Level 1-Display process 

 cout<<"\t\t\t\t-----------------------------------------------------------";
 cout<<"\n\n\t\t\t\t\t\tCOLLEGE DATA MANAGEMENT SYSTEM\n\n";
 cout<<"\t\t\t\t-----------------------------------------------------------";
 cout<<"\n\n\t";
 cout<<"\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
 cout<<"\n\t\t\t\t\t\t\t:MAIN SCREEN:\n";
 cout<<"\t\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
 cout<<"\n\t\t\t\t\t Enter 1 For Students Information"<<endl;
 cout<<"\n\t\t\t\t\t Enter 2 For Teacher Information"<<endl;
 cout<<"\n\t\t\t\t\t Enter 3 For Exit Program"<<endl;
  cout<<"\n\n\t\t\t\t\t Enter your choice: ";
 cin>>choice;

system("cls");

switch(choice)//First switch
{
 
case '1': //Student
 { 
while(1)//inner loop-1
{ 
system("cls");
//Level-2 display
cout<<"\t\t\t\t\t--------------------------------------------------------------------";
cout<<"\n\n\t\t\t\t\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n";
cout<<"\t\t\t\t\t--------------------------------------------------------------------\n\n";
cout<<"\n\t\t\t\t\t\t\t Press 1 Create new entry\n";
cout<<"\n\t\t\t\t\t\t\t Press 2 Find and display entry\n";
cout<<"\n\t\t\t\t\t\t\t Press 3 Jump to main\n";
cout<<"\n\n\t\t\t\t\t\t\t Enter your choice: ";
cin>>choice;

switch (choice)//Second switch

{
case '1'://Insert data
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
	system("CLS");
 cout<<"\n\t\t\t\t\t<<<<<<<NEW ENTRY>>>>>>>\n\n";
 cout<<"\n\n\t\t\t\t\tEnter Student Name: ";
 cin>>studentData.name;
 cout<<"\n\t\t\t\t\tEnter Enrollment Number: ";
 cin>>studentData.enrollment;
 cout<<"\n\t\t\t\t\tEnter Branch: ";
 cin>>studentData.Branch;
 cout<<"\n\t\t\t\t\tEnter Contact Number: ";
 cin>>studentData.contact;
 cout<<"\n\t\t\t\t\tEnter Student Address: ";
 cin>>studentData.address;
 f1<<studentData.name<<endl<<studentData.enrollment<<endl<<studentData.Branch<<endl<<studentData.contact<<studentData.address;
 cout<<"\n\n\t\t\t\t Do you want to enter data: ";
 cout<<"\n\t\t\t\t\t Press Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;//control back to inner loop -1

case '2'://Display data
{  ifstream f2("student.txt"); 
system("CLS");
cout<<"\n\t\t\t\t<<<<<<<<<<DISPLAY STUDENT'S ENTRY>>>>>>>>>>>\n";
cout<<"\n\n\t\t\t\t\tEnter Name of student to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.name);

if(studentData.name==find)
{
 notFound = 1;
 cout<<"\n\t\t\t\t\tName: "<<studentData.name<<endl;

 cout<<"\n\t\t\t\t\tEnrollment Number: "<<studentData.enrollment<<endl;

 cout<<"\n\t\t\t\t\tBranch: "<<studentData.Branch<<endl<<endl;
 
 cout<<"\n\t\t\t\t\tContact Number: "<<studentData.contact<<endl;
 
 cout<<"\n\t\t\t\t\tAddress: "<<studentData.address<<endl;
}

}


if(notFound == 0){

cout<<"\n\t\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();

}
continue;//control back to inner loop -1

case '3'://Jump to main
{
break;//inner switch breaking
}
}

break;//inner loop-1 breaking
}
continue;//Control pass to 1st loop    
}

case '2'://Teachers biodata
{ 
while(1)//inner loop-2
{ 
system("cls");
//Level-2 Display process

cout<<"\t\t\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
cout<<"\n\n\t\t\t\tt\t\t TEACHER INFORMATION AND BIODATA SECTION\n\n";
cout<<"\t\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
cout<<"\n\t\t\t\t\t Press 1 Create new entry\n";
cout<<"\n\t\t\t\t\t Press 2 Find and display entry\n";
cout<<"\n\t\t\t\t\t Press 3 Jump to main\n";
cout<<"\n\n\t\t\t\t\t Enter your choice: ";
cin>>choice;

switch (choice)//Third switch
{
case '1'://Insert data
{ 
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
 	system("CLS");
  cout<<"\n\n\t\t\t\t\tEnter Name of Faculty: ";
  cin>>tech[i].name;
  cout<<"\n\t\t\t\t\tEnter Qualification: ";
  cin>>tech[i].qualification;
  cout<<"\n\t\t\t\t\tEnter Experiance(year): ";
  cin>>tech[i].exp;
  cout<<"\n\t\t\t\t\tEnter Subject: ";
  cin>>tech[i].subj;
  cout<<"\n\t\t\t\t\tEnter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"\n\t\t\t\t\tEnter Pay: ";
  cin>>tech[i].pay;
  cout<<"\n\t\t\t\t\tAddress: ";
  cin>>tech[i].addrs;
  cout<<"\n\t\t\t\t\tEnter Phone Number: ";
  cin>>tech[i].cel_no;
  
  t1<<tech[i].name<<endl<<tech[i].qualification<<endl<<tech[i].exp<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].addrs<<endl<<tech[i].cel_no<<endl;
  cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
  cout<<"\n\t\t\t\t\t Press Y 1for Continue and N to Finish:  ";
  cin>>choice;
 }//if
}//for loop
//for finding through name 
system("cls");

t1.close();
}//case 1

continue;//Control pass to inner loop-2

case '2'://Display data
{ 
ifstream t2("teacher.txt"); 
system("CLS");
cout<<"\n\t\t\t\t<<<<<<<<<<<<<DISPLAY TEACHER'S ENTRY>>>>>>>>>>>>>\n";
cout<<"\n\n\t\t\t\t\t Enter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,tech[j].name);
 
 if(tech[j].name==find)
 {
  notFound = 1;
  
  cout<<"\n\t\t\t\t\tName: "<<tech[j].name<<endl;
   getline(t2,tech[j].qualification);
  cout<<"\n\t\t\t\t\tQualification: "<<tech[j].qualification<<endl;
   getline(t2,tech[j].exp);
  cout<<"\n\t\t\t\t\tExperience: "<<tech[j].exp<<endl;
   getline(t2,tech[j].subj);
  cout<<"\n\t\t\t\t\tSubject: "<<tech[j].subj<<endl;

   getline(t2,tech[j].lec);
  cout<<"\n\t\t\t\t\tLecture (per Week): "<<tech[j].lec<<endl;
    getline(t2,tech[j].pay);
  cout<<"\n\t\t\t\t\tPay: "<<tech[j].pay<<endl;
    getline(t2,tech[j].addrs);

  cout<<"\n\t\t\t\t\tAddress: "<<tech[j].addrs<<endl;

    getline(t2,tech[j].cel_no);
  cout<<"\n\t\t\t\t\tPhone Number: "<<tech[j].cel_no<<endl;

 }//if
 
}//for loop
t2.close();
if(notFound == 0){

 cout<<"\n\t\t\tNo Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();//To hold data on screen
getch();//To hold data on screen
}//case 2

continue;//Control pass to inner loop-2

case '3'://Jump to main 
{
break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
 cout<<"\t\t\t****************************************************************************";
 cout<<"\n\n\t\t\t\t COLLEGE DATA MANAGEMENT SYSTEM PROGRAM BY HITESH BAGHEL \n\n";
 cout<<"\t\t\t****************************************************************************\n\n";

	cout<<"\n\t\t\t\t\t\t----THANK YOU----\n\n";
	cout<<"\n\t\t\t\t\t\t PRESS ANY KEY TO EXIT THE PROGRAM ";
	getch();
break;//outer case 3
}//outer case 3
}   
break;//outer loop
}
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tCOLLEGE DATA MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t******************************";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t******************************\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "system"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
