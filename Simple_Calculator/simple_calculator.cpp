#include<iostream>
using namespace std;

void addition(int num1, int num2){
   int addition= num1 + num2;
   cout<<"Addition of number1 "<<num1<<" and number2 "<<num2<<" is: "<<addition<<endl<<endl;
}

void subtraction(int num1, int num2){
   int subtraction= num1 - num2;
   cout<<"Subtraction of number1 "<<num1<<" and number2 "<<num2<<" is: "<<subtraction<<endl<<endl;
}

void multiplication(int num1, int num2){
   int multiplication= num1 * num2;
   cout<<"Multiplication of number1 "<<num1<<" and number2 "<<num2<<" is: "<<multiplication<<endl<<endl;
}

void division(int num1, int num2){
   int division= num1 / num2;
   cout<<"Division of number1 "<<num1<<" and number2 "<<num2<<" is: "<<division<<endl<<endl;
}

int main(){

     cout<<"---------- ~CALCULATOR APPLICATION~ ----------"<<endl<<endl;

     string name;
     cout<<"Hey, user please enter your name: "<<endl;
     cin>>name;


     cout<<endl<<endl<<" WELCOME "<< name<<" in Calculator Application "<<endl<<endl;

     int num1, num2;
     cout<<" Enter the first number: "<<endl;
     cin>>num1;
     cout<<" Enter the second number: "<<endl;
     cin>>num2;

     char ch;

      do{
        int choice;
        cout<<endl<<" Which operation you want to perform:  "<<name<<endl<<endl;
        cout<<" Arithmetic Operations: "<<endl;
        cout<<" 1> ADDITION "<<endl;
        cout<<" 2> SUBTRACTION "<<endl;
        cout<<" 3> MULTIPLICATION "<<endl;
        cout<<" 4> DIVISION "<<endl<<endl;

        cin>>choice;

        switch(choice){
         case 1:
              addition(num1, num2);
              break;
         case 2:
              subtraction(num1, num2);
              break;
        case 3:
              multiplication(num1, num2);
              break;
        case 4:
              division(num1, num2);
              break;
        default:
              cout<<"Please select from given option!"<<endl<<endl;
        }
        cout<<" Do you want to continue?[y/n] "<<endl<<endl;
        cin>>ch;
      }while((ch == 'y')||(ch == 'Y'));

      return 0;

}
