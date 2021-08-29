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
        texture=ImageTexture(url=['../../images/5/newport11-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,0,0,0,0,0,2,3,1,1,1,2,3,4,5,5,3,1,1,0,1,1,1,0,2,1,0,0,1,2,2,3,3,3,4,5,6,5,4,3,3,0,1,2,2,2,2,1,1,1,1,1,3,3,4,4,4,4,7,8,4,4,4,1,1,2,3,3,2,1,1,1,3,0,1,3,5,5,6,8,13,13,7,4,4,2,2,3,4,3,3,3,2,2,2,0,0,3,5,8,10,13,16,14,10,7,6,4,2,3,4,4,4,4,5,5,4,3,3,4,6,9,13,15,16,15,13,11,10,4,4,4,5,6,5,6,7,7,7,7,7,7,7,8,15,18,17,17,15,13,12,5,4,5,6,7,8,8,8,8,9,9,9,9,8,8,14,17,17,17,16,13,11,6,5,6,7,8,9,9,8,9,9,9,10,9,9,9,10,13,14,16,16,13,11,8,8,9,10,9,11,11,9,8,9,10,10,10,10,10,10,11,13,17,15,11,10,8,11,11,12,13,14,13,10,9,10,11,11,10,11,10,10,10,12,16,11,8,8,10,10,11,11,12,15,14,11,12,12,13,13,12,12,12,11,10,10,11,9,7,7,12,11,12,12,12,13,14,14,14,15,15,14,14,12,11,11,11,11,9,9,9,9,13,12,14,14,14,13,13,15,16,16,14,14,14,13,11,11,10,10,9,10,10,10,15,14,15,15,15,15,14,17,19,18,16,16,16,15,15,13,12,10,10,11,10,10,17,17,20,18,17,17,18,19,21,21,18,17,17,17,16,14,13,13,13,13,13,13,18,17,19,19,19,19,20,20,21,21,20,19,19,19,18,16,14,14,14,13,13,13,20,19,17,18,20,21,21,21,20,21,22,22,22,21,20,18,16,17,15,14,15,15,25,24,20,22,23,23,21,22,22,23,23,22,22,21,20,20,20,18,17,15,15,16,25,26,27,26,26,26,23,22,23,22,23,22,21,22,22,24,24,23,19,21,19,19,26,27,29,28,27,28,28,24,23,23,24,24,25,27,28,29,31,32,27,28,20,20,31,30,30,31,29,29,28,30,30,28,29,27,31,35,34,31,31,33,31,20,20,20,34,34,34,34,32,30,30,34,34,36,38,31,39,37,40,34,31,32,31,27,20,20,34,34,34,35,33,31,31,34,35,36,40,32,40,37,40,35,31,31,31,27,20,20],
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
