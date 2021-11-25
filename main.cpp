#include <Eigen/Geometry>
#include <iostream>

int main()
{
  auto deg_to_rad = [](double deg) {
      return deg / 180.0 * M_PI;
    };
  auto rad_to_deg = [](double rad) {
      return rad / M_PI * 180.0;
    };

  double yaw = deg_to_rad(30.0);

  Eigen::AngleAxisd angle_axisd_z(yaw, Eigen::Vector3d::UnitZ());

  Eigen::Quaterniond quat(angle_axisd_z);

  std::cout << "real: " << std::cos(yaw) << std::endl;
  std::cout << "imag: " << std::sin(yaw) << std::endl;

  std::cout << "quat_w: " << quat.w() << std::endl;
  std::cout << "quat_x: " << quat.x() << std::endl;
  std::cout << "quat_y: " << quat.y() << std::endl;
  std::cout << "quat_z: " << quat.z() << std::endl;

  // Outputs:
  // real: 0.866025
  // imag: 0.5
  // quat_w: 0.965926
  // quat_x: 0
  // quat_y: 0
  // quat_z: 0.258819

  return 0;
}
