#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    string filename;
    cout<<"enter text file name:";
    cin>>filename;
    ifstream file(filename);
    if(!file)
    {
        cout<<"file is not exist";
        return 1;
    }
    int wordcount=0;
    string word;
    while(file>>word)
    {
        wordcount++;
    }
     cout<<"total no. of words in text file :"<<wordcount<<endl;
    

    return 0;



}
