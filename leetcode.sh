#!/bin/bash

set -e

create_run_script ()
{
  cat > run.sh <<-EOM
#!/bin/bash

g++ -std=c++11 solution.cpp
./a.out "\$@"
EOM
  chmod +x run.sh
}

create_solution_file ()
{
  cat > solution.cpp <<-EOM
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {

}
EOM
}

leetcode_init ()
{
  EXERCISE_NAME="$(echo $1 | tr -d ' ')"

  if [ -z "$EXERCISE_NAME" ]; then
    echo "error: invalid name, exercise name is empty"
    exit 1
  fi

  if [ -d "$EXERCISE_NAME" ]; then
    echo "warning: exercise already exists"
    exit 0
  fi

  mkdir $EXERCISE_NAME

  pushd $EXERCISE_NAME > /dev/null
  create_run_script
  create_solution_file
  popd > /dev/null

  echo "Succesfully created solution ./$EXERCISE_NAME"

  exit 0
}

CMD="$1"

case "$CMD" in
  "init")
    leetcode_init "$2"
    ;;
  *)
    echo "error: command $CMD not implemented"
    exit 1
    ;;
esac
