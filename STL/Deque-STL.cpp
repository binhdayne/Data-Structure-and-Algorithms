#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int a[], int n, int k){
   
	for (int i=0;i<n-k;i++){
             int Max=0;
             for (int j=i;j<i+k;j++){
                 if (Max<a[j]){
                     Max=a[j];
                 } 
             }
             cout<<Max<<""
        }
        cout<<endl;
    }

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
