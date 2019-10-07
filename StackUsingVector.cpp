#include <iostream>
#include <vector>
using namespace std;

//Implementation of Stack Data Structure using Vector

struct Stack{

    vector<int> v;

    void push(int data){
        v.push_back(data);
    }
     int size()
     {
        return v.size();
     }

    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
             v.pop_back();
        }
    }
    int top(){
        if(!empty())
            return v[v.size()-1];

    }
};

int main() {
    Stack s;
    int n;
    cin>>n;
    int data;

    for(int i=1;i<=n;i++){
        cin>>data;
        s.push(data*data);
    }
    cout<<"Size = "<<s.size()<<endl;
    //Print the content of the stack by popping each element
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();

    }


return 0;
}

