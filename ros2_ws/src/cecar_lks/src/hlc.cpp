#include <cstdio>
#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using namespace std::chrono_literals;
using std::placeholders::_1;

class hlc_node : public rclcpp::Node
{
public:
  hlc_node()
  : Node("hlc_subscriber")
  { 
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "topic1", 10, std::bind(&hlc_node::topic_callback, this,_1));
  }

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
    {
      RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<hlc_node>());
  rclcpp::shutdown();
  return 0;
}

