#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int row = 0;
    int col = 0;
    int ascii = 0;
    string str = "";
 
    cout<< "Enter a password." <<endl;
    cin >> str;
    
    for(int i = 0; i<str.length(); i++){
        ascii = (int)str[i];//gets ascii value from char
        row++;//interates every char
        
        if(col == 0 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 0 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 9;
        if(col == 0 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 13;

        if(col == 1 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 1 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 1 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 6;
            
        if(col == 2 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 2 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 2 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 6;
            
        if(col == 3 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 3 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 3 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 11;
            
        if(col == 4 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 4 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 4 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 11;
            
        if(col == 5 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 5 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 5 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 11;
            
        if(col == 6 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 6 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 6 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 11;
            
        if(col == 7 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 7 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 7;
        if(col == 7 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 8 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 8 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 7;
        if(col == 8 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 9 && ascii >= 48 && ascii <= 57)      //number
            col-= 6;
        if(col == 9 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 1;
        if(col == 9 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 2;
            
        if(col == 10 && ascii >= 48 && ascii <= 57)      //number
            col-= 5;
        if(col == 10 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 10 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 2;
            
        if(col == 11 && ascii >= 48 && ascii <= 57)      //number
            col+= 3;
        if(col == 11 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 1;
        if(col == 11 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special 
            col+= 0;
            
        if(col == 12 && ascii >= 48 && ascii <= 57)      //number
            col+= 4;
        if(col == 12 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 12 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 13 && ascii >= 48 && ascii <= 57)      //number
            col-= 6;
        if(col == 13 && ascii >= 65 && ascii <= 90)      //Upper Case
            col-= 2;
        if(col == 13 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 14 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 14 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 14 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 15 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 15 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 2;
        if(col == 15 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 16 && ascii >= 48 && ascii <= 57)      //number
            col+= 1;
        if(col == 16 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 16 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
            
        if(col == 17 && ascii >= 48 && ascii <= 57)      //number
            col+= 0;
        if(col == 17 && ascii >= 65 && ascii <= 90)      //Upper Case
            col+= 0;
        if(col == 17 && (ascii >=  33 && ascii < 97) || (ascii > 122 && ascii <= 126))    //Special
            col+= 0;
        
        cout << "In state: " << col << row << endl;
        
    }
    
    if(col == 17 && (row >= 7 && row <=9)){
        cout << "Valid password.  congrats." << endl;
    }else{
        cout << "Invalid password." << endl;
    }

    cout << "Final states: 177, 178, 179" << endl;
    /*
    # U S
    0 0 0   #1 U9 S13
    1 0 0   #1 U2 S6
    2 0 0   #0 U2 S6
    1 1 0   #1 U2 S11
    2 1 0   #0 U2 S11
    1 2 0   #1 U0 S11
    2 2 0   #0 U0 S11
    1 0 1   #1 U7 S0
    2 0 1   #0 U7 S0
    0 1 0   #-6U1 S2
    0 2 0   #-5U0 S2
    0 1 1   #3 U1 S0
    0 2 1   #4 U0 S0
    0 0 1   #-6U-2S0
    1 1 1   #1 U2 S0
    2 1 1   #0 U2 S0
    1 2 1   #1 U0 S0
    2 2 1   #0 U0 S0
    */
    return 0;
}