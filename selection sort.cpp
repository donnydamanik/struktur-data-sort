#include<iostream>
using namespace std;
//menukar isi dari a dan b
void swapping(int &a, int &b){		
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//menampilkan isi array
void display(int *array, int size){
	for(int i = 0; i<size; i++)
	 cout << array[i] << " ";
cout << endl;
}
void selectionSort(int *array, int size){
	int i, j, imin;
	for(i = 0; i<size-1; i++){
		imin = i;	//mendapatkan indeks data minimum
		for(j = i+1; j<size; j++)
			if(array[j] < array[imin])
				imin = j;
			//menempatkan di posisi yang benar
			swap(array[i], array[imin]);	
	}
}
int main(){
	int n;
	cout << "Masukkan jumlah elemen Array:";
	cin >> n;
	int arr[n];			//membuat array dengan jumlah elemen yang diberikan
	cout << "Masukkan elemen array:" << endl;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Array sebelum sorting:";
	display(arr, n);
	selectionSort(arr, n);
	cout << "Array sesudah sorting:";
	display(arr, n);
}
