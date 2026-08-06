proc IsAinV(int n,intvec V)
{
    int i;
    for (i=1;i<=size(V);i=i+1)
    {
        if (V[i]==n)
        {
            return (1)
        }
    }
    return(0);
}
proc randvec(int n,int NMAX)
{    
    intvec R=0:0;
    int i,jr;
    for(i=1;i<=n;i=i+1)
    {
        jr=random(1,NMAX);
        while (size(R)<i)
        {
            if (IsAinV(jr,R)==0)
            {
                R=R,jr;
            }
        }
    }
    return(R);
}

proc shuffle(intvec a, int n)
{
    int i,j,tmp;
    for (int i = n ; i >=1; i=i-1) 
    {
        j = random(1,i);
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    return (a)
}
