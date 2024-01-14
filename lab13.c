#include<stdio.h>

/*int alan(int x)
{
    int alan;
    alan=x*4;
    return alan;
}
int main()
{ 
    int x;
    printf("lutfen karenin bir kenarini giriniz\n");
    scanf("%d",&x);
    printf("%d",alan(x));
}*/



/*int ibrahim();



int main()
{
    int a,b,c,d,e;  
    printf("lutfen sayilari giriniz\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    printf("sonucumuz esittir:%d",ibrahim(a,b,c,d,e));

}


int ibrahim(int x,int y,int z,int w,int t)
{
    int top;
    float ort;
    top=x+y+z+w+t;
    ort=top/5;
    return ort;
}*/



/*int main()
{
    int sayi;
    printf("%d",ahmet(sayi));
}


void ahmet(int a)
{
     int sayi;
    printf("lutfen sayi giriniz\n");
    scanf("%d",&sayi);
    if(a%2==0)
    {
        printf("sayimiz cift sayidir\n");
    }
    else printf("sayimiz tek sayidir");
}*/
/*int ahmet();
int main()
{
char dizi[100];
printf("lutfen cumleyi giriniz\n");
gets(dizi);
printf("%d",ahmet(dizi,100));
}
int ahmet(char dizi[],int size)
{
    int i,uzunluk=1;
    for(i=0;i<size;i++)
    {
        if(dizi[i]==' ')
        {
            uzunluk++;
        }
    }
    return uzunluk;
}*/


/*int ahmet();

int main()
{
    char dizi[100];
    printf("lutfen cumleyi giriniz\n");
    gets(dizi);
    printf("%d",ahmet(dizi,100));
}
int ahmet(char dizi[],int c)
{
    int i,j;
    for(i=0;dizi[i]!='\0';i++)
    {
        while(!(dizi[i]>='a'&& dizi[i]<='z'))
        {
            for(j=0;dizi[j]!='\0';j++)
            {
                dizi[j]=dizi[j+1];
            }
            dizi[j]='\0';
        }
    }
    return dizi[j];
}*/

/*int ahmet();
int main()
{
    char dizi[100];
    printf("lutfen kelime giriniz\n");
    gets(dizi);
    printf("%d",ahmet(dizi,100));
}
int ahmet(char dizi[],int k)
{
    int i,seslis=0;
    for(i=0;i<k;i++)
    {
        if(dizi[i]=='a' || dizi[i]=='e' ||dizi[i]== 'i' ||dizi[i] =='o'||dizi[i]== 'u')
        {
            seslis++;
        }
        
    }
    dizi[k]='\0';
    return seslis;
}*/


/*int main()

{

    int on;
    int n=0,i,s1=0;
    int dizi[n];
    printf("lutfen ögrenci numaranizi giriniz\n");
    scanf("%d",&on);
    for(i=0;on>0;i++)
    {
        s1=on%10;
        on=on/10;
        n=n+s1;
    }
   for(i=0;i<n;i++)
   {
    scanf("%d",&dizi[i]);
    if(dizi[i]%3==0)
    {
        printf("%d.eleman:%d\n",i+1,dizi[i]);
    }
    else
    {
        printf("%d.eleman:%d\n",n-1-i,dizi[i]);
    }
   }
   
}*/
/*int main()
{
    int n=10,i,c,temp;
    int dizi[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    c=n/2;
    for(i=0;i<c;i++)
    {
        temp=dizi[i];
        dizi[i]=dizi[n-1-i];
        dizi[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("%d",dizi[i]);
    }
}*/

/*int main()
{
    int sayi,i,b1;
    printf("lutfen sayiyi giriniz\n");
    scanf("%d",&sayi);
    if(sayi>99999)
    {
        printf("lutfen 5 basamakli bir sayi giriniz\n");
        scanf("%d",&sayi);
    }
    for(i=0;sayi>0;i++)
    {
        b1=sayi%10;
        sayi=sayi/10;
        printf("%d\n",b1);
    }
    b1=0;
}*/
int main()
{
    int dizi[10];
    int karesi[10];
    int i,kare=0,j=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
        if(dizi[i]==-1)
        {
            break;
        }
        karesi=dizi[i]*dizi[i];
        printf("%d\n",karesi);
        j++;
    }
    for(j=0;j<10;j++)
    {
        printf("%d",kare);
    }
}


