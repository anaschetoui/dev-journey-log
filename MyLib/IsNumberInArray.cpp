short FindNumberPositionInArray(int Number, int arr[100], int
arrLength) 
{ 
 
 for (int i = 0; i < arrLength; i++) 
 { 
 if (arr[i] == Number) 
 return i;//return the index
 } 
 //if you reached here, this means the number is not found
 return -1; 
} 
bool IsNumberInArray(int Number, int arr[100], int arrLength) 
{ 
 return FindNumberPositionInArray(Number, arr, arrLength) != -1; 
} 
