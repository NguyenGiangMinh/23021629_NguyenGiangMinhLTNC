#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int generateRandomNumber();
int getPlayerGuess();
void printAnswer(int guess, int secretNumber);
bool gameOver();

int main()
{
    bool play=true;
    int num=generateRandomNumber();
    int guess;
    while(play)
    {
       do{
        guess=getPlayerGuess();
        printAnswer(guess,num);
       }while(guess!=num);
        if(guess==num)
        {
            if(!gameOver())play=false;
        }
    }

    return 0;
}

int generateRandomNumber()
{
    srand(time(0));
    return rand()%100+1;
}

int getPlayerGuess()
{
    int guess;
    cout<<"Enter your guess (1..100): "<<endl;
    cin>>guess;
    return guess;
}

void printAnswer(int guess, int secretNumber)
{
    if(guess>secretNumber)
    {
        cout<<"Your number is too big!"<<endl;
    }else if( guess<secretNumber)
    {
        cout<<"Your number is too small!"<<endl;
    }else
    {
        cout<<"Congratulation! You win!"<<endl;
    }
}
bool gameOver()
{
    while(true)
    {
        cout<<"play again? (o: co, x: khong)";
        char c;
        cin>>c;
        if(c=='o'|| c=='O')return true;
        else if(c=='x'|| c=='X')return false;
        else{
            cout<<"nhap lai"<<endl;
        }
    }
}
