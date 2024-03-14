#include <iostream>
using namespace std;
int main() {
	const int size = 5;
	int arr[size];
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int x;
	cout << "Enter element that needs to find: ";
	cin >> x;

	bool isSorted = false;
	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[i - 1]) {
			isSorted = true;
		}
	}
	if (isSorted == true) {
		cout << "Array is sorted." << endl;
	}
	else {
		cout << "Array isn't sorted." << endl;
	}

	int result = -1;

	int l = 0, r = size - 1;

	while (l <= r) {
		int mid = l + (r - l) / 2;

		cout << "Index of left border: " << l << endl;
		cout << "Index of right border: " << r << endl;
		cout << "Index of mid: " << mid << endl;

		if (arr[mid] < x) {
			l = mid + 1;
		}

		else if (arr[mid] > x){
			r = mid - 1;
		}

		else if (arr[mid] == x) {
			result = mid;
			break;

		}

	}

	if (result == -1) cout << "Element is not founded.";
	else  cout << "Element was founded on position: " << result << " value: " << x;
	return 0;

	
}
