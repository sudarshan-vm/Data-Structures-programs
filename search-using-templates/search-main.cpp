#include"search-dec.h"
int main()
{
   int n,ch;
    int key;
    double key2;
    char key3;
    
   while(1){
       cout<<"Enter the type:\n 1:INTEGER\n2:DOUBLE\n3:CHARACTER\n4:EXIT\n";
       cin>>ch;
       switch(ch)
       {
           case 1: {
   cout<<"Entert the size of array: \n";
   cin>>n;
   int a[n];
   cout<<"Enter the elements: \n";
   for(int i=0;i<=n-1;i++)
   cin>>a[i];
   
   cout<<"Enter the element to be searched for: \n";
   cin>>key;
   if(!search(a,key,n))
   cout<<"Element is not found!\n";
   else 
   cout<<"Element is found!\n";}
   break;
           

 case 2: {
   cout<<"Entert the size of array: \n";
   cin>>n;
   double d[n];
   cout<<"Enter the elements: \n";
   for(int i=0;i<=n-1;i++)
   cin>>d[i];
   
   cout<<"Enter the element to be sarched for: \n";
   cin>>key2;
   if(!search(d,key2,n))
   cout<<"Element is not found!\n";
   else 
   cout<<"Element is found!\n";}
   break;
   
    case 3: {
   cout<<"Entert the size of array: \n";
   cin>>n;
   char c[n];
   cout<<"Enter the elements: \n";
   for(int i=0;i<=n-1;i++)
   cin>>c[i];

   cout<<"Enter the element to be sarched for: \n";
   cin>>key3;
   if(!search(c,key3,n))
   cout<<"Element is not found!\n";
   else 
   cout<<"Element is found!\n";}
   break;
    case 4: exit(0);       
                   
       }

    

   }
   
    
    
    
    return 0;
}