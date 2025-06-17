#include<iostream>
#include<string>
#include<cctype>
using namespace std;
const int N = 5;
const int M = 4;

string checkVowels(char arr[]) {
    string vowels = "";
    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = tolower(arr[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels += arr[i];
        }
    }
    return vowels;
}

bool countChar(char arr[], char target) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    if (count > 0) {
        cout << "Character '" << target << "' found " << count << " times." << endl;
        return true;
    } else {
        return false;
    }
}
bool isPrime(int n) {
    if (n <= 1) 
	return false;
    if (n <= 3)
	 return true;
    if (n % 2 == 0 || n % 3 == 0) 
	return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
		return false;
    }
    return true;
}

void modifyPrime(float &item) {
    float n = item/2;
    item = (1 - n * n) / (n + 2);
}

void modifyNonPrime(float &item) {
    float n = item;
    item = (n - (0.5 + n)) / (2 * n + 2);
}

void processArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        int intValue = static_cast<int>(arr[i]);
        if (isPrime(intValue)) {
           //  arr[i] /= 2;
            modifyPrime(arr[i]);
        } else {
            modifyNonPrime(arr[i]);
        }
    }
}

void checkVowelsSimple(const char arr[], char vowels[]) {
    int vowelCount = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        char lowerCh = tolower(arr[i]);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowels[vowelCount++] = arr[i];
        }
    }
    vowels[vowelCount] = '\0';
}

bool countCharSimple(const char arr[], char target) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    cout << "Count(" << target << ") returned: " << count << endl;
    return (count > 0);
}

int main()
{
    //problem 1
    int a[N] = {2, 3, 7, 10, 12};
    int b[M] = {1, 5, 7, 8};

    int i = 0, j = 0;
    int s1 = 0, s2 = 0;
    int cost = 0;

    while (i < N && j < M) {
        if (a[i] < b[j]) {
            s1 += a[i++];
        } 
        else if (a[i] > b[j]) {
            s2 += b[j++];
        } 
        else {
            s1 += a[i++];
            s2 += b[j++];
            
            if (s1 < s2) cost += s1;
            else cost += s2;
            
            s1 = 0;
            s2 = 0;
        }
    }

    while (i < N) s1 += a[i++];
    while (j < M) s2 += b[j++];

    if (s1 < s2) cost += s1;
    else cost += s2;

    cout << "Min cost: " << cost << endl;

    
    
    
    //problem 2
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;
    int arr2[size2];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    cout << "Duplicated values in both arrays: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    cout << arr1[i] << " ";
                }
                break;
            }
        }
    }

    cout << endl;

    cout << "Non-duplicated values from both arrays: ";
    for (int i = 0; i < size1; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                isDuplicate = true;
                break;
            }
        }
        for (int k = 0; k < i && !isDuplicate; k++) {
            if (arr1[i] == arr1[k]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr1[i] << " ";
        }
    }

    for (int i = 0; i < size2; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                isDuplicate = true;
                break;
            }
        }
        for (int k = 0; k < i && !isDuplicate; k++) {
            if (arr2[i] == arr2[k]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << arr2[i] << " ";
        }
    }

    cout << endl;
    //problem 3
    const int n = 11; // n > 10 as required
    float arr[n] = {2, 4, 3, 5, 7, 6, 8, 9, 10, 11, 13};
    
    cout << "Array before processing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    processArray(arr, n);
    
    cout << "Array after processing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    

    //problem 4
    cin.ignore(); // Add this line to clear the input buffer
    const int maxSize = 100;
    char charArray[maxSize];
    char vowelsArray[maxSize]; // Assuming max vowels won't exceed original size

    cout << "Enter a string (max " << maxSize - 1 << " characters): ";
    cin.getline(charArray, maxSize);

    cout << "Character array is: " << charArray << endl;

    checkVowelsSimple(charArray, vowelsArray);
    cout << "Returned array has: " << vowelsArray << endl;

    cout << "Count(m) is: ";
    countCharSimple(charArray, 'm');
    cout << "Count(m) is: ";
    countCharSimple(charArray, 'm');
    cout << "Count(x) is: ";
    countCharSimple(charArray, 'x');


    return 0;
}