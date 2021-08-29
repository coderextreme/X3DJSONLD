###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

children=[
xml(
  children=[
  MainFile(HRef=../ArleighBurkeReadme.htm),
  File(HRef=image001.png),
  File(HRef=image002.jpg),
  File(HRef=image003.png),
  File(HRef=image004.jpg),
  File(HRef=image005.png),
  File(HRef=image006.jpg),
  File(HRef=image007.png),
  File(HRef=image008.jpg),
  File(HRef=image009.png),
  File(HRef=image010.jpg),
  File(HRef=image011.png),
  File(HRef=image012.jpg),
  File(HRef=image013.png),
  File(HRef=image014.jpg),
  File(HRef=image015.png),
  File(HRef=image016.jpg),
  File(HRef=image017.png),
  File(HRef=image018.jpg),
  File(HRef=image019.png),
  File(HRef=image020.jpg),
  File(HRef=image021.png),
  File(HRef=image022.jpg),
  File(HRef=image023.png),
  File(HRef=image024.jpg),
  File(HRef=image025.png),
  File(HRef=image026.jpg),
  File(HRef=filelist.x3d)])]
###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
