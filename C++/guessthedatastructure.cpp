//kattis guessthedatastructure
////ps2c.cpp
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  while(scanf("%d", &n) != EOF){

        int num[2000];//twice n due to two numbers saved
        for(int i=0; i<2*n;i++)cin>>num[i];

        stack <int> myStack;
        queue <int> myQueue;
        priority_queue <int> myPriorityQueue;

        int Stack=1;
        int Queue=1;
        int PriorityQueue=1;

        //checks for stack
        for(int i=0; i<2*n && Stack; i+=2){
            if(num[i]==1){
                //add a[j+1]to stack
                myStack.push(num[i+1]);
            }
            else if(!myStack.empty() && num[i+1]==myStack.top()){
                myStack.pop();
            }
            else {
                Stack=0;
            }
        }

        //checks for queue
        for(int i=0; i<2*n && Queue; i+=2){
            if(num[i]==1){
                //add a[j+1]to queue
                myQueue.push(num[i+1]);
            }
            else if(!myQueue.empty() && num[i+1]==myQueue.front()){
              //cout<<myDatastructure2.front()<<endl;
                myQueue.pop();

            }
            else {
                Queue=0;
            }
        }

        //checks for priority queue
        for(int i=0; i<2*n && PriorityQueue; i+=2){
            if(num[i]==1){
                //add a[j+1]to queue
                myPriorityQueue.push(num[i+1]);
            }
            else if(!myPriorityQueue.empty() && num[i+1]==myPriorityQueue.top()){
              //cout<<myDatastructure2.front()<<endl;
                myPriorityQueue.pop();

            }
            else {
                PriorityQueue=0;
            }
        }

        //determines datastructure
        if(!Stack && !Queue && !PriorityQueue)
            cout<<"impossible"<<endl;
        else if(Stack + Queue + PriorityQueue >1)
            cout<<"not sure"<<endl;
        else if(Queue)cout<<"queue"<<endl;
        else if(Stack)cout<<"stack"<<endl;
        else if(PriorityQueue)cout<<"priority queue"<<endl;
    }

    return 0;
}
