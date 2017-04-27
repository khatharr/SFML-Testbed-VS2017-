# SFML-Testbed
This is a "ready-to-go" copy of SFML for use in Visual Studio 2017. It includes a simple entry point with a tiny test program. All of the SFML headers are included in the project and have been altered to correctly refer to one another locally. All of the SFML libraries and their included dependencies are included and linked via the Solution Explorer. SFMLs OS dependencies are also linked in this way, though it required a little black magic to make it happen.

This is basically a project that I keep on hand so that I can test ideas in SFML, or check the specific effects and usages of SFML functions. SFML is designed such that it's supposed to be "installed" on the machine and then included and linked from its install location, but this is a massive pain in the ass in terms of project portability.

For more information on SFML, refer to their official website: http://www.sfml-dev.org/

The current SFML release has a problem with PCB warnings in the static libs. In order to correct this issue, I built the static lib files used here from the corrected branch in the SFML GitHub repo: https://github.com/SFML/SFML/tree/bugfix/vs_debug_z7
