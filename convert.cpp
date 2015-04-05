#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string x;
        cin>>x;

        if(x=="C")
        {
            cout<<"Q"<<"-";
        }
        else if(x=="C#")
        {
            cout<<"W"<<"-";
        }
        else if(x=="D")
        {
            cout<<"E"<<"-";
        }
        else if(x=="D#")
        {
            cout<<"R"<<"-";
        }
        else if(x=="E")
        {
            cout<<"T"<<"-";
        }
        else if(x=="F")
        {
            cout<<"Y"<<"-";
        }
        else if(x=="F#")
        {
            cout<<"U"<<"-";
        }
        else if(x=="G")
        {
            cout<<"I"<<"-";
        }
        else if(x=="G#")
        {
            cout<<"O"<<"-";
        }
        else if(x=="A")
        {
            cout<<"P"<<"-";
        }
        else if(x=="A#")
        {
            cout<<"["<<"-";
        }
        else if(x=="B")
        {
            cout<<"]"<<"-";
        }
        else if(x=="c")
        {
            cout<<"slash"<<"-";
        }



    }

    return 0;

}
