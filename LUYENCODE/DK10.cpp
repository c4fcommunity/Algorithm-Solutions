#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int month , year;
	cin >> month >> year;
	if((month < 1 || month > 12) || (year <= 0 || year > 100000)){
		cout << "INVALID";
	}else{
		switch(month){
			case 1 :
			case 3 :
			case 5 :
			case 7 :
			case 8 :
			case 10 :
			case 12 :
				cout << "31" ;
				break;
			case 4 :
			case 6 :
			case 9 :
			case 11 :
				cout << "30" ;
				break;
			default :
				if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
					cout << "29";
				}else{
					cout << "28";
				}
				break;
		}
	}
	return 0;
}