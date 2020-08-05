#!/usr/bin/env bash

echo -e "\nCMakeLists.txt project file generation is enabled via environment variable\n"

echo -e "https://android.googlesource.com/platform/build/soong/+/HEAD/docs/clion.md\n"

export SOONG_GEN_CMAKEFILES=1

export SOONG_GEN_CMAKEFILES_DEBUG=1

echo "Check SOONG_GEN_CMAKEFILES: $SOONG_GEN_CMAKEFILES"

echo "Check SOONG_GEN_CMAKEFILES_DEBUG: $SOONG_GEN_CMAKEFILES_DEBUG"

echo -e "\e[1;33m Done."

