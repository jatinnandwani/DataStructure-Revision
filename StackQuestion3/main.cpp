//Evaluate given postfix expression

//Q- Write code to efficiently evaluate given postfix expression.
//82/ will evaluate to 4 (8/2)
//138*+ will evaluate to 25 (1+8*3)
//545*+5/ will evaluate to 5 ((5+4*5)/5)

#include <iostream>
#include <string>
#include <stack>
#include <typeinfo>

using namespace std;

class evaluatePostfix {
                  public:
                    int eval(string input){
                            cout<<"input is coming here or not"<<input<<endl;
                            stack<int> stack;

                            for (int i = 0; i < input.length(); i++){
                                if(input[i] >= '0' && input[i] <= '9'){
                                    cout<<"TESTING - p -"<<input[i]<<endl;
                                    stack.push(input[i] - '0');
                                }
                                else{
                                    cout<<"operator --"<<input[i];
                                    int x = stack.top();
                                    cout<<"Last x - "<<x<<endl;
                                    stack.pop();

                                    int y = stack.top();
                                    cout<<"Last y - "<<y<<endl;
                                    stack.pop();

                                    if(input[i] == '+')
                                        stack.push(y + x);

                                        else if(input[i] == '-')
                                        stack.push(y - x);

                                        else if(input[i] == '*')
                                        stack.push(y * x);

                                        else if(input[i] == '/')
                                        stack.push(y / x);

                                }

                            }
                                    return stack.top();
                        }
                       };
int main()
{
    string expression;
    //cout<<"Get the expression which you want to evaluate"<<endl;
    //cin>>expression;
    expression = "138*+";
    evaluatePostfix check;
    cout<<check.eval(expression);
    return 0;
}
