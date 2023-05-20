///Conversione sequenza genica
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000


char * matrix[2][64]= 
    { 
        {"UUU","UUC","UUA","UUG","CUU","CUC","CUA","CUG","AUU","AUC","AUA","AUG","GUU","GUC","GUA","GUG","UCU","UCC","UCA","UCG","CCU","CCC","CCA","CCG","ACU","ACC","ACA","ACG","GCU","GCC","GCA","GCG","UAU","UAC","UAA","UAG","CAU","CAC","CAA","CAG","AAU","AAC","AAA","AAG","GAU","GAC","GAA","GAG","UGU","UGC","UGA","UGG","CGU","CGC","CGA","CGG","AGU","AGC","AGA","AGG","GGU","GC","GGA","GGG"},
        {"F","F","L","L","L","L","L","L","I","I","I","M","V","V","V","V","S","S","S","S","P","P","P","P","T","T","T","T","A","A","A","A","Y","Y"," STOP "," STOP ","H","H","Q","Q","N","N","K","K","D","D","E","E","C","C"," STOP ","W","R","R","R","R","S","S","R","R","G","G","G","G"}
    };

void DNA_to_mRNA (int lenght, char gene[]);
int conversione(int lenght, char gene[]);
int stop(int lenght, char gene[],int c);
void life_function (int start,int stop,char gene[]);
int main ()

{
    long long int lenght;
    long long int conversion;
    long long int ferma;

    printf("BENVENUTO DOTT/DOTT.SSA \n Per effetturare l'analisi della sequenza genica va modificato il file prova.txt inserendo al suo interno solo ed esclusivamente la seqeuenza genica \n Al termine dell'analisi sarà stampata la sequenza amminoacidica \n Buon Lavoro \n" );
    
    
   
    char gene[MAX];
    FILE *fptr;
    if ((fptr = fopen("test.txt", "r")) == NULL) {
        printf("Error! File cannot be opened.");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", gene);
    fclose(fptr);


    lenght = strlen(gene);
    //printf("%s\n", "inserisci stringa di un gene da convertire in mRNA");
        
    DNA_to_mRNA(lenght,gene);
    printf("%s\n%s\n","Sequenza di mRNA", gene);  
    conversion = conversione(lenght,gene);   
    ferma = stop(lenght,gene,conversion);   
    life_function(conversion,ferma,gene);

    printf(" \nPuoi ricavare la proteina corrispondente usando la sequenza amminoacidica usando SMART BLAST al seguente link :https://blast.ncbi.nlm.nih.gov/smartblast/?LINK_LOC=BlastHomeLink");
    

}






void DNA_to_mRNA (int lenght, char gene[])
{
    for (int i=0; i<=lenght; i++)
    {
        if( gene[i] == 'T' )
        {
            gene[i] = 'U';
            
        }
        
    }
}


int conversione(int lenght, char gene[])
{
    int p_cstart;
    int c_start=0;
    int i=0;
    while (c_start == 0)
    {
        if(gene[i]== 'A' && gene[i+1] == 'U' && gene[i+2]=='G')
        {
            printf("%s%d\n", "Trovato codone di start in posizione ", i);
            
            p_cstart = i;
            c_start = 1;
            break;
        
        }
        i=i+3;
    }
    return p_cstart;
}



int stop(int lenght, char gene[], int c)
{
    int p_cstop;
    for(c; c<=lenght; c=c+3)
    {
        if(gene[c]== 'U' && gene[c+1] == 'G' && gene[c+2]=='A' || gene[c]== 'U' && gene[c+1] == 'A' && gene[c+2]=='A' || gene[c]== 'U' && gene[c+1] == 'A' && gene[c+2]=='G')
        {
            printf("%s%d\n", "Trovato codone di stop in posizione ", c);
            printf("%s\n","Incomincio la conversione:");
            p_cstop = c;
            break;
        
        }
    }
    return p_cstop;
}


void life_function (int start,int stop,char gene[])
{
    char a[MAX];
    int x;
    for(start;start<=stop;start=start+3)
    {
        a[0] = gene[start];
        a[1]= gene[start+1];
        a[2]=gene[start+2];
        //printf("%s\n",a);
        for(int k=0;k<64;k++)
        {
            x=strcmp(a,matrix[0][k]);
            if(x==0)
            {
            printf("%s",matrix[1][k]);
            }
        }
    }
}
