#include<iostream>
using namespace std;
int main(){
    //FULL PYRAMID.
    // int  n;
    // cin>>n;
    // for(int row=0; row<n; row= row+1) {
	// 	//space
	// 	for(int col=0; col<n-row-1; col = col + 1) {
	// 		cout <<"  ";
	// 	}

	// 	//stars
	// 	for(int col=0; col <row+1; col = col + 1) {
	// 		cout << "* W";
	// 	}
	// 	cout << endl;
	// }

    //INVERTED PYRAMID
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
       
	// }

    //DIAMOND
    // int  n;
    // cin>>n;
    // for(int row=0; row<n; row= row+1) {
	// 	//space
	// 	for(int col=0; col<n-row-1; col = col + 1) {
	// 		cout <<" ";
	// 	}

	// 	//stars
	// 	for(int col=0; col <row+1; col = col + 1) {
	// 		cout << "* ";
	// 	}
	// 	cout << endl;
	// }
   
    // for(int i=0;i<n;i++){
    //     //spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int j=0;j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout << endl;
       
	// }
//HOLLOW DIAMOND
//     int n;
//     cin>>n;

// for(int row=0; row<n; row=row+1) {
// 		//spaces
// 		for(int col=0;col<n-row-1; col = col + 1) {
// 			cout << " ";
// 		}

// 		//stars
// 		for(int col=0; col<2*row+1; col = col + 1) {
// 			//if first character or if last character
// 			if(col == 0 || col == 2*row) {
// 				//first character or last character
// 				cout << "*";
// 			}
// 			else{
// 				cout << " ";
// 			}
// 		}

// 		cout << endl;
// 	}

// 	for(int row=0; row<n; row=row+1) {
// 		//spaces
// 		for(int col=0; col<row; col=col+1) {
// 			cout <<" ";
// 		}

		
// 		//star
// 		for(int col=0; col<2*n-2*row-1; col = col + 1){
// 			//if first or last character
// 			if(col == 0 || col == 2*n - 2*row -2 ) {
// 				cout << "*";
// 			}
// 			else {
// 				cout << " ";
// 			}
			
// 		}
// 		cout << endl;
		
// 	}
//FLIPPED DIAMOND

// int n;
// cin>>n;
// for(int row=0; row<n; row = row + 1) {
// 		//half pyrmaid
// 		for(int col =0; col<n-row; col = col + 1) {
// 			cout << "*";
// 		}

// 		//space wlaa full puramid 
// 		for(int col=0; col<2*row+1; col = col + 1) {
// 			cout <<" ";
// 		}
		
// 		//half pyramid
// 		for(int col =0; col<n-row; col = col + 1) {
// 			cout << "*";
// 		}
// 		cout << endl;
// 	}

// 	for(int row=0; row<n; row = row + 1) {
// 		//half pyrmaid
// 		for(int col =0; col<row+1; col = col + 1) {
// 			cout << "*";
// 		}

// 		//space wlaa full puramid 
// 		for(int col=0; col<2*n-2*row-1; col = col + 1) {
// 			cout <<" ";
// 		}
		
// 		//half pyramid
// 		for(int col =0; col<row+1; col = col + 1) {
// 			cout << "*";
// 		}
// 		cout << endl;
// 	}

//half pyramid
int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<i+1;
        if(i!=j){
            cout<<"*";
        }
    }
    cout<<endl;
}
for(int i=0; i<n; i=i+1) {
		
		for(int j=0; j<n-i; j = j+ 1) {
			cout << n-i;
			if(j != n-i-1)
				cout << "*";
		}
		cout << endl;
	}
}
