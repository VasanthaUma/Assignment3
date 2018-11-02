//Developed by Vasantha Buddiga-Palindrome
#include <iostream>
#include <cstring>
using namespace std;

bool isPalaindrome(char word[50]);

int main()
{
	system("color F0");
	char word[50];
	cout << "Enter word:" << endl;
	cin >> word;
	isPalaindrome(word);
	system("pause");
	return 0;
}
	

bool isPalaindrome(char word[50])
{
	
	/*AS string length saves the null character
	therefore -1
	initialize a boolean variable
	*/

	int i = 0;
	int j = strlen(word) - 1;

	bool a = true;
	for (i = 0; i < j; i++)
	{
		if (word[i] != word[j])
		{
			a = false;
		}
		j--;
	}
	if (a)
	{
		cout << "Yes the word is palindrome" << endl;
	}
	else
	{
		cout << "Not Palindrome" << endl;
	}
	return a;

}


