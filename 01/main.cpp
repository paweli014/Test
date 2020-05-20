#include <iostream>
#include <omp.h>

using namespace std;

int main(){
    #pragma omp parallel num_threads(2)
    {
    int ID =  omp_get_thread_num();
    cout << "Watek nr " << ID << endl;
    }

}