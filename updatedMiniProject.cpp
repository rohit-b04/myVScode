#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct Book {
    string title;
    string author;
    string genre;
};

class BookRecommendationSystem {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    vector<Book> recommendBooks(const string& preferredGenre) {
        vector<Book> recommendedBooks;

        // Find books with the preferred genre
        for (const auto& book : books) {
            if (book.genre == preferredGenre) {
                recommendedBooks.push_back(book);
            }
        }

        return recommendedBooks;
    }

    void loadBooksFromFile(const string& filename) {
        ifstream file(filename);

        if (!file.is_open()) {
            cout << "Error opening file: " << filename << endl;
            return;
        }

        Book book;
        while (getline(file, book.title, ',') && getline(file, book.author, ',') && getline(file, book.genre)) {
            addBook(book);
        }

        file.close();
    }
};

int main() {
    BookRecommendationSystem recommendationSystem;

    // Load books from an external file
    recommendationSystem.loadBooksFromFile("books.txt");

    cout << "Welcome to the Book Recommendation System!\n";
    cout << "Enter your preferred genre: ";

    string userGenre;
    getline(cin, userGenre);

    vector<Book> recommendedBooks = recommendationSystem.recommendBooks(userGenre);

    if (recommendedBooks.empty()) {
        cout << "Sorry, no books found in your preferred genre.\n";
    } else {
        cout << "Recommended Books in " << userGenre << ":\n";
        for (const auto& book : recommendedBooks) {
            cout << "Title: " << book.title << ", Author: " << book.author << "\n";
        }
    }

    return 0;
}