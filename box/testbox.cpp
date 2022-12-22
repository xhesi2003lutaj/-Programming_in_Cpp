#include "Box.h"
int main(){
	double height;
	double width;
	double depth;

	int n,i;
	cin>>n;
	Boxes *list;
	list=new Boxes[2*n];
	for(i=0;i<n;i++){
		cout<<"enter height "<<i+1<<": ";
		cin>>height;
		list[i].setheight(height);
		cout<<"enter width "<<i+1<<": ";
		cin>>width;
		list[i].setwidth(width);
		cout<<"enter depth "<<i+1<<": ";
		cin>>depth;
		list[i].setdepth(depth);
		cout<<"Volume of Box "<<i+1<<" = "<<list[i].volume()<<endl;
		Boxes b(list[i]);//
		list[i+n] = b;


	}
	cout<<endl;
	cout<<endl;
	cout<<"THe result of the copy constructor:\n";
	
	 for(i=n; i<(2*n); i++){
		cout<<"Volume of Box "<<i+1<<" = "<<list[i].volume()<<endl;
	 }
	 delete [] list;
	
	return 0;
}

// int main()           or
// {
//     int n,i;
//     double h,w,d;

//     cout<<"Enter the number of boxes: "<<endl;
//     cin>>n;

//     Boxes *list = new Boxes[2*n];
//     for(i=0; i<n; i++)
//     {
//         cout<<"Enter the height of box "<<i+1<<":"<<endl;
//         cin>>h;
//         list[i].setheight(h);

//         cout<<"Enter the width of box "<<i+1<<":"<<endl;
//         cin>>w;
//         list[i].setwidth(w);

//         cout<<"Enter the depth of box "<<i+1<<":"<<endl;
//         cin>>d;
//         list[i].setdepth(d);
	
//     }

//     for(i=n;i<2*n;i++){
// 		list[i]=list[i-n];
// 	}

//     for(i=0; i<2*n; i++)
//     {
//         cout<<"Volume of box "<<i+1<<" is "<<list[i].volume()<<endl;
//     }

//     delete []list;
//     return 0;
// }