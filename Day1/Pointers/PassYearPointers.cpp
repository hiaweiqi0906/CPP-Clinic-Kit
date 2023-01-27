/*
(ii)    State the usage of C++ operator * and & while using a pointer.
(iii)   Given the following C++ declaration:                         
            char yes='%';             
            char *ptr = &yes;  
            
            What is the output for the following C++ statements? 
                cout << ptr; 
                
                cout  <<  *ptr;

(iv)   Given the following C++ program: 

    #include <iostream> 
    using namespace std; 
    int main (){   
        float ptr1,ptr2;    
        float sale,rate,commision,totalEarn;    
        cout << fixed << showpoint << setprecision(2);   
        cout << "Enter total sale: RM ";   
        cin >> sale;    ptr1 = sale; 
        //set ptr1 point to variable sale   
        rate = 0.2; // 20 %    
        ptr2 = &commision; set ptr2 point to variable commision   
        *ptr2 = *ptr1 * rate;    
        cout << "Sale: RM " << *ptr1 << endl;    
        cout << "Comission: RM " << *ptr2 << endl;    
        cout << "Total Earn: RM " << sale + commision << endl; 
    }    
        
    Note: ptr1 and ptr2 are pointers.    
    
    - Explain the errors that exist in the above program and correct the errors. 

    - Give the output of the program if the input is 45000. 
        
        
        
        (30/100)
*/