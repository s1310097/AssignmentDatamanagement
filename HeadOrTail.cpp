#include <stdio.h>
#include <random>
#include <string>

using namespace std;

int main()
{
    random_device seed_generator;
    mt19937 engine(seed_generator());
    bernoulli_distribution distribution(0.5);
    int headsCounter = 0;
    int tailsCounter = 0;


    char str[100];

    printf("Who are you?\n");
    scanf("%99s", str);  // %99s を使ってバッファサイズを超えないようにする
    printf("Hello, %s!\n", str);

    printf("Tossing a coin...\n");

    for(int i = 0; i < 3 ; i++){
        printf("Round %d: ",i + 1);

        switch(distribution(engine))
        {
            case true:
                printf("Heads");
                headsCounter++;
                break;
            case false:
                printf("Tails");
                tailsCounter++;
                break;
        }

        printf("\n");

    }

    printf("Heads: %d, Tails: %d\n",headsCounter,tailsCounter);

    if(headsCounter > tailsCounter){
        printf("%s won!\n",str);
    } else if(headsCounter < tailsCounter){
        printf("%s lost\n",str);
    }
}

