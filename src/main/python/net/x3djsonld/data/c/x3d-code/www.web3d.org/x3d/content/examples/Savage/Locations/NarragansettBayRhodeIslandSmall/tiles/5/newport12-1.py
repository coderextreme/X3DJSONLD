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
        texture=ImageTexture(url=['../../images/5/newport12-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[52,54,53,53,53,53,53,52,49,46,45,42,39,36,34,31,25,19,15,13,10,9,8,54,54,52,51,51,51,50,50,46,42,40,41,40,35,31,26,19,16,15,11,11,10,8,55,55,53,49,48,48,47,45,40,38,36,36,35,33,29,24,19,18,16,13,10,7,4,54,53,50,49,48,47,44,40,36,36,34,30,30,29,28,25,23,20,16,13,9,6,2,52,49,46,47,46,45,43,39,36,36,33,30,31,29,25,22,20,15,12,12,12,9,5,51,48,44,44,44,43,42,41,38,37,33,28,28,25,20,19,18,12,9,9,10,7,5,47,46,43,41,41,41,40,39,37,34,30,26,24,21,18,18,14,9,5,5,5,4,3,41,42,42,39,39,39,38,37,34,30,27,26,25,23,19,16,12,6,4,1,2,2,1,37,37,38,38,38,36,34,34,31,27,24,24,23,22,19,15,10,4,1,0,0,0,1,34,34,35,36,36,32,30,29,26,23,22,23,21,19,16,12,8,4,1,1,0,0,1,31,32,32,34,34,31,28,25,23,23,23,23,22,18,13,7,3,2,4,2,0,0,0,27,28,29,29,26,26,27,27,24,21,21,20,19,18,14,8,4,2,2,2,0,0,0,26,26,26,23,22,22,24,25,23,20,19,17,14,14,12,7,5,4,4,3,0,0,0,28,26,24,22,22,22,21,22,22,19,16,13,10,10,9,6,7,6,4,1,0,0,2,24,23,23,23,23,21,19,18,18,16,14,12,9,6,4,6,7,5,2,0,0,0,2,23,21,21,21,20,18,16,16,17,14,11,9,8,5,3,6,6,5,3,0,0,0,0,22,22,21,20,18,15,15,16,17,13,9,7,6,4,4,4,3,3,1,0,0,0,0,26,24,22,20,18,16,14,14,13,11,8,4,2,1,1,1,0,0,0,0,0,0,0,26,22,18,16,15,14,11,9,7,6,5,3,0,0,1,0,0,0,0,0,0,0,0,20,18,16,15,14,11,6,4,4,3,3,2,1,0,0,0,0,0,0,0,0,0,0,19,18,18,16,14,9,3,1,3,4,2,0,0,0,0,0,0,0,0,0,0,0,0,18,18,17,13,10,7,4,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,17,18,15,10,8,8,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
