#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <ros/ros.h>
#include <gtest/gtest.h>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_ros_examples/car_seat_example.h>

using namespace tesseract_ros_examples;

TEST(TesseractROSExamples, CarSeatCppExampleUnit)
{
  ros::NodeHandle nh;
  CarSeatExample example(nh, false, false);
  EXPECT_TRUE(example.run());
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "car_seat_example_unit");

  return RUN_ALL_TESTS();
}
