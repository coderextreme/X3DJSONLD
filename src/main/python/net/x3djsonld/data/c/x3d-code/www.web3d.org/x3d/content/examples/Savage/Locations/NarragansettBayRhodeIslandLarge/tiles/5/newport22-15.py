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
        texture=ImageTexture(url=['../../images/5/newport22-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,14,12,12,15,19,21,21,22,22,20,20,19,18,15,14,7,1,11,14,16,18,15,16,15,16,17,19,20,21,23,17,17,21,19,19,19,17,13,2,5,12,14,14,13,15,17,17,17,18,20,22,21,22,21,20,21,17,13,12,12,10,6,2,1,2,20,18,16,20,18,19,20,20,21,21,19,16,13,15,13,13,14,14,10,6,3,3,23,23,19,18,19,21,20,21,18,18,15,12,15,15,15,15,15,15,14,6,3,8,24,23,22,19,24,23,22,16,16,14,17,18,19,14,17,18,19,17,15,13,3,2,25,26,25,21,24,25,19,15,12,11,8,8,8,14,17,18,18,17,16,16,15,13,24,26,27,24,25,17,14,11,12,1,0,1,0,14,21,21,20,21,17,16,13,12,22,23,24,24,18,15,11,10,8,2,0,0,0,7,21,22,20,19,16,14,13,13,22,22,21,19,14,10,12,15,14,11,4,0,0,0,14,20,18,15,16,16,14,15,19,19,20,17,11,10,17,21,18,14,6,0,0,0,2,16,16,17,16,16,16,16,17,17,17,11,14,22,26,25,24,19,8,0,0,0,0,9,16,14,13,14,11,13,16,17,8,13,21,25,27,28,27,25,18,7,0,0,0,0,5,15,15,11,15,15,16,9,15,17,21,26,29,27,27,26,23,16,12,1,0,0,0,0,2,15,19,19,10,12,16,16,20,22,26,26,29,28,26,22,18,13,1,0,0,0,0,7,19,20,16,16,18,20,23,27,30,29,29,29,27,23,20,17,9,0,0,0,0,0,6,14,20,21,26,26,27,30,33,36,35,32,29,27,21,21,17,6,0,0,0,0,0,5,23,25,26,29,35,36,39,42,40,37,34,32,27,22,17,13,6,0,0,0,0,0,25,28,30,36,41,43,45,46,46,44,39,37,33,25,18,14,15,6,0,0,0,0,25,30,34,45,47,45,48,48,47,49,42,41,37,29,18,10,12,6,0,0,0,0,25,26,36,43,48,48,51,50,50,50,47,45,38,28,20,14,11,6,0,0,0,0,24,28,38,43,47,49,53,54,54,50,48,43,35,29,21,16,12,3,0,0,0,0,25,30,34,42,49,51,55,57,56,51,49,42,34,26,19,18,12,4,0,0,0,0,26,30,34,42,49,52,56,57,56,51,49,42,35,26,19,19,12,4,0,0,0,0],
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
