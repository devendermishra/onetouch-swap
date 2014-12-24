#ifdef WIN32
#include <Windows.h>

/*
    Link with user32.lib
    Compile it as follows:
    cl swapmouse_win.c user32.lib
    
    When this program will run, it will swap the mouse button.
*/
int main(){

	printf("Author: Devender Mishra\n");
	printf("Program to swap mouse button\n");
	
	if(SwapMouseButton(TRUE)){
		SwapMouseButton(FALSE);
	}
	
	return 0;
}
#endif
