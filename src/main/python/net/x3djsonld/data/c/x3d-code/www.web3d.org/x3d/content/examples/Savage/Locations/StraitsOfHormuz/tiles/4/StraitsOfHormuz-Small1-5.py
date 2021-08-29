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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small1-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.56099515838445,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[66,33,33,38,41,38,39,37,41,43,44,48,50,54,51,50,79,111,156,262,306,325,46,34,34,35,42,36,36,38,42,43,42,46,48,47,48,46,57,121,118,211,247,271,51,30,30,36,37,34,38,38,38,40,39,43,45,45,43,42,48,123,169,206,241,270,76,29,29,30,34,36,32,34,39,35,39,40,41,42,41,39,47,97,152,181,265,287,64,31,28,29,29,27,29,32,34,35,28,39,39,36,38,36,38,56,133,177,116,203,50,30,28,27,26,31,31,29,32,29,28,31,32,33,36,32,37,70,119,73,250,287,55,26,25,28,28,28,29,28,36,27,28,29,30,29,34,29,33,43,72,97,247,272,61,28,27,23,27,23,23,22,26,23,26,27,28,29,29,24,34,43,70,117,194,275,34,33,25,24,21,27,23,23,25,31,26,24,29,28,27,26,28,35,57,83,163,232,45,25,25,22,19,23,21,20,22,22,21,21,22,25,24,23,24,28,36,109,119,143,71,20,24,25,23,20,20,20,19,20,19,22,21,17,22,22,21,24,34,66,144,146,65,20,20,24,24,18,17,15,16,20,15,18,13,22,15,21,26,20,32,66,93,172,72,21,24,25,21,19,23,18,19,18,15,17,16,19,17,18,19,18,26,40,125,162,80,29,21,19,20,18,16,16,13,17,16,18,16,16,17,18,19,18,25,36,75,90,47,31,23,20,19,21,18,16,19,15,15,16,14,20,14,16,14,19,20,35,45,82,58,66,29,18,16,17,17,17,16,17,13,13,17,13,16,14,15,17,20,27,39,52,48,56,63,13,15,13,17,16,13,15,15,14,13,13,14,12,15,17,18,24,27,77,27,74,61,20,12,17,15,15,16,13,10,11,11,11,10,11,18,22,19,22,31,35,54,33,65,47,14,12,15,12,16,26,13,10,11,6,12,14,16,18,20,28,32,37,62,29,48,65,12,23,15,8,11,11,30,14,10,11,12,19,12,17,24,26,37,39,31,57,33,57,50,11,13,8,7,11,13,14,7,13,12,16,17,19,23,28,36,43,35,46,52,38,50,42,10,9,11,9,10,9,13,11,8,8,17,20,27,34,37,43,34,41,53,36,50,46,9,12,8,11,10,10,14,13,9,13,19,20,27,34,38,44],
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
