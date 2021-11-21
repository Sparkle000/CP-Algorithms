// paranthisis matching : exp = ((2*3)-4)
// paranthisis not matching : exp = 4*6)-(3-(8/2)

#include<iostream>
using namespace std;

#define size 1000

class stack{
    int top;

    public:
    char arr[size];

    stack(){
        top=-1;
    }

    void push(char open_bracket);
    void pop();
    bool ifEmpty();
};

void stack::push(char open_bracket){
    if(top == size){
        cout<<"stack overflow\n";
        return;
    }

    top++;
    arr[top]=open_bracket;

}

void stack::pop(){
    if(top == -1){
        cout<<"stack underflow\n";
        return;
    }

    char x = arr[top];
    top--;
}

bool stack::ifEmpty(){
    return (top==-1);
}

int main(){
        stack s;

        int num;
        cout<<"enter number of characters: ";
        cin>>num;

        char arr[num];

        cout<<"enter characters:\n";

        for(int i=0;i<num;i++)
        cin>>arr[i];

        for(int i=0;i<num;i++)
        {
            if(arr[i]=='(')
            s.push(arr[i]);
            else if(arr[i]==')')
            s.pop();
        }

        if(s.ifEmpty())
            cout<<"paranthisis matching\n";
        else
            cout<<"paranthisis not matching\n";

    return 0;
        
}