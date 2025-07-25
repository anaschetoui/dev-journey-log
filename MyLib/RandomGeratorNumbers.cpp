// Use Srand function in the main function ----> srand((unsigned)time(NULL));
int RandomNumbers(int from,int to)
{
return rand()%(to-from+1)+from;

}
