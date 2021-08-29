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
        texture=ImageTexture(url=['../../images/5/newport7-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[12,9,6,3,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,2,9,11,8,5,3,2,2,2,2,3,4,3,0,0,0,0,0,0,0,0,0,0,4,13,11,7,5,3,2,2,2,2,4,6,6,3,0,0,0,0,0,0,0,0,0,5,14,11,7,5,4,3,3,3,3,5,7,8,4,0,0,0,0,0,0,0,0,0,4,13,11,8,6,4,4,4,4,4,6,8,9,4,0,0,0,0,0,0,0,0,0,3,10,12,8,6,5,5,6,6,6,7,9,9,7,2,0,0,0,0,0,0,0,0,0,3,13,9,7,5,6,7,7,7,8,8,10,9,8,3,0,0,0,0,0,0,0,0,0,13,9,7,7,7,8,8,8,8,8,10,11,12,13,4,0,0,0,0,0,0,0,0,14,10,8,8,9,10,9,9,9,9,11,12,14,15,9,2,0,0,0,0,0,0,0,14,11,9,9,11,11,11,10,10,10,11,12,14,17,14,6,1,1,1,1,1,1,1,15,12,11,10,12,12,12,12,11,11,11,11,14,17,16,12,8,2,1,1,1,5,3,14,13,12,11,12,13,13,13,13,12,12,12,17,21,19,15,11,7,3,2,2,7,5,14,13,12,12,13,13,14,14,14,13,14,15,21,24,21,17,14,12,10,7,3,9,10,13,13,13,13,13,14,15,15,15,15,16,19,25,27,23,19,16,15,14,12,10,12,12,14,13,13,13,14,16,17,17,17,17,18,20,27,29,26,23,19,18,17,16,15,14,14,14,14,14,15,17,18,19,19,19,18,18,20,27,30,29,26,22,20,20,19,18,18,17,15,14,15,17,19,20,21,21,20,19,18,19,25,30,32,29,24,23,22,21,21,21,20,16,15,16,19,21,21,21,21,21,20,19,19,24,30,33,31,26,25,24,24,24,24,24,17,16,17,20,22,22,22,22,22,22,21,21,24,29,32,33,29,28,26,25,26,27,27,19,18,19,21,22,22,22,22,22,23,23,23,25,28,32,34,32,31,29,27,27,29,29,19,19,20,21,23,24,23,23,23,24,24,25,26,27,31,33,34,34,33,30,29,30,31,19,19,20,22,24,25,24,24,24,25,25,27,27,28,30,33,36,37,36,32,31,30,31,20,19,20,22,24,24,23,23,24,25,26,28,28,29,31,33,37,39,38,34,32,31,31],
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
