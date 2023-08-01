#!/bin/bash

ifconfig | grep -Eio "(?:[0-9a-fA-F]{2}\:){5}[0-9a-fA-F]{2}"
