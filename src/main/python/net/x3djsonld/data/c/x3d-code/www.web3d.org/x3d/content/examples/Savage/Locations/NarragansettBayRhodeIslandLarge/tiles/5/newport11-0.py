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
        texture=ImageTexture(url=['../../images/5/newport11-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,19,22,23,18,15,14,11,8,11,14,10,7,7,11,12,13,13,11,11,15,14,10,13,16,19,17,20,21,16,12,9,7,7,6,6,7,11,11,11,12,13,14,14,8,11,13,15,16,20,21,21,19,11,6,5,4,5,4,6,10,14,18,16,12,12,8,8,12,14,14,18,22,23,23,17,12,9,9,7,7,7,10,14,16,15,15,14,8,8,13,19,18,19,24,24,21,21,19,16,13,12,10,9,10,15,19,19,18,19,8,8,8,16,17,17,20,25,22,20,17,19,16,13,12,12,12,14,15,16,16,16,8,8,12,15,17,17,17,19,20,18,17,16,15,12,11,13,14,13,15,14,14,14,10,11,13,14,16,14,13,13,14,14,16,15,13,13,11,8,11,10,12,14,15,15,18,19,18,15,13,15,14,11,11,13,15,15,14,13,10,12,14,16,15,15,14,14,32,31,25,20,14,14,11,11,13,16,16,18,15,14,13,12,14,12,14,12,14,14,36,37,32,25,19,15,12,12,12,14,17,16,15,16,13,10,13,14,14,14,13,13,45,44,36,27,19,14,12,10,11,15,15,14,14,15,14,14,13,17,20,22,21,20,40,36,30,23,19,14,12,14,12,13,13,16,15,12,13,16,17,23,30,36,39,39,27,26,25,21,18,14,14,15,14,14,15,15,14,9,10,15,21,30,38,44,48,48,20,22,19,15,14,14,16,13,14,13,15,13,12,11,8,15,23,32,39,43,41,40,14,14,13,15,17,16,17,16,15,13,14,12,13,14,11,11,20,28,35,36,29,28,8,8,12,16,14,15,16,19,23,21,15,16,16,17,15,13,14,20,25,25,19,18,4,3,6,10,9,11,15,23,29,27,23,19,14,12,10,10,14,15,17,16,14,14,9,8,8,7,10,14,16,26,32,32,32,25,20,16,12,11,13,15,13,10,12,12,12,10,10,11,14,23,25,28,31,36,34,34,32,27,27,21,19,16,10,7,7,8,13,15,15,16,22,27,30,33,36,39,42,40,36,35,37,29,21,14,9,10,9,9,15,16,17,19,22,29,36,36,37,40,42,41,36,36,35,30,21,14,11,8,7,8,17,19,19,24,25,26,29,33,35,39,38,38,36,34,33,27,18,14,12,8,10,11,17,20,20,24,24,26,28,31,35,39,38,38,34,33,33,28,19,15,13,9,11,12],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
