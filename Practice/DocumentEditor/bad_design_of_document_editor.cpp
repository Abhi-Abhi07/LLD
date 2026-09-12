#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

class DocumentEditor{
    vector<string> documentElements;
    string renderedDocument;

    public:

    DocumentEditor(){
        documentElements.clear();
    }
    
    void addText(string text){
        documentElements.push_back(text);
    }

    void addImg(string imgPath){
        documentElements.push_back(imgPath);
    }

    string renderDocument(){
        if(renderedDocument.empty()){
            string res = "";
            for(string &ele: documentElements){
                if(ele.size() > 4 && (ele.substr(ele.size()-4) == ".png") || (ele.substr(ele.size()-4) == ".jpg")){
                    res += "[Image : " + ele + "]\n";
                }else{
                    res += ele + "\n";
                }
            }
            renderedDocument += res;
        }
        return renderedDocument;
    }

    void saveToFile(){
        string folderPath = "C:/Coding/LLD/practice/DocumentEditor"; 
        string fileName = "document.txt";
        string fullpath = folderPath + "/" + fileName;

        ofstream outFile(fullpath);
        if(outFile.is_open()){
            outFile << renderDocument();
            outFile.close();
            cout<<"Document saved to document.txt\n";
        }else{
            cout<<"Error: unable to open file !\n";
        }
    }
};

int main(){
    DocumentEditor editor;

    editor.addText("Hello, World!");
    editor.addImg("C:/Coding/LLD/practice/DocumentEditor/img.png");
    editor.addText("What's your day!");

    cout<<editor.renderDocument()<<endl;
    editor.saveToFile();

    // Reading file
    std::ifstream inFile("C:/Coding/LLD/practice/DocumentEditor/document.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            cout<<1<<endl;
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Unable to open file for reading\n";
    }
    return 0;
}