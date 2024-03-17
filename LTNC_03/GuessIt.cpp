#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomnumber()
{
	srand(time(0));
	int random = rand() % 100 + 1;

	return random;
}

void player(int&n)
{
	cout << "Ban doan so: ";
	cin >> n;
}

bool choiLai()
{
	while(true)
	{
		cout <<"Ban muon choi lai? ( O: c0 X:khong) " ;
		char c;
		cin >> c;

		if(c == 'O' || c == 'o') return true;
		else if(c == 'X' || c == 'x') return false;
		else
		{
			cout <<"Yeu cau nhap lai"<< endl;
		}
	}
}

bool ketQua(int n,int randNum,string& s)
{
	if (n > randNum) { s = "So qua lon"; return false; }
	if (n < randNum) { s = "So qua nho"; return false; }
	if (n == randNum) { s = "Ban doan dung roi"; return true;}
}

int main()
{
	int n;
	string s;
	bool sansang = true;
	int randNum = randomnumber();

	while (sansang)
	{
		player(n);
		bool isWin = ketQua(n,randNum,s);
		cout << s<< endl<<endl;

		if(isWin)
		{
			if(!choiLai()) sansang = false;
		}
	}

	return 0;
}
