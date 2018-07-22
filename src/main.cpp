#include <version.h>
#include <cstdio>

int main(int argc, char** argv)
{
    printf("opentun %d.%d.%d %s\ngit commit %s from branch %s\n",
           OPENTUN_VERSION_MAJOR, OPENTUN_VERSION_MINOR, OPENTUN_VERSION_PATCH, OPENTUN_VERSION_SUFFIX,
           OPENTUN_GIT_COMMIT_HASH, OPENTUN_GIT_BRANCH);

    return 0;
}
