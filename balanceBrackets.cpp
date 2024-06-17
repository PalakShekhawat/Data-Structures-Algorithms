#include<iostream>
using namespace std;
#include<stack>
//#include<string>
//#include<regex>
void balanceBrackets(string expression){
    stack<char> s;
    int flag =1;
    for(int i=0;i<expression.length();i++){
        char ch= expression[i];
        if(ch=='(' || ch=='{' || ch == '['){
            s.push(ch);
        }
        else{//for closing brackets
            if(!s.empty()){
                char top = s.top();
                if(ch =='}'&& top== '{'||ch ==']'&& top== '['||ch ==')'&& top== '('){
                    s.pop();
                }
                else{
                    flag =0;
                }
            }
            else{
                flag =0;
            } 
        }
    }
    if(s.empty()){
        cout<<"\tThe brackets are balanced.";
    }
    else{
        flag =0;
    }
    if(flag==0){
        cout<<"\tBrackets are not Balanced.";
    }
}
int main(){
    string expression;
    cout<<"Enter the brackets:"<<endl;
    cin>>expression;
    balanceBrackets(expression);
    return 0;

}