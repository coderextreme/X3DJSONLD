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
        texture=ImageTexture(url=['../../images/5/newport15-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,13,15,4,0,0,0,0,0,0,2,3,0,0,0,0,1,0,0,0,0,0,3,20,19,17,3,0,4,2,7,13,19,14,0,0,4,0,3,2,0,0,0,0,17,21,25,24,20,20,20,26,22,19,21,14,8,0,3,4,7,0,0,0,0,0,19,24,27,28,28,29,29,30,31,27,20,16,11,8,6,5,14,3,6,5,0,0,14,19,26,29,30,30,29,28,28,30,22,18,14,15,10,5,6,0,1,0,0,0,15,18,23,26,29,29,29,25,24,27,25,23,18,14,5,0,0,0,0,0,0,0,15,19,23,25,26,26,29,25,21,20,20,23,17,11,3,0,0,0,0,0,0,0,20,24,26,24,26,26,25,24,18,15,12,12,9,6,4,0,0,0,0,0,0,0,21,26,26,25,25,24,24,24,20,13,5,4,4,4,4,0,0,0,0,0,0,0,23,27,28,27,27,25,24,23,23,17,4,1,2,2,0,0,0,0,0,0,0,0,22,25,28,30,28,27,25,22,21,22,8,3,3,0,0,0,0,0,0,0,0,0,20,24,28,30,28,25,23,20,20,20,13,5,1,0,0,0,0,0,0,0,0,0,18,22,28,29,26,23,21,22,22,17,11,3,0,0,0,0,0,0,0,0,0,0,16,20,25,26,25,22,20,19,17,15,10,0,0,0,0,0,0,0,0,0,0,0,13,17,20,23,23,21,18,17,15,12,4,0,0,0,0,0,0,0,0,0,0,0,10,12,15,20,21,19,17,14,10,4,0,0,0,0,0,0,0,0,0,0,0,0,6,8,11,17,18,18,16,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,9,10,12,14,15,14,12,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,14,14,13,11,10,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,14,14,13,11,10,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
