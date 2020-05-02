
#include <iostream>
#include <string>
#include <stack>


//Given a string containing opening and closing braces, check if it represents a balanced expression or not.
using namespace std;

class expressionCheck{
private:
    string exp;
public :
    bool balParenthesis(string exp){
        //get an empty stack of character
        stack<char> stack;
        // traverse the input expression
        for(int i=0; i<exp.length(); i++){
            //if current char in an expression is open braces push it inside the stack
            if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
                stack.push(exp[i]);
               }

            //if current char in an expression in closing braces
            //return false if mismatch is found (ie. if stack is empty, the number of opening braces is less than number
            //of closing braces, so expression can not be balanced)
            if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
                if(stack.empty()){
                    return false;
                }

                // pop character from the stack
                char top = stack.top();
                stack.pop();

                if((top == '(' && exp[i] != ')') || (top == '{' && exp[i] != '}') || (top == '[' && exp[i] != ']')){
                    return false;
                }
            }
        }

        //expression is balance only if stack is empty at this empty
        //cout<<"empty check"<<stack.empty()<<endl;
        return stack.empty();
    }
};

int main()
{
    expressionCheck check;
    string expression;
    cout<<"Please provide the string which you need to test"<<endl;
    cin>>expression;

    if(check.balParenthesis(expression)){
        cout<<"This expression is balanced";
    }else{
        cout<<"This expression is not balanced";
    }

}
