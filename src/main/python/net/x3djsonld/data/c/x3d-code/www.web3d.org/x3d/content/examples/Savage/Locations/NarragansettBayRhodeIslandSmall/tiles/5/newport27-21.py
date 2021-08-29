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
        texture=ImageTexture(url=['../../images/5/newport27-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,3,9,12,15,19,22,24,27,31,34,36,40,42,42,43,41,43,42,40,39,35,0,2,6,9,14,18,21,26,27,29,32,33,36,39,42,42,41,42,43,41,39,38,36,0,5,9,13,18,21,23,27,28,32,34,34,35,38,40,39,39,41,42,41,39,38,36,1,8,11,14,18,20,23,27,31,34,34,33,36,39,40,39,40,42,43,40,38,38,36,1,10,11,14,17,19,24,29,34,35,33,33,37,39,41,40,40,43,42,39,37,36,35,7,12,13,18,23,24,25,26,31,32,33,34,36,37,39,39,40,42,42,38,34,34,35,8,11,14,18,22,24,26,28,30,31,32,33,34,34,36,38,39,41,41,37,35,35,36,7,10,14,16,19,23,26,28,29,30,31,32,33,34,37,39,38,38,39,37,36,35,34,7,10,14,17,20,25,26,28,30,31,32,32,32,32,34,35,35,37,36,35,33,32,31,5,9,14,18,22,24,24,24,27,30,32,31,32,32,33,34,33,34,33,33,33,32,30,5,9,15,18,20,21,23,24,25,30,31,30,32,32,33,34,32,31,29,30,30,30,32,9,11,15,17,19,21,24,24,25,27,28,27,28,31,31,30,28,28,28,27,26,29,32,8,9,11,16,18,21,23,24,26,27,27,27,26,27,28,28,28,28,28,27,26,26,27,8,10,12,16,17,20,21,21,21,23,25,25,26,28,27,27,27,27,26,26,27,27,26,7,10,14,14,14,15,17,19,19,23,23,23,25,27,27,28,26,25,25,25,24,25,25,5,8,12,11,13,15,18,19,17,19,20,21,24,26,27,27,26,26,26,25,23,23,23,5,6,8,8,11,15,17,16,16,17,20,22,22,24,25,25,25,25,25,22,21,22,25,5,3,4,6,10,12,14,15,17,18,20,21,23,22,23,25,25,23,23,21,20,22,24,5,3,2,6,10,11,13,15,18,18,19,21,22,24,23,23,25,23,23,21,22,20,19,8,6,3,4,7,9,11,14,17,18,20,20,21,24,22,22,22,22,23,22,25,22,20,9,7,5,5,6,8,10,14,17,19,21,22,22,21,21,20,19,20,23,26,26,23,21,4,7,7,9,8,8,9,13,17,18,20,21,20,18,19,20,19,21,23,25,25,21,19,3,7,9,9,8,8,9,13,16,17,18,19,18,17,19,19,19,22,23,23,23,21,19],
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
