
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n = 1, m;

for (int i = 1; i <= 10; i++){

        for (int i = 1; i <= 10; i++)

            {

                m = n * i;
                
            printf("\n%d * %d = %d", n, i, m);
            
            }

    printf("\n");

    n = n + 1;
    }

return 0; 

}
