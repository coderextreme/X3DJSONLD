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
        texture=ImageTexture(url=['../../images/5/newport30-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,13,16,17,19,20,19,18,19,18,17,18,19,19,20,19,20,21,20,18,17,18,18,12,15,17,18,20,21,20,19,19,19,20,21,21,20,21,20,21,24,23,21,20,20,19,14,18,20,19,20,20,20,20,21,23,22,22,22,22,22,21,23,26,25,23,24,23,22,16,17,17,18,18,19,20,20,20,22,23,22,22,23,23,23,24,25,25,24,24,23,23,17,17,18,20,21,20,21,22,23,23,24,24,22,23,24,23,23,21,23,26,26,26,26,19,19,20,22,22,23,24,25,27,25,25,25,24,24,25,24,22,20,22,25,26,25,26,15,16,19,20,19,21,22,23,25,24,24,26,26,26,26,27,24,22,23,25,24,25,26,16,16,18,19,20,19,20,21,21,22,24,24,25,25,26,28,27,24,24,25,25,27,26,16,16,16,17,19,18,16,17,19,20,23,23,22,22,25,28,28,26,25,25,27,27,26,19,18,17,18,17,18,18,17,17,18,19,19,20,21,23,25,26,26,25,26,28,28,29,14,14,15,17,18,20,19,17,17,17,18,20,19,18,17,20,23,24,25,27,27,26,26,12,10,13,16,16,18,17,17,16,16,17,18,19,19,18,18,21,23,25,27,28,26,24,10,9,11,12,15,13,13,12,14,15,16,14,18,21,22,21,22,25,26,28,28,27,25,11,11,10,9,11,11,11,12,13,15,16,14,16,18,19,21,22,25,25,25,24,24,25,12,13,9,6,7,8,10,13,13,13,14,16,17,17,18,19,19,22,23,23,23,24,25,7,8,5,5,6,5,8,10,12,12,13,16,16,16,17,17,17,19,22,22,24,24,24,2,5,6,6,8,6,6,7,10,10,11,15,17,16,15,18,19,20,20,22,23,23,23,2,4,6,6,6,6,6,7,10,10,10,11,14,14,14,18,18,18,18,22,23,23,22,3,4,3,3,4,5,5,6,8,7,7,10,14,14,15,17,16,17,17,21,22,23,24,5,4,4,4,4,3,2,3,3,3,5,8,7,8,12,13,18,17,16,21,24,24,24,2,1,1,2,1,1,0,1,2,3,4,5,6,9,12,15,16,17,19,20,24,26,28,0,0,0,1,1,1,1,1,3,5,4,5,8,9,11,14,16,17,19,18,24,27,28,0,0,0,0,2,2,0,1,3,4,5,6,8,9,11,13,15,16,18,18,24,26,28],
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
