#include<iostream>
#include<string>
#include<fstream>
#include<unistd.h>
using namespace std;

int main()
{
    ofstream o1;
    string s1;

    o1.open("Sample.txt");
    cout<<"\nWriting the file...\n";
    
    sleep(3);

    cout<<"Enter student roll no";
    getline(cin,s1);
    o1<<"roll no:"<<s1<<endl;

    //reading
    ifstream i1;
    i1.open("Sample.txt");

    cout<<"\nReading the file:\n";
    sleep(3);
    while(i1)
    {
        getline(i1,s1);
        cout<<s1<<endl;
    }
    
    cout<<endl;
    return 0;
}
