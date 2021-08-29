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
        texture=ImageTexture(url=['../../images/5/newport11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[2,0,0,0,0,0,0,0,0,0,0,0,1,2,5,9,10,10,7,6,7,7,2,1,1,0,0,0,0,0,0,0,0,1,2,4,1,3,7,6,5,4,6,6,1,0,0,0,0,0,0,0,0,0,0,1,3,3,1,3,4,4,5,5,6,5,2,0,2,1,0,0,0,0,0,0,0,0,1,2,3,3,1,4,4,4,5,6,2,1,0,0,0,0,0,0,1,3,3,2,2,2,3,2,0,0,2,3,5,6,3,2,0,0,0,0,0,3,1,3,5,5,6,4,3,3,5,2,2,2,2,2,4,4,3,0,0,0,2,4,2,3,5,7,8,4,4,3,4,4,4,4,3,4,6,5,5,4,4,3,4,5,3,4,6,7,9,7,6,5,5,6,6,5,3,4,6,6,6,6,7,5,5,7,5,5,8,7,8,6,6,6,6,6,5,5,5,5,9,9,9,9,8,7,6,9,8,7,9,8,8,5,6,7,7,6,5,6,7,7,11,11,10,10,10,10,9,10,9,9,10,9,7,6,7,8,9,8,7,6,7,7,14,14,12,11,11,9,8,10,10,10,10,9,10,8,8,8,8,7,8,7,6,6,16,15,14,13,11,9,9,10,11,13,10,10,13,11,8,8,8,8,8,9,8,8,21,20,20,18,15,12,13,12,13,13,12,12,15,14,11,8,8,8,8,11,11,11,25,22,20,18,17,16,17,17,17,15,14,14,15,15,15,12,8,8,8,10,13,13,27,24,21,19,19,19,19,19,19,18,17,15,16,17,17,17,15,12,14,8,14,15,32,32,25,22,20,21,22,22,21,19,17,19,19,18,19,19,18,17,18,16,17,18,40,40,37,32,27,25,25,24,24,22,20,23,23,23,23,22,21,19,19,21,19,19,42,44,45,45,39,31,29,27,28,28,29,25,26,28,25,20,26,27,26,25,24,23,42,47,47,46,43,38,35,33,36,38,34,30,25,26,24,22,27,35,36,31,35,33,47,54,51,45,46,47,39,40,44,45,37,32,28,28,25,25,24,29,28,34,35,34,49,55,53,50,56,48,42,45,42,47,42,31,31,28,29,23,20,20,20,35,33,33,51,54,48,49,49,41,42,43,42,49,43,35,38,32,32,33,29,27,26,34,34,35,54,56,47,48,47,41,42,41,42,49,43,35,40,35,32,34,30,30,29,34,34,35],
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
