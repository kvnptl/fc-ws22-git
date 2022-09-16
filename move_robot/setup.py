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
    maintainer='gokul',
    maintainer_email='gokulkrishnac0228@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_client = move_robot.move_robot_client:main',
            'robot_action = move_robot.move_robot_action:main'
        ],
    },
)
