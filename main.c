#include "stdio.h"
int main ()
{

  int variant;
  int dop;

  printf ("Vvedite nomer lab: \n");
  scanf ("%d", &variant);
  printf("Vvedite 1 dlya osnovnoy raboty ili 2 dlya dopolnitelnoi: \n");
  scanf("%d", &dop);
  if (variant == 1){
	    if (dop == 1){
            lab1 ();
	    }
	    else if(dop == 2){
	        lab11 ();
	    }
	}
  else if (variant == 2){
        if (dop == 1){
            lab2 ();
	    }
	    else if(dop == 2){
	        lab21 ();
	    }
	}
  else if (variant == 3){
	 if (dop == 1){
            lab3 ();
	    }
	    else if(dop == 2){
	        lab31 ();
	    }
	}
  else if (variant == 4) {
	  if (dop == 1) {
	  	lab4 ();
	  }
	  else if(dop == 2){
	  	lab41 ();
	  }
  }
  else if (variant == 5){
	  if (dop == 1){
            lab5 ();
	    }
	    else if(dop == 2){
	        printf("Net dop zadaniya \n");

	    }
	}
  else if (variant == 6){
	  if (dop == 1){
            lab6 ();
	    }
	    else if(dop == 2){
	        lab61 ();
	    }
	}
  else if (variant == 7){
  	if (dop == 1){
  		lab7 ();
  	}
  	else if(dop == 2){
  		printf("Net dop zadaniya \n");

  	}
	}
  else
	{
	  printf("Takogo varianta net \n");
	}
	system("pause");
	return 0;
}
