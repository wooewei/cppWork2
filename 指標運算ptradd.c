#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  	int a=3, b=6, c=9, *ptr;
	printf(" Expression   (Address) = Content \n ");
	printf("===========  =========   ======= \n");
	printf("      &a      (%d) = %d\n",&a,a);	/* a��}��1245064 */
	printf("      &b      (%d) = %d\n",&b,b);  /* b��}��1245060 */
	printf("      &c      (%d) = %d\n",&c,c);  /* c��}��=1245056 */
	ptr=&a;		/* ptr�̭��s��a ����}=1245064 */
    /* ���ptr�����e=1245064 */
	printf("     ptr=&a     (ptr)   = %d\n",ptr); 
    /* ptr����a��}�A���3*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
	ptr-=2;	/* ptr�s�񪺦�}��8,  ptr�̭�����}�ܦ�1245056 */
    /* ���ptr�����e=1245056 */
	printf("     ptr-=2     (ptr)   = %d\n",ptr);  
    /* ptr����c��}�A���9*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
	ptr++;  	/* ptr�s�񪺦�}�[4,  ptr�̭�����}�ܦ�1245060 */
    /* ���ptr�����e=1245060 */
	printf("     ptr++      (ptr)   = %d\n", ptr);  
    /* ptr����b��}�A���6*/
	printf("     *ptr       (*ptr)  = %d\n", *ptr); 
    system("PAUSE");	
    return 0;
}
