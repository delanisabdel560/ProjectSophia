// A function that returns a random number between 1 and 10
int getRandomNumber() {
    return rand() % 10 + 1;
}

int main() {
    // Print out the result of calling getRandomNumber() five times
    for (int i = 0; i < 5; i++) {
        std::cout << getRandomNumber() << std::endl;
    }
    return 0;
}
