#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    string value;
    cout<<"enter value:";
    cin>>value;
    int length=value.size();
    fstream newfile;
    newfile.open("missing_character.txt",ios::out);
    newfile<<value;
    newfile.close();
    newfile.open("missing_character.txt",ios::app);
    newfile<<value<<endl;
    int v=0;

    for(int y=97;y<123;y++)
    {
        char ch=char(y);
        for(int x=0;value[x] != '\0';x++)
        {
            if(value[x] == ch)
            {
                v=0;
                break;
            }
            v=1;    
        }
        if(v==1)
        {
            newfile<<ch;
            cout<<ch;
        }
    }
    newfile.close();
    
}