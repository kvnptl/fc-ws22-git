from setuptools import find_packages
from setuptools import setup

setup(
    name='fc_custom_interface',
    version='0.0.0',
    packages=find_packages(
        include=('fc_custom_interface', 'fc_custom_interface.*')),
)
