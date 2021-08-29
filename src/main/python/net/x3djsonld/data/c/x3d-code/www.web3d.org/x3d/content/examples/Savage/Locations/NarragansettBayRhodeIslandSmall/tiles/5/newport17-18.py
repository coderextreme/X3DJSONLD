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
        texture=ImageTexture(url=['../../images/5/newport17-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,13,16,18,21,23,26,27,29,30,30,29,29,29,29,29,30,29,29,30,30,23,14,10,11,13,17,20,22,23,25,27,28,30,27,26,27,28,29,30,28,25,21,16,9,5,9,11,11,13,16,20,22,24,26,29,28,23,21,23,26,28,29,24,14,6,4,5,9,7,8,9,10,12,15,19,20,20,22,23,22,22,22,23,26,27,18,9,4,5,10,19,5,6,7,9,9,11,15,18,18,19,20,22,22,21,21,22,21,11,5,5,11,18,24,2,2,3,3,5,8,11,14,16,18,18,17,17,18,20,17,11,4,5,9,20,25,26,0,0,0,0,1,2,6,9,11,14,16,15,14,14,15,9,4,5,12,17,23,25,27,0,0,0,0,0,0,0,2,5,8,12,12,9,8,6,4,4,9,17,20,21,25,28,0,0,0,0,0,0,0,0,0,0,4,7,5,4,4,4,5,12,20,20,22,25,27,0,0,0,0,0,0,0,0,0,0,0,2,3,3,4,5,8,14,17,19,21,22,24,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,9,12,16,18,18,20,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,8,10,13,16,16,19,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,9,9,12,16,21,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,9,8,9,13,17,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,7,9,10,13,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,8,10,11,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,11,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
