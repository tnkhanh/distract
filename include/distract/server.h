// Copyright (c) 2020 forkbase

#include <string>

class Server {
 public:
  Server(const std::string& db_path, const std::string& address);
  void Run();
 private:
}
