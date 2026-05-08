/* C++ String Exercises: Find the largest word in a given string 

#include<iostream>
#include<string>

using namespace std;

int main() {

	string text;
	string words = "", largest = "";

	cout << "Enter your String: ";
	getline(cin, text);  // alternative  cin>> text;

	int i = 0;  // it end at 'NULL' so you need to make sure when you look for the length you should -1

	while (i <= text.length() - 1) {   // text = Muhammad Mustafa
		if (text[i] == ' ' || text[i] == '\0') {
			if (words.length() > largest.length()) {
				largest = words;
			}
			words = "";
		}
			else {
				words += text[i];
			}
		i++;
		}
	cout << "Largets Word: " << largest << endl;


	return 0;
}
*/

/* Sort Letters in a String 

#include<iostream>
#include<string>

using namespace std;

int main() {

	string text;

	cout << "Enter your String: ";
	getline(cin,text);

	int i = 0;
	while ( i < text.length()) {
		int j = i + 1;
		while (j < text.length()) {
			if (text[i] > text[j]){
				char temp = text[i];
				text[i] = text[j];
				text[j] = temp;
			}
			j++;
		}
		i++;
	}

	cout << "The sorted String is: " << text << endl;
	return 0;
}*/

/* Count Vowels in a String 

#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	int i = 0, cnt = 0, len;
	cout << "Enter you String: ";
	getline(cin,text);

	len = text.length();

	while (i <= len) {
		if (text[i]=='a'|| text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
			cnt++;
			i++;
		}
		else if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
			cnt++;
			i++;
		}
		else{
			i++;
		}
	}
	cout << "The Vowels in the String are: " << cnt << endl;
	return 0;
}*/

/**Question 8 -- Count the Words in a String 

#include<iostream>
#include<string>

using namespace std;

int main() {
	string text;
	int cont = 0;
	cout << "Enter your String: ";
	//cin >> text; //cin >> text only reads one word until it sees a space.
	getline(cin, text);
	int i = 0;

	while (i <= text.length()) {
		if (text[i] == ' '|| text[i] == '\0') {
			cont++;
		}
		i++;
	}
	cout << "The Number of Words in a String is: " << cont << endl;
	return 0;
} */
/* Check Equal Occurrence of Two Characters 

#include<iostream>
#include<string>

using namespace std;

int main() {
	string text;
	char chr1, chr2;
	int i, cnt1 = 0, cnt2 = 0;

	cout << "Enter you text: ";
	getline(cin,text);

	cin >> chr1;
	cin >> chr2;

	for (i = 0; i <= text.length(); i++) {
		if (text[i]==chr1){
			cnt1++;
		}
		if (text[i] == chr2) {
			cnt2++;
		}
	}
	if (cnt1 == cnt2) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	return 0;
}*/

/*C++ String Exercises: Check if a given string is a Palindrome or not
#include<iostream>
#include<string>

using namespace std;
int main() {
	string text, clean, reversed;
	cout << "Enter you String: ";
	getline(cin, text);
	for (int i = 0; i <= text.length()-1;i++) {
		if (isalpha(text[i])) {
			clean += tolower(text[i]);
		}
	}
	for (int j = text.length() - 1; j >= 0; j--) {
		reversed += clean[j];
	}
	if (reversed == clean) {
		cout << "Palindrome. ";
	}
	else {
		cout << "Not a Palindrome. ";
	}
	return 0;

}*/
/*C++ Exercises: Find the largest element of a given array of integers

#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cout << "Enter the max amount of array n: ";
	cin >> n;

	vector<int> arr(n);
	cout << "Enter your elements: ";
	for (int j = 0; j < n;j++) {
		cin >> arr[j];
	}

	int largest = arr[0];

	for (int i = 1; i < n;i++) {
		if (arr[i]>largest) {
			largest = arr[i];
		}
	}
	cout << "The Largest Number of the array is: " << largest << endl;
	return 0;
}*/


