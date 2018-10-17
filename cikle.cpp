#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
int main(int argc,char *argv[]) {
    
    if (argv[1][0] == '1' ) {
        
        std::string str("<html>\n<svg wight=\"300\" height=\"300\">\n<polygon points = \"100,200 200,140 300,200 200,260\"\n fill=\"none\"\n stroke=\"black\"/>\n</svg>\n</html>");
                
                            std::fstream fs;
                            fs.open("rhombus.html",std::fstream::out);
                            fs<<str<<std::endl;
                            fs.close();
                            system("firefox rhombus.html");
    }
        
                            
    if (argv[1][0] == '2' ) {
        
        std::string str("<html>\n<svg widht=\"500\" height=\"500\">\n<polygon points=\"100,100 300,100 300,200 100,200\"\n fill=\"none\"\nstroke=\"black\"/>\n<svg/>\n<html/>");
                                                
                              std::fstream fs;
                              fs.open("rectangle.html",std::fstream::out);
                              fs<<str<<std::endl;
                              fs.close();
                              system("firefox rectangle.html");
    }
                            
    if (argv[1][0] == '3' ) {
        std::string str("<html>\n<svg widht=\"500\" height=\"500\">\n<polygon points=\"160,100 300,100 240,180 100,180\"\n fill=\"none\"\n stroke=\"black\"/>\n<svg/>\n<html/>");
                                                  
                                std::fstream fs;
                                fs.open(".parallelogramm.html",std::fstream::out);
                                fs<<str<<std::endl;
                                fs.close();
                                system("firefox parallelogramm.html");
    }
 
                                                           
    
        if (argv[1][0] == '4' ) {
            std::string str("<html>\n<svg widht=\"500\" height=\"500\">\n<polygon points=\"100,180 100,140 140,100 260,100 300,140 300,180\"\n fill=\"none\"\n stroke=\"black\"/>\n<polygon points=\"100,280 100,240 300,240 300,280 260,320 140,320\"\n fill=\"none\"\n stroke=\"black\"/>\n<svg/>\n<html/>");
                                std::fstream fs;
                                fs.open("polygon.html",std::fstream::out);
                                fs<<str<<std::endl;
                                fs.close();
                                system("firefox polygon.html");
        }
                           
return 0;
}




