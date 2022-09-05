#include <iostream> //Header file
int main(){
	using namespace std;
	//Variables for input:
	int i;
  	int j;
    int r;
	int r2;
	int fr;
	int q;
    //Taking user input:
    cout<<"Enter the number:"<<endl;
	cin>>fr;
    cout<<"Enter number till which table you want to print:"<<endl;
    cin>>r;
    cout<<"Enter range of your table"<<endl;
    cin>>r2;
    //Using  loop
  	for(i = fr; i <= r; i++){            /*outer loop*/

  		cout << "Table of " << i << endl;

    		for(j = 1; j <= r2; j++){         /*inner loop*/

      			cout << i << " X " << j << " = " << (i * j) << endl;
                 
    		}
  	}
	//only for cmd perpose not recommended
	cout<<"Program is done"<<endl;
	cin>>q;//only for cmd perpose not recommended

	return 0;
}