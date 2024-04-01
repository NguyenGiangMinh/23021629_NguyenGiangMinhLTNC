#include <bits/stdc++.h>

using namespace std;

int numPlayer()
{
    cout<<"Ban chon so (1;100): ";
    int n;
    cin>>n;
    return n;
}

bool choitiep()
{
    while(1)
    {
        cout<<"Ban co choi tiep khong?"<<endl;
        char s;
        cin>>s;
        if(s=='x' || s=='X')
        {
            return 0;
        }else if(s=='o' || s=='O')
        {
            return 1;
        }else
        {
            cout<<"Nhap lai"<<endl;
        }

    }
}

int guessRandom(int low, int high)
{
    cout<<"May doan so: "<<endl;
    return (low+high)/2;
}

void printAnswer(int numPlayer,int guessRandom, int* low, int* high)
{
    if(numPlayer>guessRandom)
    {
        cout<<"May doan be qua"<<endl;
        *low=(*low+*high+1)/2;
    }else if(numPlayer<guessRandom)
    {
        cout<<"May doan lon qua"<<endl;
        *high=(*low+*high+1)/2;
    }else
    {
        cout<<"May doan dung roi"<<endl;
    }
}


int main()
{
    int continuegame=true;
    int guessmay;
    int low=1, high=100;
    int numman;

    while(continuegame)
    {
        numman=numPlayer();
        do
        {
            guessmay=guessRandom(low,high);
            cout<<guessmay<<endl;
            printAnswer(numman,guessmay,&low,&high);


        }while(numman!=guessmay);
        if(guessmay==numman)
        {
            if(!choitiep())
            {
                continuegame=false;
            }
        }
    }
    return 0;
}
