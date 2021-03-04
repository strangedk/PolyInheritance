#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    int m_memory;
    int m_size;
public:
    int GetMemory() const {
        return m_memory;
    }
    void SetMemory(int value) {
        m_memory = value;
    }
    int GetSize() const {
        return m_size;
    }
    void SetSize(int value) {
        m_size = value;
    }

    virtual string GetVersion() const {
        return "Default version";
    };
};

class PhoneApple : public Smartphone {
private:
    string m_iosVersion;
public:
    PhoneApple(string version): m_iosVersion(version) {
    }

    string GetVersion() const {
        return m_iosVersion;
    }
};

class PhoneSamsung : public Smartphone {
private:
    string m_androidVersion;
public:
    PhoneSamsung(string version) : m_androidVersion(version) {
    }

    string GetVersion() const {
        return m_androidVersion;
    }
};


int main() {
    Smartphone* apple = new PhoneApple("IPhone X 20.1.3");
    Smartphone* samsung = new PhoneSamsung("Galaxy S22+ 14.5.88");

    std::cout << "Apple version: " << apple->GetVersion() << endl;
    std::cout << "Samsung version: " << samsung->GetVersion() << endl;
}