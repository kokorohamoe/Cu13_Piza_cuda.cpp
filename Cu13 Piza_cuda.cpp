//Cu13 Piza_cuda.cpp
//Cu12 cpp cu combo test.cpp
//nvcc Main.cpp Sub.cu
//Makefile
//AWS deep smi

#if defined __CUDACC__ 
//ln -s Main.cc Cuda.cu
//nvcc -c Cuda.cu 
//g++ -c Main.cc
//g++ Main.o Cuda.o
#else
#endif
int main(int argv,char **argv){
    return (int)false;
}
