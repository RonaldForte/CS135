//Ronald A Forte JR
// This project was never finished. 


#include <fstream>
#include <sstream>
#include <iostream>

using namespace std; 
string figure(ifstream& file_read, int lcount);
string split(string ars, int width);


string figure(ifstream& file_read, int lcount){
    
    bool test = false;                  
    string string_return = "";               
    string currline;                        
    string space = " ";                 
    
    string current_l = "";              
    
    while (getline(file_read, currline)){       
        current_l += space + currline;          
        if(currline.size() <= lcount){          
            test = true;                    
            string_return += split(current_l, lcount);      
  
            if (currline == "" && string_return[string_return.size() - 1] != '\n'){  
                string_return += "\n";                                      
            }
            
            string_return += "\n";   
            current_l = "";     
            
        } else {
            test = false;       
        }
    }
    
    if (!test){                 
        string_return += split(current_l, lcount);      
    }
    if(string_return[string_return.size()-1] == '\n'){
        return string_return.substr(0, string_return.size() - 1);     
    }
    return string_return;                                       
}

string split(string ars, int width){   
    string string_return  = "";      
    string space = " ";        
    int lcount = 0;             
    
    istringstream lexi(ars);        
    string str;                         
    bool truelol = true;                  
    
    while(lexi >> str){                 
        int size = str.length() + 1;    
        if (truelol){                     
            string_return += str;            
            lcount += str.size();       
            truelol = false;             
        } else {
            if (size + lcount < width){     
                string_return += space + str;    
                lcount += size;             
            } else {
                string_return += "\n" + str;     
                lcount = str.size();
            }
        }
    }
    return string_return;
}


int main(){
    string filein;                      
    cout << "Enter the file input: ";   
    cin >> filein;                      
    
    ifstream fin;                   
    fin.open(filein);               
    
    string lol_line;                
    getline(fin, lol_line);

    int delim = lol_line.find(';');       
    int char_count = stoi(lol_line.substr(0,delim));          
    string outfile = lol_line.substr(1 + delim, lol_line.size() - delim - 2); 
    string file_changed = figure(fin, char_count);   
 
    fin.close();

    ofstream file_out;          
    file_out.open(outfile);
    file_out << file_changed;
    file_out.close();

    return 0;