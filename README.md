# NTP-TTD
Test-Driven Development project for NTP class. Made by Mateusz Bardel and Szymon Antkowiak.

# Useful links

The barebones of testing environment and what is currently in master repo. 
Some functions were taken from recent cpp laboratories
https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code

Gtest repo
https://github.com/google/googletest

User guide
https://google.github.io/googletest/

# Turning off some not needed features

In `googletest\CMakeLists.txt` change ON to OFF in `gtest_build_samples`, `BUILD_GMOCK` and `INSTALL_GTEST` options. That's already done in this repo.
