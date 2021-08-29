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
        texture=ImageTexture(url=['../../images/5/newport30-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[25,25,24,23,22,19,17,16,15,14,12,11,7,4,3,3,3,2,1,0,0,0,0,26,25,24,23,21,20,18,17,16,15,14,12,10,6,4,3,1,1,1,1,0,0,1,26,25,24,23,21,20,19,18,17,16,14,13,13,12,10,0,0,1,1,1,1,1,1,26,25,24,23,22,20,19,18,17,16,15,14,14,11,8,1,0,1,1,1,1,1,1,27,26,24,23,22,20,19,18,17,17,16,14,13,10,8,9,3,1,1,1,1,1,1,27,26,24,23,21,20,19,18,17,16,16,15,13,10,9,9,4,2,1,1,1,1,1,26,25,24,23,22,21,19,18,17,17,15,15,14,11,9,9,5,3,2,1,1,1,1,25,24,24,23,21,21,20,19,18,18,16,15,14,13,11,9,5,4,3,2,1,2,1,25,25,24,22,21,21,20,19,18,18,17,16,14,13,11,9,6,4,3,3,2,2,2,25,24,24,23,22,22,21,20,19,18,18,16,15,13,12,9,6,5,4,3,3,2,2,25,24,24,24,23,22,22,21,20,20,18,17,15,14,12,9,6,5,4,3,3,3,2,25,24,24,24,23,23,22,21,21,20,19,17,15,13,12,9,7,6,5,4,3,3,3,26,25,24,24,23,23,22,22,21,20,19,17,15,13,11,8,7,6,5,4,4,3,3,28,27,26,25,23,23,23,22,22,21,19,18,15,13,11,8,7,7,6,5,4,3,3,29,28,27,26,24,24,23,22,22,21,20,18,16,13,11,8,8,7,6,5,4,3,3,31,30,28,26,26,25,24,23,22,21,20,19,16,14,11,9,8,7,6,5,4,4,3,31,30,28,26,26,25,24,24,22,22,21,19,17,14,12,10,8,7,6,5,4,4,3,30,29,27,26,26,25,24,24,23,23,22,20,17,15,13,10,8,7,6,5,4,4,3,29,27,26,26,25,25,24,24,24,23,23,21,18,16,14,12,9,7,6,5,4,4,3,30,28,26,25,24,25,25,24,24,24,23,21,19,17,15,12,10,7,6,5,4,4,3,30,29,26,25,24,24,25,25,25,25,24,22,19,17,15,13,10,6,5,5,4,3,3,31,30,28,26,25,24,25,26,26,26,24,22,19,18,17,14,10,6,5,4,4,3,3,31,30,29,27,26,25,25,26,27,26,25,22,20,19,17,14,9,6,5,4,4,3,3],
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
