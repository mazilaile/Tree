#include "splay.h"
#include <stdio.h>
#define NumItems 500

main( )
{
    SplayTree T;
    SplayTree P;
    int i;
    int j = 0;

	int a[10]={16,18,13,15,24,20,30,25,5,12};

    T = Initialize( );
    T = MakeEmpty( T );

	for(i=0;i<10;i++)
	{
		T = Insert( a[i], T );
		PrintTree( T );
		printf("\n");
	}
	

    T = Find( 19, T );
	printf("\n");
     
    
	system("pause");

 
    return 0;
}
