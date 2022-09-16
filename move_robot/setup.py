from setuptools import setup

package_name = 'move_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='waseem',
    maintainer_email='mohammedwaseem019@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'move_robot_client = move_robot.move_robot_client:main',
            'move_robot_action = move_robot.move_robot_action:main'
        ],
    },
)
