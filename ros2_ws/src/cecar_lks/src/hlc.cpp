#include <cstdio>
#include <chrono>
#include <memory>
#include <linux/joystick.h>
#include "warning.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using namespace std::chrono_literals;
using std::placeholders::_1;
#define DEBUG 0
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
      //RCLCPP_INFO(this->get_logger(), "Ijoystick '%f'",GamepadStickAngle(gpd,STICK_LEFT));
     //joyrumble_init();
      joyrumble(1,100, 100, 1000);
      //usleep((1000+100)*1000);

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

