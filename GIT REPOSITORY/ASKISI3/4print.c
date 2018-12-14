list<string>::iterator i;
	for( i = a1.begin(); i != a1.end(); ++i)
		cout << *i << " ";
	cout <<	endl;

void print(const list<string>& s) {
	list<string>::const_iterator i;
	for( i = s.begin(); i != s.end(); ++i)
		cout << *i << " ";
	cout << endl;
}