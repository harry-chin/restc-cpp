#pragma once

#ifndef RESTC_CPP_URL_H_
#define RESTC_CPP_URL_H_

#include <boost/utility/string_ref.hpp>

namespace restc_cpp {


 class Url {
 public:
     enum class Protocol {
         UNKNOWN,
         HTTP,
         HTTPS
     };

     Url(const char *url);

     boost::string_ref GetProtocolName() const { return protocol_name_; }
     boost::string_ref GetHost() const { return host_; }
     boost::string_ref GetPort() const { return port_; }
     boost::string_ref GetPath() const { return path_; }
     Protocol GetProtocol() const { return protocol_; }

 private:
     boost::string_ref protocol_name_;
     boost::string_ref host_;
     boost::string_ref port_ = "80";
     boost::string_ref path_ = "/";
     Protocol protocol_ = Protocol::UNKNOWN;
 };


} // namespace restc_cpp


#endif // RESTC_CPP_URL_H_
