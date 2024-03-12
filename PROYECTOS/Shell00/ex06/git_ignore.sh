#!/bin/sh

ignored_files=$(git ls-files --ignored --exclude-standard)
echo $ignored_files
