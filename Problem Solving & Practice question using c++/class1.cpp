#include<iostream>
using namespace std;
int main(){

                                        /*  *****
                                            *****
                                            *****
                                            *****
                                            *****  */

/*    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<"*";
        }
        cout<<endl;  
    }*/
                                        /*  11111
                                            22222
                                            33333
                                            44444
                                            55555   */

/*    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<i;
        }
        cout<<endl;
    }*/



                                /*  55555
                                    44444
                                    33333
                                    22222
                                    11111  */


/*   for(int i=5; i>=1; i--){
        for(int j=5; j>=1; j--){
            cout<<i;
        }
        cout<<endl;
    } */


                                /*  12345
                                    678910
                                    1112131415
                                    1617181920
                                    2122232425 */

/*	int n=5, k=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<k++;
		}
		cout<<endl;
	} */



								/*  13579
									1113151719
									2123252729
									3133353739
									4143454749 */
	
/*	int n=5, k=1;;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n;j++){
			cout<<k;
			k=k+2;
		}
		cout<<endl;
	}  */


							/*  246810
								121411820
								2224262830
								3234363840
								4244464850 */	
	
/*	int n=5, k=2;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n;j++){
			cout<<k;
			k=k+2;
		}
		cout<<endl;
	} */

						/*  12345
							246810
							3691215
							48121620
							510152025 */
/*	int n=5;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<(i*j);
		}
		cout<<endl;
	}*/


	                    /*  111213
							212223
							313233
							414243
							515253 */	
	
/*	for(int i=1; i<=5; i++){
		for(int j=1; j<=3; j++){
			cout<<i<<j;
		}
		cout<<endl;
	} */

						/*  112131
                            122232
                            132333
                            142434
                            152535
                                     */	
	
/*	for(int i=1; i<=5; i++){
		for(int j=1; j<=3; j++){
			cout<<j<<i;
		}
		cout<<endl;
	} */


	
					/*  16111621
						27121722
						38131823
						49141924
						510152025
                                	*/	
	
/*	int n=5;
	int x;
	for(int i=1; i<=n; i++){
		x=i;
		for(int j=1; j<=n; j++){
			cout<<x;
			x = x + n;
		}
		cout<<endl;
	}  */


					/*  110112021
						29121922
						38131823
						47141724
						56151625
                                	*/	
	
/*	int n=5;
	int x,y;
	
	for(int i=1; i<=n; i++){
		x=i;
		y=n-i+1;
		
		for(int j=1; j<=n; j++){
			if(j%2==1){
				cout<<x<<" ";
			}
			else{
				cout<<y<<" ";
			}
			x = x+n;
			y = y+n;
		}
		cout<<endl;
	} */	


					/*  510152015
						49141924
						38131823
						271217122
						16111621
                                	*/	
	
/*	int k=5;
	int x;
	for(int i=1; i<=5; i++){
		x = k-i+1;
		for(int j=1; j<=5; j++){
			cout<<x;
			x+=k;
		
		}cout<<endl;
	}*/


					/*  110112021
						29121922
						38131823
						47141724
						56151625   */
                                	
	
/*	int n=5;
	int x,y;
	
	for(int i=1; i<=n; i++){
		x=i;
		y=n-i+1;
		
		for(int j=1; j<=n; j++){
			if(j%2==0){
				cout<<x<<" ";
			}
			else{
				cout<<y<<" ";
			}
			x = x+n;
			y = y+n;
		}
		cout<<endl;
	} */

					/*  13579
						357911
						5791113
						79111315
						911131517
                                */	
	

/*	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			
			cout<<(2*(i+j)-3)<<" ";
		}
		cout<<endl;
	}	*/















return 0;





















}