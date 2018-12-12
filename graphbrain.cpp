#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>


class enum NodeTypes {
    beginend,
    cond,
    loop,
    act,
    inputout;
};

struct Node {
    NodeType type;
    std::vector <Node*> succs = { };
    Node ** succs;
    int succs;
};

struct Graph {
    std::string s;
    Node * starNode;
};

void drawNode(const Node * n) {
    std string s = "<figure>";
    for (int i = 0; i < n->succNum; i++) {
        drawNode(n->succs[i]);
    }
}

void drawGraph(const Graph & g) {
    drawNode(g->starNode);
}


std::string drawNode(Node * n, int x, int y) {
    if (n->type == inputOut){
        return inOut(x, y);
    }
}



std::string to_string(int k) {
    std::string str = "";
    for ( str = ""; k; k /= 10 ) {
        str += (char)( '0' + k % 10 );
    }
    std::reverse(str.begin(), str.end());
    return str;
}

std::string beginEnd (int x, int y) {
    
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


std::string mainLine (int x, int y) {
    
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

std::string horLine (int x, int y) {
    
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

std::string horLongLine (int x, int y) {
    
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

std::string longLine (int x, int y) {
    
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


std::string inOut (int x, int y) {
    
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


std::string Action (int x, int y) {
    
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

    
std::string Condition (int x, int y) {
    
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
    fs << beginEnd(360, 100) << std::endl;
    fs << mainLine(360, 140) << std::endl;
    fs << inOut(320, 200) << std::endl;
    fs << mainLine(360, 280) << std::endl;
    fs << Action(260, 340) << std::endl;
    fs << mainLine(360, 440) << std::endl;
    fs << Condition(360, 500) << std::endl;
    fs << mainLine(360, 620) << std::endl;
    fs << Action(260, 680) << std::endl;
    fs << mainLine(360, 780) << std::endl;
    fs << horLine(220, 840) << std::endl;
    fs << longLine(220, 500) << std::endl;
    fs << horLine(220, 500) << std::endl;
    fs << horLine(460, 560) << std::endl;
    fs << longLine(600, 560) << std::endl;
    fs << horLongLine(360, 900) << std::endl;
    fs << mainLine(360, 900) << std::endl;
    fs << inOut(320, 960) << std::endl;
    fs << mainLine(360, 1040) << std::endl;
    fs << beginEnd(360,1140) << std::endl;
    fs << tail << std::endl;
    fs.close();
    system("firefox figure.html");
    
    return 0;
    
}

