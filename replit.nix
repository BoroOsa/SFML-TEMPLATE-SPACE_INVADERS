# all polygott packages should be present in `legacyPolygott`
# if you're missing packages, please let us know!
# https://ask.replit.com/c/bug-reports
{ pkgs, legacyPolygott }:
{
    deps = legacyPolygott;

    env.LD_LIBRARY_PATH = pkgs.lib.makeLibraryPath legacyPolygott;
}
