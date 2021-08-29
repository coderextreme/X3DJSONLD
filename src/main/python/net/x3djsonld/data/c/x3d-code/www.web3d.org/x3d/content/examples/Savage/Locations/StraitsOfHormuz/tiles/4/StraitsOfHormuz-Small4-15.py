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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small4-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[23,25,24,25,29,31,28,28,34,42,34,43,84,74,80,51,35,32,35,32,35,72,28,25,61,27,29,102,30,29,37,43,40,46,58,77,47,41,35,33,34,36,63,48,26,30,42,28,34,70,31,34,41,48,43,43,50,75,49,35,39,38,37,42,68,45,29,28,35,29,34,38,33,42,44,47,43,52,68,52,40,41,44,42,42,59,50,109,29,27,76,32,33,33,34,43,40,45,44,51,49,47,54,41,46,55,49,73,114,182,33,35,74,34,31,35,33,36,38,42,54,62,72,89,50,47,50,51,49,65,148,125,33,44,54,34,37,40,37,36,45,45,63,89,93,70,62,54,61,55,65,155,105,62,40,46,42,37,37,34,39,39,43,63,95,101,106,68,70,61,62,73,87,151,82,50,38,40,58,39,42,39,42,41,48,60,73,115,78,66,67,90,78,107,187,98,63,64,36,47,148,43,40,41,43,45,52,75,100,85,82,82,88,102,99,224,93,96,56,74,39,63,87,140,40,41,44,45,60,59,72,102,97,119,105,108,177,82,73,62,58,80,46,46,123,120,40,41,50,49,50,57,82,92,124,113,94,145,100,102,65,61,68,65,41,87,149,50,43,43,57,61,53,55,68,88,122,110,84,79,101,72,64,68,82,67,42,100,123,45,48,48,46,54,57,66,72,93,104,95,83,116,80,91,74,83,80,77,47,119,92,46,49,49,47,49,61,77,89,117,101,88,142,99,119,90,80,103,97,93,63,108,106,53,50,52,59,50,54,61,82,96,92,106,137,129,111,84,109,123,203,177,70,125,62,52,52,60,64,56,54,62,79,78,108,135,155,108,93,94,139,353,488,458,86,90,60,52,52,59,86,76,56,75,72,81,107,168,106,121,98,109,456,454,420,292,63,91,57,57,57,61,80,76,64,67,70,98,162,140,119,118,120,131,340,395,367,248,64,141,60,56,74,66,128,70,61,68,70,112,107,111,137,145,399,372,265,352,359,249,53,61,64,60,84,75,95,76,61,67,96,102,92,113,148,253,375,357,462,280,290,429,57,57,64,60,87,105,100,82,65,76,100,88,102,130,324,370,437,473,381,286,276,321,56,57,66,60,84,105,102,86,64,77,103,87,105,136,315,387,417,471,391,277,290,322],
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
