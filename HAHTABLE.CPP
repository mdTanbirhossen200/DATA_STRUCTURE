/// NAME OF ALLAH

#include<bits\stdc++.h>
#include<conio.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tsize;

int hasht(int key)
{
    int i ;
    i = key%tsize ;
    return i;
}

//-------LINEAR PROBING-------
int rehashl(int key)
{
    int i ;
    i = (key+1)%tsize ;
    return i ;
}

//-------QUADRATIC PROBING-------
int rehashq(int key, int j)
{
    int i ;
    i = (key+(j*j))%tsize ;
    return i ;
}

void main()
{
    int key,arr[20],hash[20],i,n,s,op,j,k ;
    //clrscr() ;
    printf ("Enter the size of the hash table:  ");
    cin>>tsize;

    cout<<"\nEnter the number of element :";
    cin>>n;

    for (i=0; i<tsize; i++)
        hash[i]=-1 ;

    cout<<"Enter Elements: ";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    do
    {
        cout<<"\n\n1.Linear Probing\n2.Quadratic Probing \n3.Exit \nEnter your option: ";
        
        cin>>op;
        switch(op)
        {
        case 1:
            for (i=0; i<tsize; i++)
                hash[i]=-1 ;

            for(k=0; k<n; k++)
            {
                key=arr[k] ;
                i = hasht(key);
                while (hash[i]!=-1)
                {

                    i = rehashl(i);

                }

                hash[i]=key ;

            }

            cout<<"\nThe elements in the array are: ";
            for (i=0; i<tsize; i++)

            {
                cout<<"\nElement at position "<<i<<hash[i]<<endl;
            }

            break ;

        case 2:
            for (i=0; i<tsize; i++)
                hash[i]=-1 ;

            for(k=0; k<n; k++)
            {


                j=1;

                key=arr[k] ;
                i = hasht(key);
                while (hash[i]!=-1)
                {
                    i = rehashq(i,j);
                    j++ ;
                }
                hash[i]=key ;
            }
            cout<<"\nThe elements in the array are: ";
            for (i=0; i<tsize; i++)
            {
                cout<<"Elemet at position: "<<i<<hash[i];
            }
            break ;

        }
    }
    while(op!=3);

    getch() ;
}
