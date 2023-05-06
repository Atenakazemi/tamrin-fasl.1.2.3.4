#include <iostream>
#include <string>
using namespace std;
int   main()
{
	string input;
getline(cin, input);
int pos1= input.find('*');
int pos2= input.find('*',pos1+1);
int pos3= input.find('*',pos2+1);
int pos4= input.find('*',pos3+1);
string word1 =input.substr(0, pos1);
string word2 =input.substr(pos1 +1,pos2-pos1-1);
string word3 =input.substr(pos2 + 1, pos3-pos2-1);
string word4 =input.substr(pos3 + 1, pos4-pos3-1);
string reversed = word4 + " " + word3 + " " + word2 + " " + word1;
cout << "input: "<<input<<endl;
cout << "Reversed: "<<reversed<<endl;

return 0;

}

