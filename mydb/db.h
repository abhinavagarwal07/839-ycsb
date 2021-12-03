#ifndef MY_DB_H
#define MY_DB_H

#include "core/db.h"
#include "core/properties.h"
#include <iostream>
namespace ycsbc {
class MyDB : public DB {
//    std::map<>
public:
    MyDB() {}

    ~MyDB() {}

    void Init() override{}

    void Cleanup() override{}

    Status Read(const std::string &table, const std::string &key,
                const std::vector<std::string> *fields, std::vector<Field> &result) override{
        std::cout << "read: " << table << " " << key << " | ";
        for (auto i: *fields) {
            std::cout << i << " ";
        }
        std::cout << "\n";
        exit(0);
        return Status::kOK;
    }

    Status Scan(const std::string &table, const std::string &key, int len,
                const std::vector<std::string> *fields, std::vector<std::vector<Field>> &result) override {
        return Status::kOK;
    }

    Status Update(const std::string &table, const std::string &key, std::vector<Field> &values) override{
        return Status::kOK;
    }

    Status Insert(const std::string &table, const std::string &key, std::vector<Field> &values) override{
        return Status::kOK;
    }

    Status Delete(const std::string &table, const std::string &key) override{
        return Status::kOK;
    }
};
}

#endif