#!/bin/bash
find . -name "*.sh" -exec basename {} \; | cut -f1 -d'.'
