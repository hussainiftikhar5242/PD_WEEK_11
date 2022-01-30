#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
void pizzapoint();
main()
{
    pizzapoint();
}
void pizzapoint()
{
    int quantity;
    cout<<"enter minimum order:";
    cin>>quantity;
    int price;
    cout<<"enter minimum price:";
    cin>>price;
    int count=0;
    fstream newfile;
    newfile.open("Customers.txt",ios::in);
    string line;  //store the total first line from file
    int num=0/*this will store the number from [] */,minimum=0; // this will count the value 
    string item; //store kara ga value before, from file.
    while(!newfile.eof())
    {
        getline(newfile,line);
        for(int i=0;line[i] != '\0';i++)
        {
            if(line[i] == '[')
            {
                count=count+1;  //jb ya bracker mila gi too skip ka da ga[
                continue;
            }
            if(count == 1)
            {
                if(line[i] != ',' )
                item=item+line[i];  
            }
            if(line[i] == ',' || line[i]==']')
            {
                stringstream any(item); //convet string number into integer
                any>>num;
                if(num >= price) //num mean jo value [] in ka andr store hain on ko store krna ka liya 
                {
                    minimum=minimum+1;
                    cout<<minimum<<endl;
                }
                item=" "; //store kara ga jo value [] in ka andr hain 
            }
            num=0;   // remove the last value 
            if(minimum >= quantity )
            {
                for(int x=0;line[x] != ' ';x++)
                {
                    cout<<line[x];   
                }
                cout<<endl;
                break;
            }
        }
        count=0;    
    }
    newfile.close();   
}