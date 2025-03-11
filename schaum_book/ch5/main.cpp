#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


void suma_serie(int stopper, const char *loop_type);


int main(){
    suma_serie(5, "do_while");
    system("PAUSE");
    return 0;
}


void suma_serie(int stopper, const char *loop_type){

    if (strcmp(loop_type, "while") == 0)
    {
        int i=1;
        float result;
        while (i <= stopper){
            result = 1.0f / i;
            printf("Resultado de la serie 1/n con el loop while: %.4f\n", result);
            i++;
        }
    
    }
    else if (strcmp(loop_type, "for") == 0)
    {   
        for (int i=1; i<=stopper; ++i){
                     
            float result = 1.0f/i;
            printf("Resultado de la serie 1/n con el loop for: %.4f\n", result);
        }
    }
    else if (strcmp(loop_type, "do_while") == 0){
        int i=1;
        do
        {   
            float result = 1.0f/i;
            printf("Resultado de la serie 1/n con el loop while do_while: %.4f\n", result);
            i++;
                        
        } while (i<=stopper);        

    }
    else
    {
        printf("Tipo de bucle no reconocido.\n");
    }
    


}
