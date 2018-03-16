void main()
{
    char s[100];
    int i,j,count=0,max=0,r,l;
    scanf("%[^\n]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
          if(s[i]==s[j])
           {
            count++;
           }
        }
        if(count>max)
        {
            r=s[i];
            max=count;
        }
    }
        printf("%c",r);
}
