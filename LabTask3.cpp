#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char chr;
int x,y,cb;
	cout<<"============================================ATM=================================================="<<endl<<endl<<endl;
int inp,temp;
temp=0;
cb=0;//it is current BALACNCE and zero for this question
for (int new1=0;new1<=1;new1++){
int attempt;
	++attempt;
	cout<<"======================================ENTER YOUR PIN============================================="<<endl<<endl<<endl;
	cout<<"======> ";
	cin>>x;
	cout<<endl<<endl<<endl;
    cout<<"======================================CONFIRM YOUR PIN==========================================="<<endl<<endl<<endl;
    cout<<"======> ";
	cin>>y;
	cout<<endl<<endl<<endl;
    	if (x==y){
	cout<<"========================================PIN ACCEPTED============================================="<<endl<<endl<<endl;
	 cout<<"=======================================YOUR BALANCE IS==> "<<cb<<"$ =========================="<<endl<<endl;
	cout<<"======PRESS 1===========================DEPOSIT MONEY============================================"<<endl<<endl;
	cout<<"======PRESS 2===========================WITHDRAW MONEY==========================================="<<endl<<endl;
	cout<<"======PRESS 3===========================TRANSFER MONEY==========================================="<<endl<<endl;
    cout<<"======> ";
    cin>>inp;
                 if (inp==1){
                 	cout<<"HOW MUCH MONEY YOU WANT TO DEPOSIT";
                 	  cout<<"======> ";
                 	  cin>>temp;
                 	  cb=temp;
                 	  if(temp>0){
                 	  	cout<<"          ======================MONEY DEPOSITED SUCESSFULLY======================== "<<endl<<endl             ;
					   }else{
					   	cout<<"          ====================== ERROR DEPOSITING MONEY============================" <<endl<<endl             ;
					   }
				 }else if(inp==2){
				 	
				 	
				 	
				 		cout<<"DO YOU WANT TO WITHDRAW ALL MONEY [Y/N]";
			cout<<"======> ";
                 	  cin>>chr;
                 	  
                 	            if(chr==78 || chr==110){ 
                 	            cout<<"HOW MUCH MONEY YOU WANT TO WITHDRAW";
				 	cout<<"======> ";
                 	  cin>>temp;
                 
                 	  if(temp>cb){
                 	  	cout<<"          ======================INSUFFICIENT FUNDS IN YOUR ACCOUNT================= " <<endl<<endl            ;
					   
					   }else{
					   	cout<<"          ======================MONEY WITHDRAWN SECCUSSFULLY======================= " <<endl<<endl            ;
						 cb=cb-temp;
						   }
					}else{
						if(cb<=0){
						                 	  	cout<<"          ======================INSUFFICIENT FUNDS IN YOUR ACCOUNT================= " <<endl<<endl            ;
	
						}else{
						cb=0;
							cout<<"          ======================All WITHDRAWN SECCUSSFULLY======================= " <<endl<<endl            ;
			}
					}
				 	
				 }else if(inp==3){
				 	cout<<"HOW MUCH YOU WANT TO TRANSFER"<<endl;
				 		cout<<"======> ";
                 	  cin>>temp;
                 	  if(temp>cb){
                 	  	cout<<"          ======================INSUFFICIENT FUNDS IN YOUR ACCOUNT================= " <<endl<<endl            ;
					   }else{
					   	cout<<"ENTER 11 DIGIT ACCOUNT NUMBER"<<endl;
					   		cout<<"======> ";
						   cin>>temp;
					   }
				 	
				 }
//		cout<<"DO YOU WANT TO USE ATM AGAIN [Y/N]";
//			cout<<"======> ";
//                 	  cin>>chr;
//                 	            if(chr==89 || chr==121){ 
//                 	            new1=0;
//                 	  	
//					            }  else{
//					        	new1=new1+10;
//					            }
	}
	
		else{
	cout<<"========================================PIN REJECTED==============================================="<<endl<<endl<<endl;
            } 
			
		cout<<"DO YOU WANT TO USE ATM AGAIN [Y/N]";
			cout<<"======> ";
                 	  cin>>chr;
                 	            if(chr==89 || chr==121){ 
                 	            new1=0;
                 	  	
					            }  else{
					        	new1=new1+10;
					            } 
                
}
	return 0;
}
