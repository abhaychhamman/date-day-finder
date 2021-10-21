
# include <stdio.h>
# include <string.h>
 
int main( )
{
  
    FILE *fp ;
     
   
    char data[50]
        = "this is abhay";
 
 
    fp = fopen("file_handling.txt", "w") ;
    
    if ( fp == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
       
        if ( strlen ( data ) > 0 )
        {
             
            
            fputs(data, fp) ;
            fputs("\n", fp) ;
        }
         
     
        fclose(fp) ;
         
        printf("Data successfully written in file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}