#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int a[3];
int The_date_you_want_day_plus_1[3];
int The_date_you_want_day_plus_2[3];
int The_date_you_want_day_plus_3[3];
int The_date_you_want_day_plus_4[3];

int month_plus_3_normal(int year, int month, int day){


   a[0] = year+ 1900;
   a[1] = month + 4;
   a[2] = day;

   return a[0], a[1], a[2];
}


int month_plus_3_exception1(int year, int month, int day){


   a[0] = year + 1900;
   a[1] = month + 5;
   a[2] = 1;

   return a[0], a[1], a[2];
}


int month_plus_3_exception2(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 1;
   a[2] = day;

   return a[0], a[1], a[2];
}


int month_plus_3_exception3(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 2;
   a[2] = day;

   return a[0], a[1], a[2];
}

int month_plus_3_exception4(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 3;
   a[2] = 1;

   return a[0], a[1], a[2];
}

int month_plus_3_exception5(int year, int month, int day){

	a[0] = year + 1901;
   a[1] = 3;
   a[2] = 2;

   return a[0], a[1], a[2];
}

int month_plus_3_exception6(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 3;
   a[2] = day;

   return a[0], a[1], a[2];
}


int month_plus_1_normal(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 2;
   a[2] = day;

   return a[0], a[1], a[2];
}

int month_plus_1_exception1(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 3;
   a[2] = 1;

   return a[0], a[1], a[2];
													
}

int month_plus_1_exception2(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 3;
   a[2] = 2;

   return a[0], a[1], a[2];
													
}

int month_plus_1_exception3(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 1;
   a[2] = day;

   return a[0], a[1], a[2];
}

int day_plus_7_normal(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 1;
   a[2] = day + 7;

   return a[0], a[1], a[2];

}

int day_plus_7_exception1(int year, int month, int day){

   if (day == 25) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 1;

      }

   if (day ==26) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 2;

      }

   if (day == 27) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 3;

      }

   if (day == 28) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 4;

      }

   if (day == 29) {
      a[0] = year + 1900;
      a[1] = month + 1;
      a[2] = 5;

      }

   if (day ==30) {
      a[0] = year+ 1900;
      a[1] = month + 2;
      a[2] = 6;

      }

   if (day == 31) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 7;

      }

   return a[0], a[1], a[2];

   }

int day_plus_7_exception2(int year, int month, int day){

   if (day == 24) {
      a[0] = year + 1900;
      a[1] = month + 2;
		a[2] = 1;

      }

   if (day == 25) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 2;
      }

   if (day == 26) {
      a[0] = year + 1900;
		a[1] = month + 2;
      a[2] = 3;
      }
   
   if (day == 27) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 4;
      }

   if (day == 28) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 5;
      }

   if (day == 29) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 6;
      }

   if (day == 30) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 7;
      }
	return a[0], a[1], a[2];												
}
												
int day_plus_7_exception3(int year, int month, int day){

   if (day == 23)  {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 1;
	}
	
   if (day == 24) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 2; 
	}		
		
   if (day == 25) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 3;
   } 
   
   if (day == 26) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 4;
   }
   
   if (day == 27) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 5;
   }
   
   if (day == 28) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 6;
   }
   
   if (day == 29) {
      a[0] = year + 1900;
      a[1] = month + 2;
      a[2] = 7;
      }
   return a[0], a[1], a[2];														
}
													
int day_plus_7_exception4(int year, int month, int day){

   if (day == 25) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 1;
	}   

   if (day == 26) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 2;
	}   

   if (day == 27) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 3;
   }

   if (day == 28) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 4;
   }   

   if (day == 29) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 5;
   }   

   if (day == 30) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 6;
   }   

   if (day == 31) {
      a[0] = year + 1901;
      a[1] = month + 2;
      a[2] = 7;
   }
   return a[0], a[1], a[2];
}														
/* day + 1 */

int day_plus_1_normal(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 1;
   a[2] = day + 1;

   return a[0], a[1], a[2];

}

int day_plus_1_exception1(int year, int month, int day){

   a[0] = year + 1900;
   a[1] = month + 2;
   a[2] = 1;

   return a[0], a[1], a[2];

}
														
int day_plus_1_exception2(int year, int month, int day){

   a[0] = year + 1901;
   a[1] = 1;
   a[2] = 1;

   return a[0], a[1], a[2];

}

int main() 
{

   time_t timer;
   struct tm  *this_time;

   timer = time(NULL);
   this_time = localtime(&timer);

   

/* day + 1*/

   if (this_time->tm_mon == 0 || this_time->tm_mon == 2 || this_time->tm_mon == 4 || this_time->tm_mon == 6 || this_time->tm_mon == 7 || this_time->tm_mon == 8 || this_time->tm_mon == 9) {

      if (this_time->tm_mday == 31) {
         day_plus_1_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];
   

      } else {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];
			
      }

      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);


   }

   if (this_time->tm_mon == 3 || this_time->tm_mon == 5 || this_time->tm_mon == 10) {

      if (this_time->tm_mday == 30) {
         day_plus_1_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 

            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

         


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);
   

      } else {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);

      }
   }
      
   if(this_time->tm_mon == 1) {

      if(this_time->tm_mday == 29) {
         day_plus_1_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

      


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);
   

      } else {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

      


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);

      }
   }

   if (this_time->tm_mon == 11) {

      if (this_time->tm_mday == 31) {
         day_plus_1_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

         


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);
   

	} else {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_1[2 - count] = a[2 - count];

         


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_1[0], The_date_you_want_day_plus_1[1], The_date_you_want_day_plus_1[2]);

      }
   }

