#include<iostream>
#include<stack>
using namespace std;


int p_r(char s)
{
  //int p;

  if(s=='+'||s=='-')
   return 1;
  else if(s=='*'||s=='/')
  return 2;
  else if(s=='^')
    return 3;
  else
  return 0;
}

int main()
{


cout<<"enter the expression"<<endl;
string s;
cin>>s;
stack<char>t;
int n=s.size();
t.push('#');
string ns="";
for(int i=0;i<n;i++)
{
  if('0'<=s[i]&&s[i]<='9')
  {
       ns+=s[i];
  }
  else if(s[i]=='(')
    t.push('(');


  else if(s[i]==')')
    {

    while(t.top()!='#'&&t.top()!='(')
     {
       char c=t.top();
          t.pop();
         ns += c;
     }


       t.pop();

    }

  else
  {

   while(t.top()!='#'&&p_r(s[i])<=p_r(t.top()))
   {
    char c=t.top();
     t.pop();
     ns+=c;
   }
     t.push(s[i]);

  }

}

   while(t.top()!='#')
   {

     char c=t.top();
       t.pop();
     ns+=c;

   }

cout<<ns<<endl;

cout<<"####evaluation done will be@@@@@@@"<<endl;



stack<int>q;
int l=ns.size();



for(int i=0;i<l;i++)
{

    if('0'<=ns[i]&&ns[i]<='9')
    {
    q.push(int(ns[i]-'0'));
    }
   else
   {
    int op2=q.top();
    q.pop();
    int op1=q.top();
    q.pop();
       if(ns[i]=='+')
        op1+=op2;
        else if(ns[i]=='-')
        op1-=op2;
        else if(ns[i]=='*')
        op1*=op2;
        else if(ns[i]=='/')
        op1/=op2;

     q.push(op1);

   }
}

cout<<"answer of the evaluated expression is ="<<q.top()<<endl;
  return 0;
}
