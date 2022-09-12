int main(){
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;
    char password[length];
    for(int i = 0; i < length; i++){
        password[i] = rand() % 94 + 33;
    }
    cout << "Your password is: ";
    for(int i = 0; i < length; i++){
        cout << password[i];
    }
    cout << endl;
    return 0;


}
