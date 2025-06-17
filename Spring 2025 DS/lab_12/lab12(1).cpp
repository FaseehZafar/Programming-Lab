#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int arr[10]={0};
    int score=0;
    // Writing to the file
    ofstream ofile("output.txt");
    if(ofile.is_open())
    {
        cout << "File opened for writing." << endl;
        cout<<"Enter 10 scores:"<<endl;
        for(int i=0;i<10;i++)
        {
          cin>>score;
          ofile<<score<<" ";
         } 
        ofile.close();
    }
    else
    {
        cout << "Error opening file for writing." << endl;
    }

    // Reading from the file
    ifstream ffile("output.txt");
    string line;
    if(ffile.is_open())
    {
        cout << "File opened for reading." << endl;
        
        while(getline(ffile, line)) 
        {
            cout << line << endl;
        }
        ffile.close();
    }
    else
    {
        cout << "Error opening file for reading." << endl;
    }
    // Reading from the file to transfer it to arr
    ifstream ffile1("output.txt");
    string line2;
    if(ffile1.is_open())
    {
        cout << "File opened for reading." << endl;
        for(int i=0;i<10;i++)
        {
          ffile1>>arr[i];
        }
        
    }
    else
    {
        cout << "Error opening file for reading." << endl;
    }
     for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    ofstream ofile1("output.txt");
    if(ofile1.is_open())
    {
        cout << "File opened for writing." << endl;        
        for(int i=0;i<10;i++)
        {
          ofile1<<arr[i]<<" ";
        } 
        ofile.close();
    }
    else
    {
        cout << "Error opening file for writing." << endl;
    }
    cout<<"Top 5 in descending order is :"<<endl;
    for(int i=0;i<5;i++)
    {
      cout<<arr[i]<<" ";
    }  
    return 0;
}
