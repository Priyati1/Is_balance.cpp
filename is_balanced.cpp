#include<iostream>
#include<stack>
using namespace std;
bool isbalaned(char*arr){
	stack<char>s;
	for(int i=0;arr[i]!='\0';i++){
		char ch=arr[i];
	switch(ch){
		case '(':
		case '{':
		case '[':s.push(ch);
		break;

		case ')':
		if(!s.empty()&&s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;

		case '}':
		if(!s.empty()&&s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case ']':
		if(!s.empty()&&s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;
	}
	}
	if(s.empty()){
		return true;
	}
	else{
		return false;
	}	
}
int main(){
	char arr[]="({[(a+b)+(c*d)+e]})";
	if(isbalaned(arr)){
		cout<<"yes balanced"<<endl;
	}
	else{
		cout<<"Not balanced"<<endl;
	}
	return 0;
}