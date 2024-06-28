#include <stdio.h>
#include <random>
#include <string>

using namespace std;

int main()
{
    char str[100];

    printf("Who are you?\n");
    scanf("%99s", str);  // %99s を使ってバッファサイズを超えないようにする
    printf("Hello, %s\n", str);

}

