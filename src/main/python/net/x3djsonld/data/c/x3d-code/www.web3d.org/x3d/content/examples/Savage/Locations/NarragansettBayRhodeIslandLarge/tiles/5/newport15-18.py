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
        texture=ImageTexture(url=['../../images/5/newport15-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,3,7,12,17,22,21,22,22,18,17,17,15,10,0,0,0,0,0,0,0,0,0,4,9,17,22,24,23,25,24,20,20,16,13,6,0,0,0,0,0,0,0,0,0,9,11,16,21,25,27,25,25,22,21,17,13,0,0,0,0,0,0,0,0,0,1,14,16,19,24,28,29,28,27,23,22,15,9,0,0,0,0,0,0,1,2,0,0,14,19,22,24,26,28,29,28,24,22,15,0,0,0,0,0,0,0,1,2,0,0,11,22,27,29,29,30,32,30,26,21,14,0,0,0,0,0,0,1,2,3,0,0,7,24,30,31,28,27,29,30,30,22,12,0,0,0,0,0,0,3,15,17,0,0,8,20,30,33,33,30,31,31,29,21,12,0,0,0,0,0,0,4,18,19,0,0,5,15,27,31,30,31,29,30,28,20,10,0,0,0,0,0,0,0,13,14,0,0,5,11,20,28,30,29,27,27,25,18,9,0,0,0,0,0,0,3,13,15,0,0,3,9,14,21,25,26,25,23,19,14,5,0,0,0,0,0,0,10,14,15,0,2,6,8,9,15,18,21,21,19,14,10,2,0,0,0,0,0,0,15,20,20,0,1,5,5,7,9,12,14,15,15,11,4,0,0,0,0,0,0,4,15,20,21,0,1,2,4,4,6,9,13,14,11,8,0,0,0,0,0,0,0,9,15,22,23,0,0,0,0,0,2,7,11,13,8,4,2,0,0,0,0,0,4,12,16,21,22,1,0,0,0,0,1,6,11,10,6,1,0,0,0,0,0,0,6,13,16,19,20,4,0,0,0,0,0,1,7,8,5,1,0,0,0,0,0,0,2,9,14,18,18,7,3,0,0,0,0,0,1,7,6,1,0,0,0,0,0,0,3,7,12,15,16,6,3,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,1,3,8,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,3,3,3,6,9,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,7,6,6,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,9,12,11,12,9,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,12,15,18,17,14,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,14,16,19,18,15,14,13],
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
