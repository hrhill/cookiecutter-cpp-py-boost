from setuptools import setup, Extension

setup(
    name='{{cookiecutter.project_name}}',
    version='@{{cookiecutter.project_name}}_VERSION@',
    description='{{cookiecutter.description}}',
    author='{{cookiecutter.author}}',
    author_email='{{cookiecutter.author_email}}',
    long_description='''
    ''',
    packages=['{{cookiecutter.project_name}}'],
    data_files=[('.', [])],
    zip_safe=False
)
