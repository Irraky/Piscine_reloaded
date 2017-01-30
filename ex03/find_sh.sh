/bin/sh
find ./* -name "*.sh" | cut -d. -f2| rev | cut -d/ -f 1 | rev
