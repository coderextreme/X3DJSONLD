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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,57.084809373449744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[14,19,24,32,37,31,37,52,55,46,50,65,98,65,49,37,31,36,35,38,38,41,16,21,27,35,37,48,42,59,51,48,63,94,76,53,42,39,35,35,38,40,42,42,19,24,32,45,52,47,58,58,50,53,77,118,59,51,45,39,36,37,38,40,43,44,23,25,34,51,54,65,71,57,53,66,103,84,63,52,45,38,37,37,40,41,45,48,23,28,34,52,61,68,64,56,58,77,109,75,84,94,46,35,39,39,41,44,49,52,22,26,33,42,53,60,58,58,65,87,101,86,80,61,46,43,38,39,43,48,52,58,24,30,38,41,58,59,52,58,76,95,89,89,111,68,45,44,41,41,47,53,62,66,27,35,47,41,53,52,49,59,77,93,105,91,108,60,46,44,41,43,49,55,71,79,27,39,46,54,52,45,48,66,89,95,139,107,98,57,52,47,44,46,51,61,75,84,25,33,42,54,49,46,49,60,78,81,131,149,72,56,50,49,47,50,57,73,85,101,28,31,37,40,46,44,53,62,78,87,118,105,72,55,55,45,51,57,67,86,101,122,31,33,33,42,40,44,65,69,72,139,130,114,63,55,50,52,54,65,79,102,122,133,37,36,38,37,38,47,66,74,83,121,175,94,58,53,57,55,63,80,100,121,142,152,36,32,39,37,40,52,73,81,107,161,123,87,57,57,59,64,78,97,123,148,170,175,32,33,34,35,38,59,59,76,159,162,113,68,62,60,65,76,94,119,144,175,202,210,28,33,33,38,40,70,69,94,144,200,99,67,65,70,74,89,115,141,168,199,229,248,31,33,35,35,41,60,82,83,142,128,83,72,75,78,88,107,134,165,188,220,250,277,30,33,35,37,48,51,63,113,143,151,80,78,86,93,103,124,154,188,217,236,280,300,29,33,38,39,46,62,62,113,119,129,83,85,93,104,118,140,167,203,238,268,286,343,32,32,35,40,44,52,58,84,165,138,83,93,103,117,135,153,183,215,264,288,342,412,31,30,33,50,50,48,64,164,127,136,90,98,112,129,149,171,200,234,286,336,383,516,30,29,38,60,60,52,89,163,156,114,95,105,121,141,160,186,210,251,293,344,413,487,29,29,38,58,60,51,90,164,160,118,94,105,122,141,161,188,211,252,296,343,412,496],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
