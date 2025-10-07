#include <iostream>
#include <string>

// Simulated database query function
void executeQuery(const std::string& query) {
    std::cout << "Executing SQL: " << query << std::endl;
    // Imagine this sends the query to a database
}

int main() {
    std::string username;
    std::cout << "Enter username: ";
    std::cin >> username;

    
    std::string query = "SELECT * FROM users WHERE username = '" + username + "';";
    executeQuery(query);

    return 0;
}