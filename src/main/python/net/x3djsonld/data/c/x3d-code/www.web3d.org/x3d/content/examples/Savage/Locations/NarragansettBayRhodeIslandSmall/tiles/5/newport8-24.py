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
        texture=ImageTexture(url=['../../images/5/newport8-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,30,30,28,26,24,22,19,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,31,31,30,28,27,24,22,19,13,7,2,0,0,0,0,0,0,0,0,0,0,0,0,31,31,30,29,27,25,22,19,16,11,5,0,0,0,0,0,0,0,0,0,0,0,0,31,32,31,29,27,25,22,19,17,13,8,2,0,0,0,0,0,0,0,0,0,0,0,33,32,31,29,27,24,21,19,17,14,10,5,1,0,0,0,0,0,0,0,0,0,0,34,33,31,29,26,23,20,18,16,14,12,7,3,0,0,0,0,0,0,0,0,0,0,34,33,32,29,26,23,20,17,15,14,12,9,5,1,0,0,0,0,0,0,0,0,0,34,33,31,28,25,22,19,17,14,13,12,9,6,2,0,0,0,0,0,0,0,0,0,34,33,30,27,24,21,18,16,13,12,10,9,6,2,0,0,0,0,0,0,0,0,0,33,32,29,26,23,20,17,15,12,10,9,7,6,3,0,0,0,0,0,0,0,0,0,32,30,26,24,21,19,16,13,11,9,8,6,5,3,1,0,0,0,0,0,0,0,0,30,27,24,21,20,17,15,13,10,8,7,5,4,2,0,0,0,0,0,0,0,0,0,26,24,21,19,18,16,14,12,10,8,6,4,2,0,0,0,0,0,0,0,0,0,0,23,21,19,17,16,15,13,11,9,7,5,3,1,0,0,0,0,0,0,0,0,0,0,21,19,16,14,13,13,11,9,7,5,3,2,1,0,0,0,0,0,0,0,0,0,0,18,16,14,12,11,10,8,6,5,3,2,1,1,0,0,0,0,0,0,0,0,0,0,15,14,12,10,8,7,6,4,3,2,2,1,1,0,0,0,0,0,0,0,0,0,0,13,11,9,7,6,5,4,4,3,2,2,2,2,1,0,0,0,0,0,0,0,0,0,11,8,7,6,5,5,4,4,3,3,4,3,3,2,0,0,0,0,0,0,0,0,0,9,7,6,5,5,4,4,4,5,5,5,5,5,4,2,0,0,0,0,0,0,0,0,8,6,6,5,4,4,5,6,6,6,6,6,6,5,4,3,1,0,0,0,0,0,0,8,6,6,5,5,5,6,6,6,6,6,7,7,6,6,5,4,2,1,0,0,0,0,8,6,6,5,5,5,6,6,7,7,7,7,8,7,7,6,5,3,1,0,0,0,0],
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
