#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout<<"Enter the name of a file:";
    cin>>filename;

    ifstream input(filename);

    if(input.fail())
        cout<<filename<<" does not exist"<<endl;
    else
        cout<<filename<<" exists"<<endl;

    char ch;
    int Count = 0;
    while(input.get(ch))
    {
        Count++;
    }

    input.close();
    cout<<"The number of Characters in the file: "<<Count<<endl;

    return 0;
}
