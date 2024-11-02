#include <iostream> 
using namespace std; 
int main() { 
int first, second; 
cout << "Type size of the first array: "; 
cin >> first; 
int* arr1 = new int[first]; 
cout << "Type sorted elements for the first array: "; 
for (int i = 0; i < first; i++) { 
cin >> arr1[i]; 
} 
cout << "Type size of the second array: "; 
cin >> second; 
int* arr2 = new int[second]; 
cout << "Type sorted elements for the second array: "; 
for (int i = 0; i < second; i++) { 
cin >> arr2[i]; 
} 
int* fpluss = new int[first + second]; 
int a = 0, b = 0, c = 0; 
while (a < first && b < second) { 
if (arr1[a] < arr2[b]) { 
fpluss[c++] = arr1[a++]; 
} else { 
fpluss[c++] = arr2[b++]; 
} 
} 
while (a < first) { 
fpluss[c++] = arr1[a++]; 
} 
while (b < second) { 
fpluss[c++] = arr2[b++]; 
} 
cout << "First + Second arrays = "; 
for (int i = 0; i < first + second; i++) { 
cout << fpluss[i] << " "; 
} 
cout << endl; 
delete[] arr1; 
delete[] arr2; 
delete[] fpluss; 
return 0; 
}
