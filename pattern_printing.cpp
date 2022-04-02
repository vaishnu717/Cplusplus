#include<iostream>
using namespace std;
int main(){
int n;
cout<<"rectangle";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<"* ";
    }
  cout<<endl;
}
int rows,column;
cout<<"Empty rectangle";
cin>>rows>>column;
for(int i=1; i<=rows; i++)
    {
    	for(int j=1; j<=column; j++)
    	{
    		if (i==1 || i==rows || j==1 || j==column)
    		{
    			cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
int row1,col;
cout<<"inverted triangle";
cin>>row1>>col;
for(int p=1; p<=row1; p++)
    {
    for(int q=1; q<=col; q++)
    {
        if(p==1 || p==row1 || q==1 || q==col)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
    }

int b;
cout<<"Inverted pyramid";
cin>>b;
for(int r1=b;r1>=1;--r1){
    for(int c2=1;c2<=r1;c2++){
        cout<<"* ";
    }
    cout<<endl;

}
int o;
cout<<"pyramid";
cin>>o;
for(int k=1;k<=o;k++){
    for(int l=0;l<=k;l++){
        cout<<"* ";
    }
    cout<<endl;
}
int m;
cout<<"Numbered pyramid";
cin>>m;
for(int f=1;f<=m;f++){
    for(int v=1;v<=f;v++){
    cout<<v;
    }
    cout<<endl;
}

int aar;
cout<<"inverted pattern";
cin>>aar;
for(int w = aar; w>=aar; --w){
    for(int v = w ; v<=w; v++){
        cout<<w;
    } 
    cout<<endl;
}
int khu;
cin>>khu;  

for(int kh = 1; kh<=khu;kh++)  
{
    for(int hu=1; hu<=khu; hu++){
        int gum = khu-hu+1;     
        cout<<gum;
    }
    cout<<endl;
} 
int swa;
int count = 0;
cin>>swa;  

for(int sw = 1; sw<=swa;sw++)  
{
    for(int wa=1; wa<=swa; wa++){
        count = count + 1;     
        cout<<count;
    }
    cout<<endl;
} 

int n1;
int value = row1;
cout<<"say n1";
cin>>n1;
for(int row1= 1;row1<=n1;row1++){
    for(int col1 = 1;col1<=row1;col1++){
        cout<<value;
        value = value + 1;
    }
    cout<<endl;
}


return 0;
}