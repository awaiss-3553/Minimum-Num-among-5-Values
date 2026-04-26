#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3, num4, num5, minNumber;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	cout<<"Enter Third Number: ";
	cin>>num3;
	cout<<"Enter Fourth Number: ";
	cin>>num4;
	cout<<"Enter Fifth Number: ";
	cin>>num5;

    if(num1 < num2) {
        if(num1 < num3) {
            if(num1 < num4) {
                if(num1 < num5) {
                    minNumber = num1;
                } else {
                    minNumber = num5;
                }
            } else {
                if(num4 < num5) {
                    minNumber = num4;
                } else {
                    minNumber = num5;
                }
            }
        } else {
            if(num3 < num4) {
                if(num3 < num5) {
                    minNumber = num3;
                } else {
                    minNumber = num5;
                }
            } else {
                if(num4 < num5) {
                    minNumber = num4;
                } else {
                    minNumber = num5;
                }
            }
        }
    } else {
        if(num2 < num3) {
            if(num2 < num4) {
                if(num2 < num5) {
                    minNumber = num2;
                } else {
                    minNumber = num5;
                }
            } else {
                if(num4 < num5) {
                    minNumber = num4;
                } else {
                    minNumber = num5;
                }
            }
        } else {
            if(num3 < num4) {
                if(num3 < num5) {
                    minNumber = num3;
                } else {
                    minNumber = num5;
                }
            } else {
                if(num4 < num5) {
                    minNumber = num4;
                } else {
                    minNumber = num5;
                }
            }
        }
    }
    
    cout << "\nThe minimum number among the entered values is: " << minNumber << endl;
    
	
	return 0;
}
