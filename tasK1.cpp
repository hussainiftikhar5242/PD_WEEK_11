#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    fstream newfile;
    string name;
    string age;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
    char ch;
    newfile.open("rectangular.txt",ios::out);
    newfile<<name<<","<<age;
    newfile.close();
    newfile.open("rectangular.txt",ios::in);
    newfile>>name;
    int length1=name.size();
    int length2=age.size();
    string var=" HB !";
    int length3=var.size();
    int sum=length1+length2+length3;
    for(int i=0;i<=sum;i++)
    {
        if(stoi(age) % 2 == 0)
        {
            cout<<"#";
        }
        else 
        {
            cout<<"*";
        }
    }
    cout<<endl;
    for(int x=0;x<1;x++)
    {
        if(stoi(age) %2==0 )
        cout<<"#";
        else 
        {
            cout<<"*";
        }
        cout<<" "<< age <<" HB ";
        for(int y=0;name[y] != '\0';y++)
        {
            
            if(name[y] == ',')
            {
               
                cout<<"!";
                continue;
            }
            cout<<name[y];
        } 
    }
    for(int i=0;i<1;i++)
    {
        if(stoi(age) %2==0 )
        cout<<"#";
        else 
        {
            cout<<"*";
        }
    }
    cout<<endl;
    for(int i=0;i<=sum;i++)
    {
        if(stoi(age) % 2 == 0)
        {
            cout<<"#";
        }
        else 
        {
            cout<<"*";
        }
    }
    newfile.close();
}
