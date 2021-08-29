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
        texture=ImageTexture(url=['../../images/5/newport20-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[30,30,29,28,29,27,25,23,21,18,16,14,11,8,3,0,0,0,0,0,0,0,0,32,31,30,29,28,27,26,24,21,19,17,15,11,11,11,1,0,0,0,0,0,0,0,35,32,31,31,29,27,26,24,22,19,17,14,11,11,11,1,0,0,0,0,0,0,0,35,33,31,32,30,28,27,26,23,19,16,13,10,8,6,0,0,0,0,0,0,0,0,32,33,32,32,30,28,27,26,24,22,19,16,12,10,8,4,0,0,0,0,0,0,0,31,32,32,32,30,29,29,26,23,22,21,18,16,13,11,9,3,1,0,0,0,0,0,32,34,32,33,33,32,30,27,25,23,21,19,17,15,14,13,10,4,1,0,0,0,0,33,32,30,32,33,31,29,27,26,24,22,21,18,16,15,14,13,8,3,0,0,0,0,33,32,31,31,32,31,29,28,26,25,24,23,21,18,16,15,14,12,9,3,0,0,0,33,34,34,32,33,34,33,30,28,27,26,24,21,20,18,15,12,13,12,7,0,0,0,36,34,34,34,35,35,34,32,30,27,26,24,21,20,18,16,13,12,12,10,4,0,0,36,33,33,34,35,34,33,33,31,28,26,24,22,20,19,19,17,16,15,13,7,2,0,36,35,34,34,35,35,34,33,32,30,28,26,24,22,23,23,21,18,16,14,12,7,3,35,36,35,35,36,35,36,36,34,32,30,29,26,24,24,24,23,19,17,17,14,9,6,37,36,37,38,38,36,37,36,35,34,32,30,28,26,25,24,23,21,18,18,15,11,9,39,38,38,38,38,37,37,37,36,34,33,32,30,27,26,25,23,20,19,19,17,13,10,35,36,38,38,37,37,37,37,36,35,34,33,30,30,30,27,23,20,20,20,19,15,11,37,38,39,40,38,38,38,38,37,37,36,34,32,32,32,29,26,23,20,19,18,15,12,43,41,40,39,38,39,39,39,39,39,38,36,34,33,31,29,26,24,21,19,18,15,13,39,41,40,38,39,40,41,41,40,40,39,37,36,34,31,30,28,25,23,22,21,18,15,43,43,41,40,40,41,41,41,42,41,40,38,36,34,36,35,32,28,26,23,21,19,16,43,43,41,40,40,41,42,42,43,43,43,40,38,37,38,36,34,30,27,24,24,23,19,42,42,40,39,40,43,44,44,45,46,44,43,40,39,38,35,33,30,28,26,26,25,22],
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
