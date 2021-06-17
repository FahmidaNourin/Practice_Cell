#include<stdio.h>
#include<string.h>
int main()
{
 char str1[100],str2[100];

 int spc1=0,v1=0,con1=0,spc2=0,con2=0,v2=0,i=0;

 printf("Enter the first sentence: ");
 gets(str1);
 printf("Enter the second sentence: ");
 gets(str2);

 while(str1[i]!='\0')
{
    if(str1[i]==' ')
    {
        spc1++;
    }
    else if(str1[i]=='A' || str1[i]=='E'|| str1[i]=='I'|| str1[i]=='O'|| str1[i]=='U'|| str1[i]=='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'){
        v1++;
    }
    else
    {
    con1++;
    }
    i++;
}

    i=0;
    while(str2[i]!='\0')
{
    if(str2[i]==' ')
    {
        spc2++;
    }
    else if(str2[i]=='A' || str2[i]=='E'|| str2[i]=='I'|| str2[i]=='O'|| str2[i]=='U'|| str2[i]=='a'|| str2[i]=='e'|| str2[i]=='i'|| str2[i]=='o'|| str2[i]=='u'){
        v2++;
    }
    else
    {
    con2++;
    }
i++;

}


if(spc1==spc2 && v1==v2 && con1==con2){
    printf("YES");
}
else{
    printf("NO");
}

}
