#!/usr/bin/env python
"""
This module provides functions to get a list of  block device partitions
and other utility functions to filter the partitions on label regex
"""

import subprocess
from subprocess import CalledProcessError


def get_user_data():
    block_dev_info = None
    try:
        proc = subprocess.Popen('blkid', stdout=subprocess.PIPE)
        block_dev_info = proc.stdout.read()
    except CalledProcessError:
        print("Error running blkid")

    if block_dev_info:
        print('output:', block_dev_info)

if __name__ == '__main__':
    get_user_data()