/*C++ Exercises: Find the largest three elements in an array
#include<iostream>
#include<climits>
using namespace std;

int main() {
	int arr[] = {77,88,99,66,55,44,33,22,11,100};
	int num = sizeof(arr) / sizeof(arr[0]);

	int largest = INT_MIN, second_largest=INT_MIN,third_largest=INT_MIN;
	//just for learning//cout << " " << largest << " " << second_largest << " " << third_largest;

	if (num < 3) {
		cout << "The Elements should be above 3 to carry on. ";
		return 0;
	}

	for (int i = 0; i < num;i++) {
		if (arr[i] > largest) {
			third_largest = second_largest;
			second_largest = largest;
			largest = arr[i];
		}
		else if (arr[i] > second_largest) {
			third_largest = second_largest;
			second_largest = arr[i];
		}
		else if(arr[i] > third_largest) {
			third_largest = arr[i];
		}
	}
	cout << "The 3 largest elements in the array are: " << largest << " " << second_largest << " " << third_largest;
	return 0;
}*/

/* 3. Second Largest Element in Array 

#include<iostream>
#include<climits>

using namespace std;

int main() {
	int arr[] = { 7, 12,9,15,19,32,56,70 };
	int num = sizeof(arr) / sizeof(arr[0]);

	if (num < 2) {
		cout << "ERROR 101!!!!!!";
		return 0;
	}
	int first = INT_MIN, sec = INT_MIN;

	for (int i = 0; i < num; i++) {
		if (arr[i] > first) {
			sec = first;
			first = arr[i];
		}
		else if (arr[i]>sec) {
			sec = arr[i];
		}
	}
	cout << "Second largest element in array is: " << sec;
	return 0;
}
*/
/* Q7: Write a C++ program to find the k largest elements in a given array of integers. 
#include<iostream>
#include<climits>

using namespace std;

int main() {
	int arr[] = {4,5,9,12,9,22,45,7};

}*/

/*Q8: Write a C++ program to find the next more powerful element of every element of a given array of integers. 
Ignore those elements that have no greater element.
#include<iostream>
using namespace std;

int main() {
	//int arr[] = {4,1,5,9,12,9,22,45,7};
	int arr[] = { 4,5,2,25 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[j]>arr[i]) {
				cout << arr[i] << "--->" << arr[j] << endl;
				break;
			}
		}
	}
	return 0;
}*/
/*9: Write a C++ program to sort a given unsorted array of integers, in wave form.
Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . . 

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int arr[] = {4,5,9,12,9,22,45,7};
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n);

	for (int j = 0; j < n - 1;j+=2) {
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}
	cout << "The Wave Arrays :";
	for (int i = 0; i < n;i++) {
		cout << " " << arr[i] ;
	}
	return 0;
}*/
//Write a C++ program to check whether numbers in a vector can be rearranged
//so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main() {
//	bool iscons = true;
//	vector<int> num = {1,2,4,6,5,8,7,10,9};
//	vector<int> num = { 1, 2, 5, 7, 4, 3, 6 };
//	vector<int> num = { 1, 3,6,4,5 };
//	sort(num.begin(),num.end());
//	for (int i = 1; i < num.size();i++ ) {
//			iscons = false;
//			break;
//		}
//	}
//	if (iscons == true) {
//		cout << "True";
//	}
//	else {
//		cout << "False";
//	}
//	return 0;
//}

//Write a C++ program that returns the 
// elements in a vector that are strictly smaller than their adjacent left and right neighbours.
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
	//vector<int> num = {5,3,8,2,7,1,9};
	//vector<int> num = { 7, 2, 5, 3, 1, 5, 6 };
	//vector<int> num = { 1, 2 ,5, 0, 3, 1, 7 };

	//for (int i = 1; i < num.size() - 1; i++) {
	//	if (num[i] < num[i - 1] && num[i] < num[i+1]) {
	//		cout << " " << num[i];
	//	}
	//}
	//return 0;
//}

/*3. Create an n x n Matrix from Input
Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.*/
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cout << "Enter the size of Matrix: ";
	cin >> n;
	vector<vector<int>> matrix(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "Output: "<<endl;
	for (int k = 0; k < n; k++) {
		for (int l = 0; l < n; l++) {
			cout << " " << matrix[k][l];
		}
		cout << endl;
	}
	return 0;
}
