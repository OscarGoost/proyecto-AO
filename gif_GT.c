#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;

        for (i;i<=100;i++){
                if (i%2==0){
		    /* Limpia la consola*/
                    system ("clear");
                    system ("toilet -F border --gay -f pagga \"Gatos y Tetas\"");
		    /* Espera un tiempo hasta ejecutar el siguiente comando*/
                    system ("sleep 0.5");
                }

                else{
                    system ("clear");
                    system ("toilet -F border --gay -f pagga \"Tetas y Gatos\"");
                    system ("sleep 0.5");
                }
	    }

	return EXIT_SUCCESS;
}
