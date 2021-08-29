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
        texture=ImageTexture(url=['../../images/5/newport7-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,32,33,34,34,34,32,31,29,27,24,21,18,16,14,12,7,0,0,0,0,0,0,32,34,34,34,35,34,33,31,29,27,25,21,18,15,13,9,2,0,0,0,0,0,0,33,35,35,34,34,34,33,31,30,27,25,22,18,15,13,7,0,0,0,0,0,0,0,33,35,34,33,33,34,33,32,30,28,25,22,18,15,12,6,0,0,0,0,0,0,0,32,34,34,33,33,34,34,32,30,28,26,23,19,15,9,1,0,0,0,0,0,0,0,31,33,34,35,35,34,33,32,30,28,26,23,19,15,8,0,0,0,0,0,0,0,0,31,32,33,34,33,33,33,33,30,28,26,23,19,16,8,0,0,0,0,0,0,0,0,29,31,32,33,34,34,34,33,30,28,26,23,19,15,8,0,0,0,0,0,0,0,0,28,31,32,32,33,34,33,32,30,27,24,22,18,15,9,1,0,0,0,0,0,0,0,29,31,31,31,32,33,33,31,29,26,23,20,17,14,10,3,0,0,0,0,0,0,0,29,31,32,31,31,32,32,30,28,25,21,19,16,12,10,4,0,0,0,0,0,0,0,29,31,31,31,32,31,30,28,27,24,21,18,15,12,10,4,0,0,0,0,0,0,0,29,30,30,30,30,30,29,27,25,23,20,17,14,11,10,4,1,1,0,0,0,0,0,28,29,29,29,29,29,27,26,24,22,19,17,14,11,9,3,1,1,0,0,0,0,0,27,28,28,28,28,27,26,24,23,21,19,16,13,10,9,4,1,1,0,0,0,0,0,26,26,27,27,27,26,25,24,22,21,18,16,13,10,8,3,1,1,0,0,0,0,0,26,26,26,25,25,25,24,23,22,20,18,15,13,10,5,2,1,1,0,0,0,0,0,28,27,26,25,25,24,24,23,21,20,17,15,13,9,4,2,1,1,0,0,0,0,0,29,28,27,26,25,24,24,23,21,19,17,14,12,9,4,2,1,0,0,0,0,0,0,30,29,28,27,26,25,24,22,21,19,17,14,12,9,4,2,1,0,0,0,0,0,0,30,29,29,28,27,25,24,22,21,19,17,14,12,8,4,2,0,0,0,0,0,0,0,31,30,30,30,28,27,25,23,22,20,17,15,12,8,6,2,0,0,0,0,0,0,0,32,31,31,30,29,27,25,23,21,19,17,14,11,8,6,4,1,0,0,0,0,0,0],
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
