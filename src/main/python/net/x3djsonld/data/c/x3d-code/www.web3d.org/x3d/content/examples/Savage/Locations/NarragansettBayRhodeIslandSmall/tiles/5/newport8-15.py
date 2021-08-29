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
        texture=ImageTexture(url=['../../images/5/newport8-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[6,6,6,6,7,7,8,8,9,9,10,10,11,12,13,15,15,17,20,22,24,25,26,5,5,4,4,5,5,6,7,9,9,8,8,10,11,11,13,15,17,19,20,23,25,26,4,4,3,4,4,5,6,7,7,8,7,9,10,10,11,13,15,16,18,20,22,24,25,4,5,5,5,5,5,5,5,5,6,7,8,9,9,10,12,14,15,18,19,21,23,24,6,6,6,3,3,4,4,3,3,6,6,7,9,10,10,12,14,16,18,18,20,22,23,9,9,7,3,3,3,3,2,2,4,4,7,10,10,10,11,13,14,15,17,19,21,23,10,8,6,3,3,3,4,3,3,4,4,5,7,8,8,11,13,13,14,16,19,21,23,8,8,7,3,3,3,3,4,4,3,4,6,6,7,9,11,12,12,12,16,17,19,22,7,8,9,6,4,2,3,4,3,3,3,4,5,6,8,10,12,12,14,17,17,18,21,7,7,7,5,4,5,5,5,5,4,4,4,5,5,7,10,11,13,13,15,16,18,22,6,7,6,4,5,7,6,6,8,8,6,4,3,5,7,10,10,11,12,14,16,18,20,6,7,5,3,3,4,4,5,6,6,5,4,4,6,9,12,13,14,15,18,18,19,21,5,6,4,3,3,4,4,5,5,4,3,3,5,7,10,14,15,17,17,18,20,21,21,5,5,6,4,2,2,4,5,4,3,5,5,6,8,12,13,14,16,18,18,22,23,24,4,4,4,3,2,2,3,6,5,5,7,7,7,10,13,14,15,16,17,20,23,25,25,4,3,3,3,2,2,2,6,9,11,10,8,7,10,11,13,16,18,20,22,23,24,24,6,6,7,5,2,0,1,4,7,8,9,9,10,12,12,14,18,19,21,22,26,27,27,5,9,9,5,2,0,0,2,3,4,9,14,18,18,16,17,20,22,23,23,25,28,28,5,7,8,5,2,1,1,2,4,7,13,20,26,27,22,19,18,21,23,23,25,25,26,4,4,6,7,4,3,4,6,8,11,15,19,24,27,24,20,19,22,25,25,25,26,25,3,4,6,8,5,4,6,8,10,12,14,17,20,22,21,21,23,25,27,28,28,29,28,4,5,7,9,6,4,4,6,9,12,15,17,19,20,20,22,23,26,28,28,30,31,31,3,4,6,9,8,5,4,6,10,14,16,17,18,19,20,22,24,26,28,29,31,33,33],
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
