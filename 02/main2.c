#include <time.h> // zawiera clock_t i clocks_per_sec
#include <stdio.h> // zawiera printf
#include <unistd.h> // zawiera sleep (int)

int main(){
    time_t begin, end;
    time(&begin);
    sleep(2.75);
    time(&end);
    double duration_sec = difftime(end, begin);
    // obciete do liczby calkowitej
    printf("Czas trwania = %f\n", duration_sec);
    return 0;
}