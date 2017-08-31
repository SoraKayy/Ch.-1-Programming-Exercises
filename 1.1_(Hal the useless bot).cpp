#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, my name is Hal!\n";
	cout << "What would you like me to do?\n";
	string user_input;
	getline(cin, user_input);
	cout << "I am sorry, I cannot do that.\n";
	return 0;
}

---------------------------------------------------------------------------------------------------------
[Not Code]

//You are making 'user_input' be an empty variable/placeholder. It doesn't have to be 'user_input' though.

//'cin' allows for user to type in and store into 'user_input'. getline allows for more than one word (e.g. Bobert Smith)

