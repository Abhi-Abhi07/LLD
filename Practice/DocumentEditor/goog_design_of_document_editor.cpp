#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

class DocumentElement{
    public:
    virtual string render() = 0;
};

class TextElement : public DocumentElement{
    string text;
    public:
    TextElement(string text){
        this->text = text;
    }

    string render(){
        return text;
    }
};

class ImgElement : public DocumentElement{
    string img;
    public:
    ImgElement(string img){
        this->img = "[Image : " + img + "]";
    }

    string render(){
        return img;
    }
};

class NewLineElement : public DocumentElement{
    string line;
    public:
    NewLineElement(){
        this->line = "\n";
    }

    string render(){
        return line;
    }
};

class TabElement : public DocumentElement{
    string tab;
    public:
    TabElement(){
        this->tab = "\t";
    }

    string render(){
        return tab;
    }
};

class Document{
    public:
    vector<DocumentElement*> documentElements;

    void addElement(DocumentElement* ele){
        documentElements.push_back(ele);
    }

    string render(){
        string res = "";
        for(auto el: documentElements){
            res += el->render();
        }
        return res;
    }

    ~Document(){
        cout<<"Before Document dtor called documentElements size: "<<documentElements.size()<<endl;
        documentElements.clear();
        cout<<"After Document dtor called documentElements size: "<<documentElements.size()<<endl;
    }
};

class Persistence{
    public:
    virtual void save(string data) = 0;

    ~Persistence(){
        cout<<"Persistence dtor called !\n";
    }
};

class FileStorage: public Persistence{
    public:
    void save(string data){
        string folderPath = "C:/Coding/LLD/practice/DocumentEditor"; 
        string fileName = "document.txt";
        string fullpath = folderPath + "/" + fileName;

        ofstream outFile(fullpath);
        if(outFile.is_open()){
            outFile << data;
            outFile.close();
            cout<<"***Document saved to document.txt***\n";
        }else{
            cout<<"Error: unable to open file !\n";
        }
    }  
};

class DBStorage: public Persistence{
    public:
    void save(string data){
        cout<<"Write your logic for saving data into DB !"<<endl;
    }
};

class DocumentEditor{
    public:
    Document *document;
    Persistence *storage;
    string renderedDocument;

    DocumentEditor(Document *doc, Persistence *storage){
        this->document = doc;
        this->storage = storage;
        renderedDocument.clear();
    }

    void addText(string text){
        document->addElement(new TextElement(text));
    }

    void addImg(string imgPath){
        document->addElement(new ImgElement(imgPath));
    }

    void addTab(){
        document->addElement(new TabElement());
    }

    void addNewLine(){
        document->addElement(new NewLineElement());
    }

    string renderDocument(){
        if(renderedDocument.empty()){
            renderedDocument = document->render();
        }
        return renderedDocument;
    }

    void saveDocument(){
        storage->save(renderDocument());
    }
    ~DocumentEditor(){
        cout<<"Document editor dtor called !\n";
    }
};

int main(){
    Persistence *storage = new FileStorage();
    Document *doc = new Document();
    DocumentEditor *documentEditor = new DocumentEditor(doc, storage);

    documentEditor->addText("Hi there !");
    documentEditor->addNewLine();
    documentEditor->addText("Give Img Path:");
    documentEditor->addTab();
    documentEditor->addImg("C:/Coding/LLD/practice/DocumentEditor/img.png");

    cout<<documentEditor->renderDocument()<<endl;
    documentEditor->saveDocument();

    delete storage;
    delete doc;
    delete documentEditor;

    return 0;
}