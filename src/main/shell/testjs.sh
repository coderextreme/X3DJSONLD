#!/usr/bin/bash
node "$1" && mv "$1" `dirname "$1"`/`basename "$1" .mjs`.good.mjs
