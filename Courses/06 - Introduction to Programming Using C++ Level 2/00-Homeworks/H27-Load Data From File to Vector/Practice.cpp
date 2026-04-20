/*
### 🧱 C++ Challenge: The File-to-Memory Porter
**Goal:** Practice the "Mastering Technique" of loading permanent file data into a dynamic Vector for processing.

**Scenario:** You have a file named `Proverbs.txt` containing several English quotes. You need to "load" these quotes into your program's memory (RAM) so you can count them and display them.

**Requirements:**
1. **Preparation:** Create a text file named `Proverbs.txt` manually and put at least 5 different lines in it.
2. **Library Setup:** Include `<iostream>`, `<fstream>`, `<string>`, and `<vector>`.
3. **The Function:** Create a function named `LoadFileToVector`:
   - **Parameters:** It must take the `FileName` (string) and a `vector<string>` **by reference** (`&`).
   - **Logic:** - Open the file in **Read Mode** (`ios::in`).
     - Check if the file is open.
     - Use a `while` loop with `getline` to read the file line by line.
     - Inside the loop, use `.push_back()` to add each line into your vector.
     - Close the file.
4. **The Main:** - Define an empty `vector<string> vFileContent` in the `main()`.
   - Call your function to load the data.
   - After loading, print: "Total records loaded: [Vector Size]".
   - Use a loop to print all elements of the vector to the screen to verify the data.

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void LoadFileToVector(string Filename, vector <string>& FileContent)
{
    fstream MyFile;

    MyFile.open(Filename, ios::in);


    string Line;
    if (MyFile.is_open())
    {
        while (getline(MyFile, Line))
        {
            FileContent.push_back(Line);
        }

        MyFile.close();
    }

}

int main()
{
    vector <string> FileContent;

    LoadFileToVector("Proverbs.txt", FileContent);

    cout << "Total records loaded: [" << FileContent.size() << "]\n\n";

    for (string& Line : FileContent)
    {
        cout << Line << endl;
    }

    return 0;
}