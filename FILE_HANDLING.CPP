#include <iostream>
#include <fstream>
using namespace std;

int main()
{
char name[30];
int age;
fstream file;

//WRITE data in file
file.open("filehandling.txt",ios::out);
if(!file)
{
cout<<"Error in opening file.."<<endl;
return 0;
}

cout<<"\nFile created successfully."<<endl;
string ch;
cin>>ch;
file.put(ch);
file.close();
cout<<"\nFile saved and closed succesfully."<<endl;




//READ data of file
file.open("filehandling.txt",ios::in);
if(!file){
cout<<"Error in opening file..";
return 0;
}

cout<<"File opened successfully"<<endl;
    file>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<ch<<" is a vowel."<<endl;
    }
    else{
        cout<<ch<<" is a consonant."<<endl;
    }

file.close();

return 0;

}