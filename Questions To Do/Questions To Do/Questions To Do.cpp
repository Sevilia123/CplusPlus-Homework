// Questions To Do.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib>


//double WeightAverage(float x[], float w[], int size)
//{//Question 1
//    double a = 0.0;
//    double b = 0.0;
//
//    for (size_t i = 0; i < size; i++) {
//        a += x[i] * w[i];
//        b += w[i];
//    }
//
//    return a / b;
//}
//bool IsArithmeticProgression(int* arr, int size) {
//    //Question 2
//    if (size < 3) {
//        cout << "Must be at least 3 numbers" << endl;
//        return false;
//    }
//
//    int d = arr[1] - arr[0]; // מחשב את ההפרש הראשון בין שני האיברים הראשונים
//
//    for (int i = 2; i < size; i++) {
//        if (arr[i] - arr[i - 1] != d) {
//            return false; // ההפרש בין שני האיברים הרצוניים אינו קבוע
//        }
//    }
//
//    return true; // המערך הוא סדרה חשבונית
//}
char** words(char* sentce, int& size)   {
    char temp[100];
    char** word;
    int count = 1;
    for (int i = 0;sentce[i] != '\0';i++) {
        if (sentce[i] == ' ')count++;
    }
    size = count;
    word = new char* [count];
    count = 0;
    for (int i = 0, j = 0;sentce[i] != '\0';i++) {
        while (sentce[i]!=' ' && sentce!='\0')
        {
            temp[j] = sentce[i];
            i++;
            j++;
        }
        temp[j] = '\0';
        j = 0;
        word[count] = new char[strlen(temp) + 1];
        strcpy(word[count], temp);
        count++;
    }
    return word;
}
char* doubleWord(char* sentence) {
    int size = strlen(sentence);
    int fullSize = size * 2;
    char desentece[100];
    for (int i = 0; i < size;i++) {
        desentece[i] = sentence[i];
        desentece[i + size] = sentence[i];
    }
    desentece[fullSize] = '\0';
    delete[] sentence;
    sentence = new char(fullSize + 1);
    strcpy(sentence, desentece);
    return sentence;
}

int main()
{
 //Question 1
// חישוב ממוצע המשקלים
    //float x[] = { 2, 3, 4, 5 };
    //float y[] = { 0.2, 0.3, 0.4, 0.5 };
    //int i = sizeof(x) / sizeof(x[0]);
    //double c = WeightAverage(x, y, i);
    //cout << c << endl;

//Question 2
 //פונקציה לבדיקה אם המערך הוא סדרה חשבונית


    //int size;
    //cout << "How many numbers?";
    //cin >> size;

    //int* arr = new int[size];

    //cout << "Put " << size << " Numbers to the array" << endl;
    //for (int i = 0; i < size; i++) {
    //    cin >> arr[i];
    //}

    //bool isAP = IsArithmeticProgression(arr, size);

    //if (isAP) {
    //    cout << "The array are an arithmetic seris" <<endl;
    //}
    //else {
    //    cout << "The array are not an arithmetic seris." << endl;
    //}

    //delete[] arr; // שחרור את המערך

//Question 3
    char blabla[99] = "lola boba ahaha kfj";
    char** sentence;
    int size;
    sentence = words(blabla, size);
    for (int i = 0;i < size;i++) {
        sentence[i] = doubleWord(sentence[i]);
        cout << sentence[i] << endl;
        delete[] sentence[i];
    }
    delete[] sentence;

    return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
