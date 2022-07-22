#!/bin/bash

commit_id=$(git log --pretty="%H" -5)
echo $commit_id | tr ' ' '\n'
