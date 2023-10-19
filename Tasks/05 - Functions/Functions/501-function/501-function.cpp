#include <iostream>
using namespace std;


void displayBanner(int L)
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

}

int main()
{
	const string message = "Welcome to Computer Science, my name is Michael. Nice to meet you!";

	//Write the banner above
	displayBanner(message.length());
	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *
	displayBanner(message.length());

	//Tell the calling shell all is well
	return 0;
}