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
#if defined __CUDACC__ 
    #include <cuda_runtime.h>// additional cost $0.01
#endif


#if defined __CUDACC__
void kernel(int *dst,int *src){
}
int callKernel(){
    kernel<<<1000,1000>>>(dst,src);
}
#else
int callKernel();
#endif

#if !defined __CUDACC__
int main(int argv,char **argv){
#if defined CLANG
    printf("ln -s Cu13_Piza_cuda.cpp Cuda.cu\n");
    printf("nvcc -c Cuda.cu\n");
    printf("ln -s Cu13_Piza_cuda.cpp Maub.cc\n");
    std::cout <<"g++ -c Main.cc\n"<<std::flush;
    std::cout <<"gcc Main.o Cuda.o"<<std::endl;
#else
    callKernel();
#endif
    return (int)false;
}
#endif