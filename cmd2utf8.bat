@echo off
echo Program start setting UTF-8 in your CMD.
echo Test before:
echo 'ęąłóżźć ☆★Œ©®'
echo 'chcp 65001'
chcp 65001
chcp
echo Test after:
echo 'ęąłóżźć ☆★Œ©®'
PAUSE
@echo on
