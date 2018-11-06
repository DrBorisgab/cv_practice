#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>

std::string to_string(int x) {
    std::string str = "";
    for ( str = ""; x; x /= 10 ) {
        str += (char)( '0' + x % 10 );
    }
    std::reverse(str.begin(), str.end());
    return str;
}

int main( int argc, char *argv[] ) {
    
    int num;
    std::cout<<"Enter the number of figures:"<<std::endl;
    std::cin>>num;
    
    std::string head ("<html>\n<svg wight=\"2000\" height=\"2000\">");
    std::fstream fs;
    fs.open("figure.html",std::fstream::out);
    fs << head << std::endl;
    
    
    
    if (argv[1][0] == '1' ) {
        
        for (int i=1;i<=num;i++) {
            
            std::string str = " <polygon points=\" ";
            str += to_string(100);
            str += ",";
            str += to_string(200*i);
            str += " ";
            str += to_string(200);
            str += ",";
            str += to_string(200*i-60);
            str += " ";
            str += to_string(300);
            str += ",";
            str += to_string(200*i);
            str += " ";
            str += to_string(200);
            str += ",";
            str += to_string(200*i+60);
            str += "\"\n fill=\"none\"\n stroke=\"black\"/>";
            
            fs << str << std::endl;
     
        }
    }
    
    
    
    if (argv[1][0] == '2' ) {
        
        for (int i=1;i<=num;i++) {
            
        std::string str = " <polygon points=\" ";
        str += to_string(100);
        str += ",";
        str += to_string(200*i);
        str += " ";
        str += to_string(300);
        str += ",";
        str += to_string(200*i);
        str += " ";
        str += to_string(300);
        str += ",";
        str += to_string(200*i+100);
        str += " ";
        str += to_string(100);
        str += ",";
        str += to_string(200*i+100);
        str += "\"\n fill=\"none\"\nstroke=\"black\"/>";
        
        
        fs << str << std::endl;
            
        }
    }
                        
    
    
    if (argv[1][0] == '3' ) {
        
        for (int i=1;i<=num;i++) {
            
            std::string str = " <polygon points=\" ";
            
            str += to_string(160);
            str += ",";
            str += to_string(100*i);
            str += " ";
            str += to_string(300);
            str += ",";
            str += to_string(100*i);
            str += " ";
            str += to_string(240);
            str += ",";
            str += to_string(100*i+80);
            str += " ";
            str += to_string(100);
            str += ",";
            str += to_string(100*i+80);
            str += "\"\n fill=\"none\"\n stroke=\"black\"/>";
            
            fs << str << std::endl;
            
        }
    }
    
    
    
    if (argv[1][0] == '4' ) {
        
        
        for (int i=1;i<=num;i++) {
            
            std::string str = " <polygon points=\" ";
            
            str += to_string(100);
            str += ",";
            str += to_string(180*i);
            str += " ";
            str += to_string(100);
            str += ",";
            str += to_string(180*i-40);
            str += " ";
            str += to_string(140);
            str += ",";
            str += to_string(180*i-80);
            str += " ";
            str += to_string(260);
            str += ",";
            str += to_string(180*i-80);
            str += " ";
            str += to_string(300);
            str += ",";
            str += to_string(180*i-40);
            str += " ";
            str += to_string(300);
            str += ",";
            str += to_string(180*i);
            str += "\"\n fill=\"none\"\n stroke=\"black\"/>";
            
            std::string strc = " <polygon points=\" ";
            
            strc += to_string(100);
            strc += ",";
            strc += to_string(280*i);
            strc += " ";
            strc += to_string(100);
            strc += ",";
            strc += to_string(280*i-40);
            strc += " ";
            strc += to_string(300);
            strc += ",";
            strc += to_string(280*i-40);
            strc += " ";
            strc += to_string(300);
            strc += ",";
            strc += to_string(280*i);
            strc += " ";
            strc += to_string(260);
            strc += ",";
            strc += to_string(280*i+40);
            strc += " ";
            strc += to_string(140);
            strc += ",";
            strc += to_string(280*i+40);
            strc += "\"\n fill=\"none\"\n stroke=\"black\"/>";
            
            
            fs << str << strc << std::endl;
            
        }
        
    }
    
    std::string tail ("<svg/>\n</html>");
    fs << tail << std::endl;
    fs.close();
    system("firefox figure.html");


    return 0;
}

