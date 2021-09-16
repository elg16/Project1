#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include<iostream>
#include "node.hpp"
using namespace std;

class FileSystem {
public:
   Node* root;
   Node* currentDirectory;
   
   FileSystem();
   ~FileSystem();
   string mkdir(string name); //Uses addNode helper function
   string touch(string name); //Uses findNode helper function
   string pwd();
   string ls();
   string rm(string name);
   string mv(string from, string to);
   string cd(string dirname);
   
private:
   void AddNode(Node* newNode);
   Node* FindNode(string name);
};

#endif