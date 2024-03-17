#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1,word2;
	getline(cin,word1);
	getline(cin,word2);
	int a,b;
	a=word1.size();
	b=word2.size();
	string word3;
	word3=word1+word2;
	string word4=word1[0]+word2;
	string word5=word2[0]+word1;
	word4.erase(1,1);
	word5.erase(1,1);
	cout<<a<<" "<<b<<endl;
	cout<<word3<<endl;
	cout<<word5<<" "<<word4<<endl;

    return 0;
}
