#include<bits/stdc++.h>
using namespace std;
int Stack[100],element;
char input[100];
void push(int x){
    
    Stack[++element]=x;

}

bool isEmpty(){
    if(element>0){
        return false;
    }else{
        return true;
    }
}

bool checkPair( char input[]){

element =0;
int data = strlen(input);
 for(int i =0 ; i<data;i++){
     cout<<input[i];
     if(input[i]=='[') push(1);
     if(input[i]=='{') push(2);
     if(input[i]=='(') push(3);
     if(input[i]==')'){
         if(isEmpty()||Stack[element]!=3) return false;
         else{
             Stack[element]=0;
             --element;
         }
         if(input[i]=='}'){
             if(isEmpty()|| Stack[element]!=2){
                 return false;
             }
             else{
                 Stack[element]=0;
                 --element;
             }

         }
         if(input[i]==']'){
             if(isEmpty()|| Stack[element]!=1) return false;
             else{
                 Stack[element]=0;
                 --element;
             }
         }
     }
 }

if(element==0){
return true;
} 
else return false;

}

int main(){

cin>>input;
//return 1 it mean it's in pair.
cout<<checkPair(input);


return 0;

}
