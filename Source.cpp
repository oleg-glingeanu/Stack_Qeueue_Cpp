#include <iostream>
#include"Song.h"
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
	queue<song> myPlaylist;
	myPlaylist.push(song("First song  ", 100));
	myPlaylist.push(song("Second song ", 200));
	myPlaylist.push(song("Third song  ", 300));
	myPlaylist.push(song("Fourth song ", 400));
	myPlaylist.push(song("Fifth song  ", 500));
	cout << "number of songs in queue: " << myPlaylist.size() << endl;
	while (!myPlaylist.empty()) {
		cout << myPlaylist.front().getTitle() << " Duration : " << myPlaylist.front().getDuration() << endl;
		myPlaylist.pop();
	}
	stack<char>myStack;
	stack<char>tempStack;
	string reverse;
	cout << "Type a string: ";
	cin >> reverse;
	for (char& c : reverse) {
		myStack.push(c);
	}
	while (!myStack.empty()) {
		char x = myStack.top();
		cout << x;
		myStack.pop();
	}
	return 0;
}
