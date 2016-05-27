#include <iostream>
using namespace std;

int gcf(int A, int B);

int main(){
	
	int a, b;
	cin >> a;
	cin >> b;
	if(a > b) cout <<"i love vim" << endl;
	cout << gcf(a, b) << endl;
	
	return 0;


}

int gcf(int A, int B){

	if(B == 0){
		return A;
	}
	return gcf(B, A % B);
}
