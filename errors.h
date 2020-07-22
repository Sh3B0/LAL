/// Base class for all errors thrown by LAL.

#ifndef LAL_ERRORS_H
#define LAL_ERRORS_H

#include<iostream>

class error : public std::exception {
public:
    std::string errmsg = "Unidentified Error";

    virtual std::string what() {
        return errmsg;
    }
};

class DimensionError : public error {

public:
    explicit DimensionError(const std::string& msg) {
        errmsg = "DimensionError: " + msg + "\nSee error log for more info.\n";
    }

    std::string what() override {
        return errmsg;
    }
};

class MathError : public error {

public:
    explicit MathError(const std::string& msg) {
        errmsg = "MathError: " + msg + "\nSee error log for more info.\n";
    }

    std::string what() override {
        return errmsg;
    }
};

#endif //LAL_ERRORS_H
