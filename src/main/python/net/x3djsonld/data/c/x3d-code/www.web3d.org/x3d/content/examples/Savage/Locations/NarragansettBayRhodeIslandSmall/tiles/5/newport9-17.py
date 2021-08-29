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
        texture=ImageTexture(url=['../../images/5/newport9-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[49,50,49,49,48,48,46,45,43,41,41,38,36,33,29,27,24,21,18,17,13,9,7,49,50,49,49,49,48,46,45,44,40,39,37,34,30,25,24,21,18,15,15,13,9,9,49,49,49,49,50,47,46,46,44,41,38,36,32,27,24,22,19,16,13,13,11,8,8,48,48,48,50,49,47,46,45,43,41,39,35,31,26,23,19,15,12,10,10,10,9,8,49,50,49,50,48,46,45,44,42,41,38,33,28,24,21,16,12,10,9,9,11,11,8,48,49,49,49,49,47,44,42,40,39,35,31,25,21,18,15,12,10,9,10,11,10,7,48,49,50,50,49,47,45,42,39,37,33,27,23,20,17,14,12,9,9,10,11,10,8,51,49,50,50,49,45,43,40,39,36,32,25,21,17,14,11,10,9,9,10,10,9,8,50,49,48,49,46,42,40,39,37,33,28,22,20,17,13,11,10,10,9,8,8,8,7,47,46,46,45,44,43,39,37,35,31,26,22,19,16,12,10,9,10,10,8,7,7,7,46,45,44,44,43,41,38,36,34,30,25,21,20,18,15,11,8,8,8,9,8,6,6,45,44,43,43,42,39,36,34,31,27,23,20,18,19,18,12,8,7,7,7,6,4,5,44,43,41,40,40,39,35,33,30,25,22,19,16,17,17,13,9,8,6,6,5,5,7,44,43,41,40,39,38,35,34,30,24,21,19,17,15,13,9,8,8,7,8,9,11,12,45,44,43,42,39,37,35,33,29,23,18,17,17,12,9,8,8,7,7,9,10,12,13,43,42,41,40,38,36,34,31,27,24,21,18,15,11,10,11,11,8,7,7,7,9,11,42,40,38,37,35,33,31,28,25,24,22,19,15,10,9,10,10,10,8,6,6,9,13,41,39,37,35,33,33,31,27,24,23,20,18,14,12,11,12,13,12,11,11,13,13,15,40,39,37,35,33,33,31,27,25,22,18,16,13,13,14,15,15,12,12,13,16,16,16,40,40,38,38,36,35,31,27,25,23,21,18,15,13,13,14,14,13,13,13,14,13,15,39,38,37,36,34,33,29,26,24,22,20,17,16,16,14,12,12,14,14,15,15,12,16,37,35,33,32,32,30,26,25,24,23,20,16,14,16,15,14,12,16,17,17,16,15,18,37,34,32,31,31,29,25,25,24,23,20,16,14,16,15,14,14,16,18,17,17,17,19],
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