/* day + 7 */

   if (this_time->tm_mon == 0 || this_time->tm_mon == 2 || this_time->tm_mon == 4 || this_time->tm_mon == 6 || this_time->tm_mon == 7 || this_time->tm_mon == 9) {

      if(this_time->tm_mday < 25) {

         day_plus_7_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);
   

      } else {

         day_plus_7_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

      


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);


      }
   }

   if (this_time->tm_mon == 3 || this_time->tm_mon == 5 || this_time->tm_mon == 8 || this_time->tm_mon == 0) {

      if (this_time->tm_mday < 24) {

         day_plus_7_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);
   

      } else {

         day_plus_7_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);


      }
   }

   if (this_time->tm_mon == 1) {

      if (this_time->tm_mday < 23) {

         day_plus_7_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--){

            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         }


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);
   

      } else {

         day_plus_7_exception3(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
         The_date_you_want_day_plus_2[2 - count] = a[2 - count];

      


									printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);
									
      }
								
   }

   if (this_time->tm_mon == 11) {

      if (this_time->tm_mday < 23) {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);
   

      } else {

         day_plus_1_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_2[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_2[0], The_date_you_want_day_plus_2[1], The_date_you_want_day_plus_2[2]);


      }
   }



/* month_+ 1*/


   if (this_time->tm_mon == 0) {

      if (this_time->tm_mday < 30) {

         day_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);
   

      } else if (this_time->tm_mday == 30) {

         day_plus_1_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
	     int count;
	     for(count = 2; count >= 0; count--)
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];



         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);

      } else {

         month_plus_1_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) {
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];

      }
											
   }



         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);


   }



   if (this_time->tm_mon == 2 || this_time->tm_mon == 4 || this_time->tm_mon == 9) {

      if (this_time->tm_mday < 31) {

         month_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];

         

         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);
   

      } else {

         month_plus_1_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];

         

         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);


      }

   }

   if (this_time->tm_mon == 3 || this_time->tm_mon == 5 || this_time->tm_mon == 6 || this_time->tm_mon == 7 || this_time->tm_mon == 8 || this_time->tm_mon == 10) {

      month_plus_1_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
      int count;
      for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_3[2 - count] = a[2 - count];
      


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);


   }


   if(this_time->tm_mon == 11){

      month_plus_1_exception3(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
      int count;
      for(count = 2; count >= 0; count--) 
         The_date_you_want_day_plus_3[2 - count] = a[2 - count];


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_3[0], The_date_you_want_day_plus_3[1], The_date_you_want_day_plus_3[2]);


   }


/* month + 3*/


   if(this_time->tm_mon ==11){

      month_plus_3_exception6(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
      int count;
      for(count = 2; count >= 0; count--)
         The_date_you_want_day_plus_4[2 - count] = a[2 - count];
      


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


   }


   if(this_time->tm_mon == 1 || this_time->tm_mon == 3 || this_time->tm_mon == 4 || this_time->tm_mon == 5 || this_time->tm_mon == 6 || this_time->tm_mon == 8) {

      month_plus_3_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
      int count;
      for(count = 2; count >= 0; count--) 
         The_date_you_want_day_plus_4[2 - count] = a[2 - count];
      


      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


   }

   if (this_time->tm_mon == 0 || this_time->tm_mon == 2 || this_time->tm_mon == 7) {
 
      if (this_time->tm_mon < 31) {

         month_plus_3_normal(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--)
            The_date_you_want_day_plus_4[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


      

      } else {

         month_plus_3_exception1(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--)
            The_date_you_want_day_plus_4[2 - count] = a[2 - count];
   
         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


      }
   }

   if (this_time->tm_mon == 9) {

         month_plus_3_exception2(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
            The_date_you_want_day_plus_4[2 - count] = a[2 - count];
   


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


   }

   if (this_time->tm_mon == 10) {

      if (this_time->tm_mday == 29) {

         month_plus_3_exception4(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for (count = 2; count >= 0; count--) 
   
            The_date_you_want_day_plus_4[2 - count] = a[2 - count];

         


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


      }

      if (this_time->tm_mday == 30) {

         month_plus_3_exception5(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
         int count;
         for(count = 2; count >= 0; count--) 
         The_date_you_want_day_plus_4[2 - count] = a[2 - count];


         printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


   
      } else {

      month_plus_3_exception3(this_time->tm_year, this_time->tm_mon, this_time->tm_mday);
      int count;
      for(count = 2; count >= 0; count--) 

         The_date_you_want_day_plus_4[2 - count] = a[2 - count];



      printf("%d\t%d\t%d\n", The_date_you_want_day_plus_4[0], The_date_you_want_day_plus_4[1], The_date_you_want_day_plus_4[2]);


      }
														
														
   }
   return 0;
}