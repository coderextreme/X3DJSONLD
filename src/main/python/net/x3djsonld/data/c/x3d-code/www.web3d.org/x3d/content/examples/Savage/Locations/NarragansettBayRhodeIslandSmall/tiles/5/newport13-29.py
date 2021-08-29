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
        texture=ImageTexture(url=['../../images/5/newport13-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.20080872015217,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,2,7,11,14,16,18,19,20,20,21,22,23,24,26,27,28,29,30,30,29,29,29,0,0,4,7,11,13,14,16,18,19,20,21,23,24,26,27,28,29,30,30,29,29,30,0,0,1,4,7,9,11,13,16,17,18,21,22,24,26,27,28,28,29,30,30,30,30,0,0,0,2,5,7,9,11,13,15,17,20,22,23,25,26,27,28,28,29,30,31,31,0,0,0,1,3,5,6,8,10,12,15,18,20,22,24,26,27,27,28,29,30,32,33,0,0,0,1,1,3,4,5,7,10,13,17,19,21,24,25,26,27,27,28,30,32,34,0,0,0,1,1,1,2,3,6,8,11,14,17,20,23,24,25,25,26,28,30,32,34,0,0,0,1,1,1,2,2,4,7,9,11,15,19,22,23,24,24,26,28,30,32,35,0,0,0,1,1,2,2,2,3,4,6,9,12,16,19,21,22,24,26,28,30,32,34,0,0,1,1,2,2,2,2,2,3,4,7,9,12,15,17,21,24,26,28,30,31,35,0,1,1,2,2,2,2,2,2,2,3,5,7,9,12,15,19,22,25,27,29,31,35,1,1,1,1,2,2,2,2,2,2,2,3,5,7,10,14,16,20,24,26,29,31,34,1,1,1,1,1,2,2,2,2,2,2,2,4,6,8,11,15,18,22,25,28,30,33,0,0,0,0,1,1,2,2,2,2,2,2,3,5,7,10,14,18,21,24,27,30,32,0,0,0,0,0,1,1,2,2,2,2,2,2,3,5,9,13,17,20,23,26,29,31,1,1,1,0,0,1,1,1,2,2,2,2,2,2,4,8,12,16,19,22,25,28,29,1,0,0,0,1,1,1,1,2,2,2,2,1,1,3,7,11,14,18,21,24,27,29,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,6,10,13,17,21,24,26,29,0,0,0,0,0,0,1,1,1,1,1,1,1,2,3,5,9,13,17,20,23,26,29,0,0,1,0,0,0,0,0,1,0,0,1,2,2,3,6,8,11,16,19,22,24,27,0,0,0,0,0,0,0,0,0,0,0,1,2,2,3,5,8,10,14,18,21,23,26,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,6,8,11,16,19,21,24,0,0,0,0,1,0,0,0,0,0,0,0,0,1,2,3,5,7,10,15,18,20,22],
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
