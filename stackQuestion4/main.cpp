#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to decode the given sequence to construct minimum number
// without repeated digits
string decode(string seq)
{
	// result store output string
	string result;

	// create an empty stack of integers
	stack<int> stk;

	// run n+1 times where n is length of input sequence
	for (int i = 0; i <= seq.length(); i++)
	{
		// push number i+1 into the stack
		stk.push(i + 1);

		// if all characters of the input sequence are processed or
		// current character is 'I' (increasing)
        cout<<"cout -- "<<stk.top()<<endl;

        if (i == seq.length() || seq[i] == 'I')
		{
			// run till stack is empty
			while(!stk.empty())
			{
				// remove top element from the stack and add it to solution
				result += to_string(stk.top());
				stk.pop();
			}
		}


	}

}

// main function
int main()
{
	// input sequence
	string seq = "IDIDII";
    decode(seq);
	//cout << "Minimum number is " << decode(seq);

	return 0;
}
