#!/bin/bash

find . -type f -name "*.c" -exec norminette {} \;

find . -type f -name "*.h" -exec norminette -R CheckDefine {} \;

find . -type f -name "*.h" -exec norminette -R CheckForbiddenSourceHeader {} \;
