/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   BookLibary.h
 * Author: 00465510
 *
 * Created on November 11, 2021, 8:42 AM
 */

#ifndef BOOKLIBARY_H
#define BOOKLIBARY_H

#include <string>
#include <vector>

using namespace std;

class Book{

   private:
      string bookTitle;
      string bookAuthor;
      long bookISBN;

   public:
        // Default Constructor
      Book();

        // Initialization Constructor
      Book(string userBookTitle, string userBookAuthor, long userBookISBN);

        // Getters
      long GetBookISBN() const { return bookISBN; };
      string GetBookTitle() const { return bookTitle; };
      string GetBookAuthor() const { return bookAuthor; };

        // Print book information
      void PrintInfo() const;
};

class BookNode {
   public:
      // Default Constructor
      BookNode();

      // Initialization Constructor with no nextLoc pointer
      BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit);

      // Initialization Constructor with nextLoc pointer
      BookNode(string bookTitleInit, string bookAuthorInit, long bookISBNInit, BookNode* nextLoc);

      // insertAfter method
      void insertAfter(BookNode* nodeLoc);
      
      //setNext
      void SetNext(BookNode* nodeLoc);

      // Get location pointed by nextNodePtr
      BookNode* GetNext() const;

      // Get book ISBN
      long GetBookISBN() const;

      // Print book information
      void PrintBookInfo() const;
   
   private:
      string bookTitle;
      string bookAuthor;
      long bookISBN;
      BookNode* nextNodePtr; // Reference to the next node
};

class LinkedListLibrary {
   public:
      //Linked list nodes
      BookNode* headNode;
      BookNode* lastNode;

      LinkedListLibrary();

      ~LinkedListLibrary();

      int InsertSorted(BookNode* newNode, int counter);

      void PrintLibrary() const;
};

class VectorLibrary {
   public:
      VectorLibrary();

      int InsertSorted(const Book &newBook, int counter);

      void PrintLibrary() const;
   
   private:
      // vector library
      vector<Book> library;

};

#endif /* BOOKLIBARY_H */

