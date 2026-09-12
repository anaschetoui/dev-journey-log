#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString S1;

    S1.Value = "Anas Chetoui";

    cout << "==============================\n";
    cout << "       clsString Library     \n";
    cout << "==============================\n\n";



    cout << "1. Print Each Letter Of Each Word\n";
    S1.PrintEachLetterOfWord();
    cout << endl;

    cout << "2. Upper First Letter Of Each Word: " << S1.UpperFirstLetterOfEachWord() << endl;


    cout << "3. Lower First Letter Of Each Word: " << S1.LowerFirstLetterOfEachWord() << endl;

    cout << "4. Uppercase: " << S1.UPPERCASE() << endl;

    cout << "5. Lowercase: " << S1.lowercase() << endl;


    cout << "6. Count Capital Letters: " << S1.CountCapitalLetters() << endl;


    cout << "7. Count Small Letters: " << S1.CountSmallLetters() << endl;


    cout << "8. Count Letter 'a': " << S1.CountLettersInString('a') << endl;

    cout << "9. Count 'a' Match Case: " << S1.CountInsensitiveCount('a', true) << endl;

    cout << "10. Count 'a' Ignore Case: " << S1.CountInsensitiveCount('a', false) << endl;


    cout << "11. Is 'a' a vowel? " << (clsString::IsVowel('a') ? "Yes" : "No") << endl;

    cout << "12. Is 'b' a vowel? " << (clsString::IsVowel('b') ? "Yes" : "No") << endl;

    cout << "13. Count Vowels: " << clsString::CountVowelsInString(S1.Value) << endl;

    cout << "14. ";
    S1.PrintAllVowels();
    cout << endl;

    cout << "15. Count Words: " << S1.CountEachWordInString() << endl;


    cout << "16. Split String:\n";

    vector<string> vWords = S1.vSplitString(" ");

    for (const string& Word : vWords)
    {
        cout << Word << endl;
    }


    S1.Value = "   Anas Chetoui   ";

    cout << "17. Trim Left: [" << S1.TrimLeft() << "]" << endl;

    cout << "18. Trim Right: [" << S1.TrimRight() << "]" << endl;

    cout << "19. Trim: ["<< S1.Trim() << "]" << endl;

    vector<string> vNames ={"Anas", "Chetoui", "C++" };

    cout << "20. Join Vector: " << clsString::JoinString(vNames, " ") << endl;



    string Names[] = {"Anas", "Chetoui", "Developer"};

    cout << "21. Join Array: " << S1.JoinString(Names, 3, " ") << endl;

    S1.Value = "Anas Chetoui C++";

    cout << "22. Reverse String: " << S1.ReverseString() << endl;



    cout << "23. Replace Words: " << S1.ReplaceWords("C++", "Programming") << endl;



    S1.Value = "Anas, Chetoui!";

    cout << "24. Remove Punctuations: " << S1.RemovePunctuations() << endl;



    cout << "\n==============================\n";
    cout << "      Static Functions        \n";
    cout << "==============================\n\n";

    string TestString = "anas chetoui";

    cout << "25. Static Upper First Letter: " << clsString::UpperFirstLetterOfEachWord(TestString) << endl;

    cout << "26. Static Lower First Letter: " << clsString::LowerFirstLetterOfEachWord(TestString) << endl;

    cout << "27. Static Uppercase: " << clsString::UPPERCASE(TestString) << endl;

    cout << "28. Static Lowercase: " << clsString::lowercase(TestString) << endl;

    cout << "29. Static Count Capital Letters: " << clsString::CountCapitalLetters(TestString) << endl;

    cout << "30. Static Count Small Letters: " << clsString::CountSmallLetters(TestString) << endl;

    cout << "31. Static Count Vowels: " << clsString::CountVowelsInString(TestString) << endl;

    cout << "32. Static Count Words: " << clsString::CountEachWordInString(TestString) << endl;

    cout << "33. Static Trim Left: [" << clsString::TrimLeft("   Anas") << "]" << endl;

    cout << "34. Static Trim Right: ["  << clsString::TrimRight("Anas   ") << "]" << endl;

    cout << "35. Static Trim: [" << clsString::Trim("   Anas   ") << "]" << endl;

    cout << "36. Static Reverse String: "  << clsString::ReverseString("Anas Chetoui C++") << endl;

    cout << "37. Static Replace Words: "  << clsString::ReplaceWords("Anas Likes C++", "C++", "Python", true)<< endl;

    system("pause>0");
    return 0;
}