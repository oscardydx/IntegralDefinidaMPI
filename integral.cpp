#include <iostream>
#include "mpi.h"

int main(int argc, char **argv){

    MPI_Init(&argc, &argv);

    int pid;
    int np; 

    MPI_Comm_size(MPI_COMM_WORLD, &np );
    MPI_Comm_rank(MPI_COMM_WORLD, &pid );

    MPI_Finalize();
    
    return 0;
}