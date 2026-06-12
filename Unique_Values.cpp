#include <iostream>
using namespace std;
int main() {
	int l;
	cout << "How many numbers?: ";
	cin >> l;
	int num[l];
	for (int i = 0; i < l; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> num[i];
	}
	cout<<"Unique Numbers: " ;
	for (int i = 0; i < l; i++) 
	{
		int c=0;
		int flag=1;
		for (int j = 0 ; j < l; j++) 
		{
			if (num[i] == num[j])
			c++;			
		}
		if (c==1)
		{
			cout<<num[i]<<", ";
		}
	}
	return 0;
}