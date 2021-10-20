// Before we get into this, make sure you understand how C++ works.

#include<iostream> // Basic Input/output stream

using namespace std; // By using namespace std.



// creating a Class named as calculator (you can make this without classes, but its clear to visualise the code with classes)
class Calculator{

// setting everything as public
public:

	// creating a void function named as main
	void main(void){
		char op;

		float num1, num2;

		// this is a char datatype. you will get to know why we are using this ahead
		char yorn; // this is optional but you can do this and impress your friends xD ;)

		cout<<"format {number 1 {operator} number 2}: ";

	

			cin>>num1>>op>>num2;


		// we are now saying our programme what +, -, *, / does. 
		// make sure you add break after every case or everything will be printed in console even if you chose only a specific operator
		switch(op){

			case '+':
				cout<<"your result is: "<<num1+num2<<endl;
				break;

			case '-':
				cout<<"your result is: "<<num1-num2<<endl;
				break;

			case '*':
				cout<<"your result is: "<<num1*num2<<endl;
				break;

			case '/':
				cout<<"your result is: "<<num1/num2<<endl;
				break;
		}


		// this is where we will be using our yorn datatype. it will ask the user wether to continue using calculator again, if user replie with yes we will be running a loop
		cout<<"do you want to use calculator again? type in y if yes an n to exit status: ";

		cin>>yorn;


		// if user replies with y we will run the calculator again
		while(yorn == 'y'){
			
			main(); // this is where classes and its objects comes handy ;)

		}


		// if users reply with n, the calculator will be exited.
		if(yorn == 'n'){
			cout<<"Status exited ";
			exit(0);
		}
	}
};

//runnning all the objects of our classes in main function
int main(){

	Calculator ep;

	ep.main();

	return 0;
}
