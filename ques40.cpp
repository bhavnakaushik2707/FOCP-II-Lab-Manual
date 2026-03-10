#include<iostream>
using namespace std;

int main()
{
    string str;
    int words=1,digits=0,special=0;

    cout<<"Enter a string: ";
    getline(cin,str);

    // sentence case
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;

    for(int i=1;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

        if(str[i]==' ')
            words++;

        if(str[i]>='0' && str[i]<='9')
            digits++;

        else if(!((str[i]>='A'&&str[i]<='Z') ||
                 (str[i]>='a'&&str[i]<='z') ||
                 str[i]==' '))
            special++;
    }

    cout<<"Normalized String: "<<str<<endl;
    cout<<"Total words: "<<words<<endl;
    cout<<"Total digits: "<<digits<<endl;
    cout<<"Total special characters: "<<special<<endl;

    if(special==0)
        cout<<"String is valid";
    else
        cout<<"String is not valid";

    return 0;
}