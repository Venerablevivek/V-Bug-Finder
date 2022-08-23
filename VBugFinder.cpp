#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<ctime>
#include<fstream>

using namespace std;

void createanewbug(int id){
    //This function will create a bug*
    cout<<"***************************"<<endl;
    cout<<"___Creating/Filing a Bug___"<<endl;
    cout<<"***************************"<<endl;

    time_t currenttime;
    currenttime = time(NULL);
    char *tm = ctime(&currenttime);// time taken as refenrence pointer and shows current local GMT

    char name[20];
    char bugtype[50];
    char bugdescription[1000];
    char bugpriority[30];
    int bugstatus;

    cout<<"Enter your Full Name : "<<endl;
    cin>>name;
    char ids[10];
    //The itoa() function coverts the integer n into a character string.
    itoa(id, ids, 10);
    //strcat() appends a copy of a string to the end of another string
    strcat(name, ids);
    char ex[]= ".txt";
    strcat(name, ex);
    //Bug Filename
    cout<<"Filename :-> "<<name<<endl;

    ofstream file;
    file.open(name);

    file<<"DATE & TIME :->"<<tm<<endl;
    file<<"BUG ID :-> "<<id<<endl;
    cout<<"BUG ID is :-> "<<id<<endl;
    file<<"BUG FILED BY :->"<<name<<endl;

    cout<<"Enter Bug Type :->"<<endl;
    cin>>bugtype;
    file<<"TYPE OF BUG :->"<<bugtype<<endl;

    cout<<"Enter Priority of BUG :"<<endl;
    cin>>bugpriority;

    file<<"BUG PRIORITY :->"<<bugpriority<<endl;

    cout<<"Enter the Description of Bug[Not more than 1000] : "<<endl;
    cin>>bugdescription;
    file<<"BUG DESCRIPTION :"<<bugdescription<<endl;

    cout<<"__________Status of the bug: __________"<<endl;
    cout<<"1. BUG CURRENTLY NOT ASSIGNED"<<endl;
    cout<<"2. IN PROCESS "<<endl;
    cout<<"3. BUG FIXED"<<endl;
    cout<<"4. BUG DELIVERED"<<endl;
    cout<<"ENTER YOUR CHOICE :"<<endl;

    int j;
    cin>>j;

    file<<"DATE & TIME :->"<<tm<<endl;
    file<<"BUG STATUS:->";

    switch (j)
    {
    case 1:
        file<<"BUG CURRENTLY NOT ASSIGNED "<<endl;;
        break;

    case 2:
        file<<"IN PROCESS "<<endl;
        break;
    
    case 3:
        file<<"BUG FIXED"<<endl;
        break;

    case 4:
        file<<"BUG DELIVERED"<<endl;
        break;
    default:
        cout<<"INVALID CHOICE"<<endl;
        break;
    }

    file.close();
}

void changestatusofbug(){
    //Changing the bug status
    cout<<"***************************"<<endl;
    cout<<"__Change_Status_of_the_Bug_"<<endl;
    cout<<"***************************"<<endl;

    time_t currenttime;
    currenttime = time(NULL);
    char *tm = ctime(&currenttime);

    char name[50];

    cout<<"Enter file name: "<<endl;
    cin>>name;
    char op[] = ".txt";
    strcat(name, op);

    //opening a file
    fstream viv;
    viv.open(name,ios::app);

    cout<<"1. BUG CURRENTLY NOT ASSIGNED"<<endl;
    cout<<"2. IN PROCESS "<<endl;
    cout<<"3. BUG FIXED"<<endl;
    cout<<"4. BUG DELIVERED"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;

    int l;
    cin>>l;

    viv<<"DATE & TIME :->"<<tm<<endl;
    viv<<"BUG STATUS :->";

    switch (l)
    {
    case 1:
        viv<<"BUG CURRENTLY NOT ASSIGNED "<<endl;;
        break;

    case 2:
        viv<<"IN PROCESS"<<endl;
        break;
    
    case 3:
        viv<<"BUG FIXED"<<endl;
        break;

    case 4:
        viv<<"BUG DELIVERED"<<endl;
        break;
    default:
        cout<<"INVALID CHOICE"<<endl;
        break;
    }

    viv.close();
}

void reportofbug(){
    //Providing report of bug
    cout<<"***************************"<<endl;
    cout<<"________Report_of_Bug_______"<<endl;
    cout<<"***************************"<<endl;

    char name[50];

    cout<<"Enter file Name: "<<endl;
    cin>>name;

    char dv[] = ".txt";
    strcat(name,dv);

    ifstream in;
    in.open(name,ios::in);
    char c;

   while(!in.eof()){
    in.get(c);
    cout<<c;
   }

   in.close();
}

int main(){

    cout<<"*******************************************************"<<endl;
    cout<<"_____________________V_BUG_FINDER______________________"<<endl;
    cout<<"*******************************************************"<<endl;

    int num,i=1;

    int id=0;  // id stores the ID Registered of the bugs till now
    
    while(i!=0)
    {      
           cout<<"1. File/Create a New Bug"<<endl;
           cout<<"2. Change Status of the Bug"<<endl;
           cout<<"3. Report of Bug"<<endl;
           cout<<"4. Exit"<<endl;
           cout<<"_______________________________"<<endl;

           cout<<"Enter Your Choice"<<endl;
           cin>>num;

           switch(num)
           {
           case 1:
               id++;
               createanewbug(id);
               break;

           case 2:
               changestatusofbug();
               break;

           case 3:
               reportofbug();
               break;

           case 4:
               if(i==0){
                   break;
               }
                
           default:
               cout<<"Invalid Entry"<<endl;
               break;
           }
                 
    }
    


    return 0;
}