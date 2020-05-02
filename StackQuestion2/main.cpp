#include <iostream>
#include <stack>
using namespace std;

// Function to find duplicate parenthesis in an expression
void duplicateparenthesis(string exp)
{
	if (exp.length() <= 3)
		return;

	// take an empty stack of characters
	stack<char> stack;

	// traverse the input expression
	//for (char c: exp)
	for (std::string::size_type i = 0; i < exp.size(); i++)
	{
        char c = exp[i];
		// if current char in the expression is a not a closing parenthesis

        cout<<"testing"<<c<<endl;
        cout<<"Now see pushing and not pushing"<<endl;
        if(c != ')'){
            cout<<"Push"<<c<<endl;
            stack.push(c);
           }else{

            if(stack.top() == '('){
                cout<<"The expression have duplicate parenthesis"<<endl;
            }

            while(stack.top() != '('){
                    cout<<"pop"<<stack.top()<<endl;
                    stack.pop();
                  }

            cout<<"removing ( "<<stack.top()<<endl;
            stack.pop();

           }
	 }

	 // if we reach here, then the expression does not have any
	 // duplicate parenthesis
	 cout << "The expression does not have duplicate parenthesis";
};

// main function
int main()
{
	string exp = "((x+y))";		// assumes valid expression

	duplicateparenthesis(exp);

	return 0;
}
