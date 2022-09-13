from setuptools import setup

package_name = 'python_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        # ('share/ament_index/resource_index/packages',
        #     ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vamsi',
    maintainer_email='vamsikalagaturu@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    entry_points={
        'console_scripts': [
            "talker = python_pubsub.simple_publisher:main",
            "listener = python_pubsub.simple_subscriber:main"
        ],
    },
)
