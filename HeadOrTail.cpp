#include <stdio.h>
#include <random>

using namespace std;

int main()
{
    random_device seed_generator;
    mt19937 engine(seed_generator());
    bernoulli_distribution distribution(0.5);
    int headsCounter = 0;
    int tailsCounter = 0;


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
    if(headsCounter > tailsCounter){
        printf("You won\n");
    } else if(headsCounter < tailsCounter){
        printf("You lost\n");
    }

    printf("Heads: %d, Tails: %d\n",headsCounter,tailsCounter);
}

