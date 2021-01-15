#include <iostream>
using namespace std;
int indexof(char* s, char c)
{ 
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return i;
}
}
return -1;
}
int main() {
char s[] = "helloworld";
cout << indexof(s, 'c');
return 0;
}

