//progra to find infix for a given postfix//

#include<bits/stdc++.h>

boolisOperand(char x){
	return(x>='a'&&x<='z')||(x>='a'&&x<='z');
	
}
//get infix for given postfix
//exprsion
string getinfix(string_exp)
{
	stack<string> s;
	for(int i=0;exp[i]!='\0';i++){
		//push operands
		if(isOperand(exp[i]))
		{
			string op(1,exp[i]);
			 s.push(op);
		}
		//we assume thatt input isvallid and excpt opetyy//
		else{
			string op1=s.top();
			s.pop();
			string op2=s.top();
			s.pop();
			s.push("("+op2+exp[i]+op1+")");
	}
}
return s.top();
}
int main()
{
	string exp="mn+u*";
	cout<<getinfix(exp);
	return 0;
}
