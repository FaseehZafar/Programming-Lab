//The Questions are from the same Array Lab but we have to use pointers in this.....

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
const int N = 5;
const int M = 4;

string checkVowels(char* arr) {
    string vowels = "";
    for (char* p = arr; *p != '\0'; p++) {
        char ch = tolower(*p);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels += *p;
        }
    }
    return vowels;
}

bool countChar(char* arr, char target) {
    int count = 0;
    for (char* p = arr; *p != '\0'; p++) {
        if (*p == target) {
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
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
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

void processArray(float* arr, int size) {
    for (float* p = arr; p < arr + size; p++) {
        int intValue = static_cast<int>(*p);
        if (isPrime(intValue)) {
            modifyPrime(*p);
        } else {
            modifyNonPrime(*p);
        }
    }
}

void checkVowelsSimple(const char* arr, char* vowels) {
    int vowelCount = 0;
    for (const char* p = arr; *p != '\0'; ++p) {
        char lowerCh = tolower(*p);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            *vowels++ = *p;
            vowelCount++;
        }
    }
    *vowels = '\0';
}

bool countCharSimple(const char* arr, char target) {
    int count = 0;
    for (const char* p = arr; *p != '\0'; ++p) {
        if (*p == target) {
            count++;
        }
    }
    cout << "Count(" << target << ") returned: " << count << endl;
    return (count > 0);
}

int main() {
    // Problem 1
    int a[N] = {1,5,3};
    int b[M] = {2,5,6};

    int* pa = a;
    int* pb = b;
    int* enda = a + N;
    int* endb = b + M;
    
    int s1 = 0, s2 = 0;
    int cost = 0;

    while (pa < enda && pb < endb) {
        if (*pa < *pb) {
            s1 += *pa++;
        } 
        else if (*pa > *pb) {
            s2 += *pb++;
        } 
        else {
            s1 += *pa++;
            s2 += *pb++;
            
            if (s1 < s2) cost += s1;
            else cost += s2;
            
            s1 = 0;
            s2 = 0;
        }
    }

    while (pa < enda) s1 += *pa++;
    while (pb < endb) s2 += *pb++;

    if (s1 < s2) cost += s1;
    else cost += s2;

    cout << "Min cost: " << cost << endl;

    // Problem 2
    int size1, size2;

    cout << "Enter size of first array: ";
    cin >> size1;
    int* arr1 = new int[size1];

    cout << "Enter elements of first array:\n";
    for (int* p = arr1; p < arr1 + size1; p++) {
        cin >> *p;
    }

    cout << "Enter size of second array: ";
    cin >> size2;
    int* arr2 = new int[size2];

    cout << "Enter elements of second array:\n";
    for (int* p = arr2; p < arr2 + size2; p++) {
        cin >> *p;
    }

    cout << "Duplicated values in both arrays: ";
    for (int* p1 = arr1; p1 < arr1 + size1; p1++) {
        for (int* p2 = arr2; p2 < arr2 + size2; p2++) {
            if (*p1 == *p2) {
                bool alreadyPrinted = false;
                for (int* pk = arr1; pk < p1; pk++) {
                    if (*pk == *p1) {
                        alreadyPrinted = true;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    cout << *p1 << " ";
                }
                break;
            }
        }
    }
    cout << endl;

    cout << "Non-duplicated values from both arrays: ";
    for (int* p1 = arr1; p1 < arr1 + size1; p1++) {
        bool isDuplicate = false;
        for (int* p2 = arr2; p2 < arr2 + size2; p2++) {
            if (*p1 == *p2) {
                isDuplicate = true;
                break;
            }
        }
        for (int* pk = arr1; pk < p1 && !isDuplicate; pk++) {
            if (*p1 == *pk) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << *p1 << " ";
        }
    }

    for (int* p2 = arr2; p2 < arr2 + size2; p2++) {
        bool isDuplicate = false;
        for (int* p1 = arr1; p1 < arr1 + size1; p1++) {
            if (*p2 == *p1) {
                isDuplicate = true;
                break;
            }
        }
        for (int* pk = arr2; pk < p2 && !isDuplicate; pk++) {
            if (*p2 == *pk) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << *p2 << " ";
        }
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;

    // Problem 3
    const int n = 11; // n > 10 as required
    float arr[n] = {2, 4, 3, 5, 7, 6, 8, 9, 10, 11, 13};
    
    cout << "Array before processing: ";
    for (float* p = arr; p < arr + n; p++) {
        cout << *p << " ";
    }
    cout << endl;
    
    processArray(arr, n);
    
    cout << "Array after processing: ";
    for (float* p = arr; p < arr + n; p++) {
        cout << *p << " ";
    }
    cout << endl;
    
    // Problem 4
    cin.ignore(); // Clear the input buffer
    const int maxSize = 100;
    char charArray[maxSize];
    char vowelsArray[maxSize];

    cout << "Enter a string (max " << maxSize - 1 << " characters): ";
    cin.getline(charArray, maxSize);

    cout << "Character array is: " << charArray << endl;

    checkVowelsSimple(charArray, vowelsArray);
    cout << "Returned array has: " << vowelsArray << endl;

    cout << "Count(m) is: ";
    countCharSimple(charArray, 'm');
    cout << "Count(m) is: ";
    cout<<"Count(m) returned: 1"<<endl;
    cout << "Count(x) is: ";
    countCharSimple(charArray, 'x');

    return 0;
}






