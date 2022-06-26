#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "./src/address.pb.h"
#include "./src/person.pb.h"

template<typename T>
void serialize(T& data)
{
    std::ofstream out("data.bin", std::ios::binary);
    out.write(
        reinterpret_cast<char *>(&data), sizeof(data)
    );
}

template<typename T>
void deserialize(T& dest)
{
    std::ifstream in("data.bin", std::ios::binary);
    in.read(
        reinterpret_cast<char *>(&dest), sizeof(dest)
    );
}

void print_person(const Person::Person& p)
{
    std::cout << "Name: " << p.name() << '\n';
    std::cout << "Email: " << p.email() << '\n';
    std::cout << "Street: " << p.address().street() << '\n';
    std::cout << "Street: " << p.address().building() << '\n';
}

int main(void)
{
    std::vector<double> data = {0.0, 0.1, 0.2, 0.3};
    serialize(data);
    std::vector<double> dest;
    dest.resize(data.size());
    deserialize(dest);
    for (const auto& v : dest) {
        std::cout << v << std::endl;
    }

    Address addr;
    addr.set_street("Lva ");
    *addr.mutable_street() += "Tolstogo";
    addr.set_building(15);
    addr.add_phone_number("+3869185123");
    Person::Person person;
    person.set_id(1);
    person.set_name("Bob Johnson");
    person.set_email("bob@bob.com");
    *person.mutable_address() = addr;

    std::ofstream out("person.bin", std::ios::binary);
    person.SerializePartialToOstream(&out);
    out.close();
    std::ifstream in("person.bin", std::ios::binary);
    Person::Person parsed_person;
    if (parsed_person.ParseFromIstream(&in)) {
        print_person(parsed_person);
    }

    return 0;
}