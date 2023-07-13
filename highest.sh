#!/bin/bash
max_pid=$(cat /proc/sys/kernel/pid_max)

highest_pid=$(ps -ef | awk '{print $2}' | sort -n | tail -1)

if [ $highest_pid -gt $max_pid ]; then
  highest_pid=$max_pid
fi

echo "The highest PID possible is: $highest_pid"
