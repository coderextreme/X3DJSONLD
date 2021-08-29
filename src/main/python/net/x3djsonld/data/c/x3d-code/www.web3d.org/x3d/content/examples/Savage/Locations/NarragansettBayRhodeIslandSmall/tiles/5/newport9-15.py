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
        texture=ImageTexture(url=['../../images/5/newport9-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[3,4,6,9,8,5,4,6,10,14,16,17,18,19,20,22,24,26,28,29,31,33,33,3,2,4,9,11,10,8,8,12,15,16,16,18,20,22,24,27,30,32,33,32,32,30,6,5,6,10,15,14,13,13,14,14,14,17,19,21,24,27,30,33,34,34,32,31,30,8,6,6,9,16,17,15,15,14,14,16,19,19,22,25,28,31,34,36,35,34,32,30,8,8,6,8,14,16,16,14,15,16,18,20,21,24,29,31,33,36,38,38,36,33,31,6,9,9,10,11,11,13,14,16,19,21,21,23,26,31,34,37,40,41,39,35,32,31,8,8,8,9,10,11,13,15,17,18,22,24,26,28,34,39,43,45,45,41,35,32,31,8,7,7,8,11,12,14,15,17,19,23,27,28,31,36,41,45,49,48,43,37,33,31,6,8,8,9,12,17,17,17,21,24,26,29,31,33,37,41,45,48,46,42,36,34,33,6,11,12,13,17,20,20,20,22,25,27,31,34,37,38,41,42,43,41,38,34,34,36,8,13,12,15,19,21,22,25,24,27,29,33,35,37,39,41,40,39,39,38,37,36,38,11,11,11,14,18,20,22,26,28,31,33,35,37,38,40,43,41,38,38,39,40,38,39,12,12,13,16,20,22,26,29,30,32,34,36,39,41,42,45,43,41,38,38,37,38,38,14,13,14,17,22,23,26,30,33,35,35,38,40,43,43,43,42,40,38,37,38,38,38,16,16,15,17,20,23,26,29,32,33,35,37,40,42,42,38,37,36,37,37,39,40,38,14,15,18,20,22,25,29,32,34,35,36,38,40,39,37,33,33,33,34,35,39,40,39,13,15,19,23,25,27,30,32,34,35,36,36,37,38,37,34,34,33,33,34,37,38,38,12,15,18,22,24,28,30,31,33,34,37,37,35,35,34,33,33,33,33,34,36,37,37,12,16,18,20,25,29,31,32,34,36,36,35,35,34,33,34,32,31,30,32,34,35,36,13,16,20,22,27,31,31,30,30,32,32,32,32,31,31,31,30,28,28,30,31,32,33,15,16,18,22,26,28,29,29,29,30,29,29,29,30,29,28,28,27,27,29,30,30,30,17,16,17,19,22,25,28,29,29,30,29,29,29,29,28,26,25,25,25,25,29,28,28,17,17,18,19,21,24,26,28,28,28,28,29,28,28,27,24,24,24,24,24,27,27,27],
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
