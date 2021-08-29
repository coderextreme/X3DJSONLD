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
        texture=ImageTexture(url=['../../images/5/newport26-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[33,33,32,30,29,27,24,21,20,18,16,15,14,13,13,14,15,15,16,17,17,17,16,33,33,32,31,29,27,24,22,20,18,17,16,15,14,13,14,14,14,15,16,16,16,17,32,32,31,31,29,27,25,22,20,19,17,17,15,14,14,14,13,13,14,15,16,16,16,32,32,31,30,29,27,25,23,22,20,18,17,16,15,14,13,13,13,14,14,15,16,16,32,31,30,29,26,25,24,24,21,20,18,17,16,15,14,13,13,14,14,14,15,17,18,32,30,30,28,26,25,24,23,21,19,18,17,16,14,14,13,13,13,14,15,15,16,16,30,30,30,28,27,27,26,24,21,19,18,16,15,14,13,13,13,14,15,16,16,16,16,31,30,30,29,28,26,25,23,21,19,18,16,15,14,14,14,14,13,14,15,15,16,16,33,31,31,30,29,27,24,22,20,19,18,16,16,15,15,14,14,14,13,13,13,14,14,32,31,31,31,30,28,25,23,21,19,18,16,15,15,14,13,13,13,12,12,12,13,13,32,31,31,29,28,27,26,24,21,20,18,17,15,15,14,13,13,13,11,10,11,13,13,32,32,30,28,27,26,25,24,22,19,18,15,14,13,13,13,13,12,11,10,11,13,13,31,31,30,28,26,25,23,22,20,18,16,14,13,13,13,13,13,12,11,12,13,14,15,30,30,29,26,24,22,21,20,18,16,14,13,13,13,13,13,13,13,13,14,14,15,16,28,28,27,26,23,21,20,19,17,15,13,12,13,12,12,12,12,13,15,16,16,16,16,27,26,26,25,23,20,19,18,17,14,13,13,13,13,12,12,12,13,14,15,14,15,15,25,25,24,23,22,20,18,16,15,14,13,13,13,14,14,13,13,13,15,14,13,12,13,22,22,21,21,21,20,18,15,13,13,14,15,14,15,14,13,12,12,13,13,12,11,11,21,21,20,19,19,18,17,15,14,14,15,15,14,14,13,11,10,10,11,13,12,11,11,19,19,19,18,17,16,16,16,16,15,14,13,13,12,12,10,9,9,11,13,13,13,13,16,17,16,16,16,15,16,16,16,16,15,13,12,12,11,10,10,11,12,12,11,11,10,15,15,15,16,16,16,16,16,16,16,15,14,12,11,11,11,12,11,9,6,4,3,3,14,14,14,16,17,16,16,16,16,15,14,13,12,11,11,11,11,10,6,3,2,1,1],
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
