#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
int main( int argc,char *argv[] ) {
    
    
    std::string head ("<html>\n<svg wight=\"500\" height=\"500\">");
    std::fstream fs;
    fs.open("figure.html",std::fstream::out);
    fs << head << std::endl;
    
    
    
    if (argv[1][0] == '1' ) {
        
        std::string str("<polygon points = \"100,200 200,140 300,200 200,260\"\n fill=\"none\"\n stroke=\"black\"/>");
        fs << str << std::endl;
        
    }
    
    
    
    if (argv[1][0] == '2' ) {
        
        std::string str("<polygon points=\"100,100 300,100 300,200 100,200\"\n fill=\"none\"\nstroke=\"black\"/>");
        fs << str << std::endl;
        
    }
    
    
    
    if (argv[1][0] == '3' ) {
        
        std::string str("<polygon points=\"160,100 300,100 240,180 100,180\"\n fill=\"none\"\n stroke=\"black\"/>");
        fs << str << std::endl;
        
    }
    
    
    
    if (argv[1][0] == '4' ) {
        
        std::string str("<polygon points=\"100,180 100,140 140,100 260,100 300,140 300,180\"\n fill=\"none\"\n stroke=\"black\"/>");
        std::string strc("<polygon points=\"100,280 100,240 300,240 300,280 260,320 140,320\"\n fill=\"none\"\n stroke=\"black\"/>");
        fs << str << strc << std::endl;
    }
    
    std::string tail ("<svg/>\n<html/>");
    fs << tail << std::endl;
    fs.close();
    system("firefox figure.html");

    return 0;
}

