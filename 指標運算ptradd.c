#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	int a=3, b=6, c=9, *ptr;
	printf(" Expression   (Address) = Content \n ");
	printf("===========  =========   ======= \n");
	printf("      &a      (%d) = %d\n",&a,a);	/* a位址為1245064 */
	printf("      &b      (%d) = %d\n",&b,b);  /* b位址為1245060 */
	printf("      &c      (%d) = %d\n",&c,c);  /* c位址為=1245056 */
	ptr=&a;		/* ptr裡面存放a 的位址=1245064 */
    /* 顯示ptr的內容=1245064 */
	printf("     ptr=&a     (ptr)   = %d\n",ptr); 
    /* ptr指到a位址，顯示3*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
	ptr-=2;	/* ptr存放的位址減8,  ptr裡面的位址變成1245056 */
    /* 顯示ptr的內容=1245056 */
	printf("     ptr-=2     (ptr)   = %d\n",ptr);  
    /* ptr指到c位址，顯示9*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
	ptr++;  	/* ptr存放的位址加4,  ptr裡面的位址變成1245060 */
    /* 顯示ptr的內容=1245060 */
	printf("     ptr++      (ptr)   = %d\n", ptr);  
    /* ptr指到b位址，顯示6*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
    system("PAUSE");	
    return 0;
}
