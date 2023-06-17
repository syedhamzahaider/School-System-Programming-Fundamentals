#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int name()
{   int x,discipline;
    string n,o,p;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******       ADMISSION FORM        *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout <<"Enter student marks in 8th grade(out of 1100) : ";
    cin>>x;
    if (x>=500&&x<=1100)
    {
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******       Congratulation        *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    cout<< "Enter student's First name : ";
    cin>>o;
    cout<< "Enter student's Middle name : ";
    cin>>n;
    cout<< "Enter student's Last name : ";
    cin>>p;
    cout<<"In which discipline do you want to take admission?"<<endl;
    cout<<"NOTE!"<<endl;
    cout<<"     This will be selected except compulsory subjects!"<<endl;
    cout<<"Choose any one : "<<endl;
    cout<<" 1 for COMPUTER SCIENCES"<<endl;
    cout<<" 2 for BIOLOGICAL SCIENCES"<<endl;
    cout<<" 3 for Arts"<<endl<<endl;
    cout<<"Select any one of them : "<<endl;
    cin>>discipline;
    switch(discipline)
    {
    case 1:
{   cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******      COMPUTER SCIENCES      *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    cout <<"PLEASE COLLECT YOUR COURSE!"<<endl;
    cout <<"WE WILL NOTIFY YOU ACCORDING TO THE START OF YOUR CLASSES"<<endl;
    for (int i=100;i>0;i++)
    {}
{   system("CLS");
    cout <<"Time is passing";
    for (int i=1000000;i>0;i--)
    {}
    cout<<".";
    for (int i=1000000;i>0;i++)
    {}
    cout<<".";
    for (int i=1000000;i>0;i++)
    {}
    cout<<"."<<endl;
    system("CLS");
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******            Exams            *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    int a[5];
    cout<<"0(MATHS)";
    cout<<"\n1(URDU)";
    cout<<"\n2(ENGLISH)";
    cout<<"\n3(COMPUTER SCIENCES)";
    cout<<"\n4(PHYSICS)";
    cout<<"\n5(CHEMIASTRY)";
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Marks "<<i<<" : ";
        cin>>a[i];
    }
    int sum;
    if(a[0]<=100&&a[1]<=100&&a[2]<=100&&a[3]<=100&&a[4]<=100)
    {for (int i=0;i<5;i++)
    {
         sum = a[i]+sum;}
        float per  = (sum*100)/500;
        cout<<"Percentage of "<<n<<" : "<<per<<"%";
        if (sum >165)
        {
            cout<<"\tSTATUS : PASS";
        }
        else
        {
            cout<<"\tSTATUS : Fail";
        }
    }
    else
    {
        cout<<"Total of each subject is 100.LIST EACH SUBJECT OUT OF HUNDERED";
    }
}

    break;
        }
    case 2:
{   cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******      BIOLOGICAL SCIENCES    *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    cout <<"PLEASE COLLECT YOUR COURSE!"<<endl;
    cout <<"WE WILL NOTIFY YOU ACCORDING TO THE START OF YOUR CLASSES"<<endl;
    for (int i=100;i>0;i++)
    {}
    {   system("CLS");
    cout <<"Time is passing";
//    for (int i=1000000;i>0;i--)
//    {}
//    cout<<".";
//    for (int i=1000000;i>0;i++)
//    {}
//    cout<<".";
//    for (int i=1000000;i>0;i++)
//    {}
    cout<<"."<<endl;
    system("CLS");
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******            Exams            *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    int a[5];
    cout<<"0(MATHS)";
    cout<<"\n1(URDU)";
    cout<<"\n2(ENGLISH)";
    cout<<"\n3(BIOLOGICAL SCIENCES)";
    cout<<"\n4(PHYSICS)";
    cout<<"\n5(CHEMIASTRY)";
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Marks "<<i<<" : ";
        cin>>a[i];
    }
    int sum;
    if(a[0]<=100&&a[1]<=100&&a[2]<=100&&a[3]<=100&&a[4]<=100)
    {for (int i=0;i<5;i++)
    {
         sum = a[i]+sum;}
        float per  = (sum*100)/500;
        cout<<"Percentage of "<<n<<" : "<<per<<"%";
        if (sum >165)
        {
            cout<<"\tSTATUS : PASS";
        }
        else
        {
            cout<<"\tSTATUS : Fail";
        }
    }
    else
    {
        cout<<"Total of each subject is 100.LIST EACH SUBJECT OUT OF HUNDERED";
    }
}

    break;
        }
    case 3:
{   cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******             ARTS            *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    cout <<"PLEASE COLLECT YOUR COURSE!"<<endl;
    cout <<"WE WILL NOTIFY YOU ACCORDING TO THE START OF YOUR CLASSES"<<endl;
    for (int i=100;i>0;i++)
    {}
    {   system("CLS");
    cout <<"Time is passing";
    for (int i=1000000;i>0;i--)
    {}
    cout<<".";
    for (int i=1000000;i>0;i++)
    {}
    cout<<".";
    for (int i=1000000;i>0;i++)
    {}
    cout<<"."<<endl;
    system("CLS");
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******            Exams            *******" << endl;
    cout << "\t\t\t\t ******                             *******" << endl;
    cout << "\t\t\t\t ******************************************" << endl;
    cout << "\t\t\t\t ******************************************" << endl<<endl;
    int a[5];
    cout<<"0(MATHS)";
    cout<<"\n1(URDU)";
    cout<<"\n2(ENGLISH)";
    cout<<"\n3(SCIENCE)";
    cout<<"\n4(DRAWING)";
    cout<<"\n5(STATS)";
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Marks "<<i<<" : ";
        cin>>a[i];
    }
    int sum;
    if(a[0]<=100&&a[1]<=100&&a[2]<=100&&a[3]<=100&&a[4]<=100)
    {for (int i=0;i<5;i++)
    {
         sum = a[i]+sum;}
        float per  = (sum*100)/500;
        cout<<"Percentage of "<<n<<" : "<<per<<"%";
        if (sum >165)
        {
            cout<<"\tSTATUS : PASS";
        }
        else
        {
            cout<<"\tSTATUS : Fail";
        }
    }
    else
    {
        cout<<"Total of each subject is 100.LIST EACH SUBJECT OUT OF HUNDERED";
    }
}

    break;
        }
    default :
        {
            cout<<"INVALID"<<endl;
        }

    }
    }
    else if (x>=!500&&x<=!1100)
    {cout<<"SORRY,You marks are not enough!"<<endl;}
    else
    {cout<<"YOU HAVE ENTERED SOMETHING WRONG "<<endl;}
}

int main()
{cout<<"\t\t\t\tTHIS  FOLLOWING PROJECT IS CREATED BY"<<endl<<endl;
cout<<"\t\t\tID:F2019105128\t\t\tNAME:SYED HAMZA HAIDER"<<endl;
//for(int i=10000000000;i>0;i--)//delay
//{}
menu :
system("CLS");//clear screen
    cout << "\t\t\t\t********************************************" << endl;
    cout << "\t\t\t\t********************************************" << endl;
    cout << "\t\t\t\t*******                             ********" << endl;
    cout << "\t\t\t\t*******      WELCOME  TO  THE       ********" << endl;
    cout << "\t\t\t\t*******       SCHOOL SYSTEM         ********" << endl;
    cout << "\t\t\t\t*******                             ********" << endl;
    cout << "\t\t\t\t********************************************" << endl;
    cout << "\t\t\t\t********************************************" << endl<<endl;
    name();//FUNTION  CALL
    cout<<"\nPRESS 1 TO CONTINUE";
    cout<<"\nPRESS 2 TO RETURN";
    int f;
    cin>>f;
    if(f==2)
    {goto menu;}

    return 0;
}
