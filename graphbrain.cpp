#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>

std::string to_string(int k) {
    std::string str = "";
    for ( str = ""; k; k /= 10 ) {
        str += (char)( '0' + k % 10 );
    }
    std::reverse(str.begin(), str.end());
    return str;
}


std::string beginend_ (int x, int y) {
    
    std::string beginend = " <ellipse rx=\" ";
    beginend += to_string(100);
    beginend += " \" ry=\" ";
    beginend += to_string(40);
    beginend += " \" cx=\" ";
    beginend += to_string(x);
    beginend += " \"cy=\" ";
    beginend += to_string(y);
    beginend += " \"\n fill=\"none\"\n stroke=\"black\"/> ";
    return beginend;
    
}


std::string line_ (int x, int y) {
    
    std::string line = " <line x1 = \"";
    line += to_string(x);
    line += "\" ";
    line += "y1=\"";
    line += to_string(y);
    line += "\" ";
    line += "x2=\"";
    line += to_string(x);
    line += "\" ";
    line += "y2=\"";
    line += to_string(y + 60);
    line += "\" ";
    line += "stroke = \"black\"\n stroke-width = \"2\"/> ";
    return line;
    
}

std::string line_gor (int x, int y) {
    
    std::string line = " <line x1 = \"";
    line += to_string(x);
    line += "\" ";
    line += "y1=\"";
    line += to_string(y);
    line += "\" ";
    line += "x2=\"";
    line += to_string(x+140);
    line += "\" ";
    line += "y2=\"";
    line += to_string(y);
    line += "\" ";
    line += "stroke = \"black\"\n stroke-width = \"2\"/> ";
    return line;
    
}

std::string line_gorlong (int x, int y) {
    
    std::string line = " <line x1 = \"";
    line += to_string(x);
    line += "\" ";
    line += "y1=\"";
    line += to_string(y);
    line += "\" ";
    line += "x2=\"";
    line += to_string(x+240);
    line += "\" ";
    line += "y2=\"";
    line += to_string(y);
    line += "\" ";
    line += "stroke = \"black\"\n stroke-width = \"2\"/> ";
    return line;
    
}

std::string line_long (int x, int y) {
    
    std::string line = " <line x1 = \"";
    line += to_string(x);
    line += "\" ";
    line += "y1=\"";
    line += to_string(y);
    line += "\" ";
    line += "x2=\"";
    line += to_string(x);
    line += "\" ";
    line += "y2=\"";
    line += to_string(y + 340);
    line += "\" ";
    line += "stroke = \"black\"\n stroke-width = \"2\"/> ";
    return line;
    
}


std::string inputout_ (int x, int y) {
    
    std::string inputout = " <polygon points=\" ";
    inputout += to_string(x);
    inputout += ",";
    inputout += to_string(y);
    inputout += " ";
    inputout += to_string(x + 140);
    inputout += ",";
    inputout += to_string(y);
    inputout += " ";
    inputout += to_string(x + 60);
    inputout += ",";
    inputout += to_string(y + 80);
    inputout += " ";
    inputout += to_string(x - 80);
    inputout += ",";
    inputout += to_string(y + 80);
    inputout += " \"\n fill=\"none\"\n stroke=\"black\"/> " ;
    return inputout;
    
}


std::string action_ (int x, int y) {
    
    std::string action = " <polygon points=\" ";
    action += to_string(x);
    action += ",";
    action += to_string(y);
    action += " ";
    action += to_string(x + 200);
    action += ",";
    action += to_string(y);
    action += " ";
    action += to_string(x + 200);
    action += ",";
    action += to_string(y + 100);
    action += " ";
    action += to_string(x);
    action += ",";
    action += to_string(y + 100);
    action += " \"\n fill=\"none\"\n stroke=\"black\"/> ";
    return action;
    
}

    
std::string condition_ (int x, int y) {
    
    std::string condition = " <polygon points = \" ";
    condition += to_string(x);
    condition += ",";
    condition += to_string(y);
    condition += " ";
    condition += to_string(x + 100);
    condition += ",";
    condition += to_string(y + 60);
    condition += " ";
    condition += to_string(x);
    condition += ",";
    condition += to_string(y + 120);
    condition += " ";
    condition += to_string(x - 100);
    condition += ",";
    condition += to_string(y + 60);
    condition += " \"\n fill=\"none\"\n stroke=\"black\"/>";
    return condition;
    
}
   


int main() {
    
    std::string head = " <html>\n<svg width = \"10000\" height=\"10000\"> ";
    std::string tail ("</svg>\n</html>");
    std::fstream fs;
    fs.open("figure.html",std::fstream::out);
    fs << head << std::endl;
    fs << beginend_(360, 100) << std::endl;
    fs << line_(360, 140) << std::endl;
    fs << inputout_(320, 200) << std::endl;
    fs << line_(360, 280) << std::endl;
    fs << action_(260, 340) << std::endl;
    fs << line_(360, 440) << std::endl;
    fs << condition_(360, 500) << std::endl;
    fs << line_(360, 620) << std::endl;
    fs << action_(260, 680) << std::endl;
    fs << line_(360, 780) << std::endl;
    
    fs << line_gor(220, 840) << std::endl;
    fs << line_long(220, 500) << std::endl;
    fs << line_gor(220, 500) << std::endl;
    fs << line_gor(460, 560) << std::endl;
    fs << line_long(600, 560) << std::endl;
    fs << line_gorlong(360, 900) << std::endl;
    
    fs << line_(360, 900) << std::endl;
    fs << inputout_(320, 960) << std::endl;
    fs << line_(360, 1040) << std::endl;
    fs << beginend_(360,1140) << std::endl;
    fs << tail << std::endl;
    fs.close();
    system("firefox figure.html");
    
    return 0;
    
}
