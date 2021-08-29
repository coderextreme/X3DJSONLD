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
        texture=ImageTexture(url=['../../images/5/newport24-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,1,4,6,8,11,14,17,19,20,21,22,22,23,25,28,30,33,37,38,36,0,0,1,2,4,6,8,11,15,17,19,21,22,23,23,24,27,31,34,40,42,40,36,0,1,2,3,5,6,8,11,14,17,19,21,22,23,23,25,30,34,39,44,45,41,37,1,2,3,4,5,7,9,11,15,17,19,21,22,23,25,27,31,36,42,45,44,40,37,1,2,3,4,6,7,9,11,16,18,20,21,23,24,26,29,33,36,40,42,41,40,40,1,2,3,5,6,7,9,11,15,18,20,22,24,26,27,30,33,35,36,38,39,40,44,0,1,3,5,6,7,8,11,15,18,20,22,24,26,28,30,33,35,36,37,38,41,46,0,1,2,4,6,7,8,10,14,18,20,22,24,26,28,30,33,35,36,38,41,45,47,0,1,2,4,5,6,7,9,13,17,20,22,24,26,27,30,33,36,38,41,45,49,49,0,0,1,3,4,5,7,9,12,16,20,22,24,26,27,30,33,37,40,43,47,51,50,0,0,1,2,3,5,6,8,12,15,19,22,24,25,28,31,34,39,43,46,49,52,51,0,0,0,1,2,4,6,8,12,15,19,22,24,26,29,32,34,39,44,47,50,52,51,0,0,1,1,1,3,6,8,12,15,19,22,24,26,29,32,35,39,43,47,50,52,50,1,1,1,1,1,2,4,8,12,15,18,21,24,26,29,33,36,40,43,46,48,50,50,1,1,1,1,1,1,3,7,11,14,18,21,23,26,30,33,36,39,42,44,47,49,50,1,1,1,1,1,1,1,5,10,13,17,20,23,26,30,33,36,38,40,42,45,48,49,1,1,1,1,1,1,1,5,9,12,16,20,23,27,30,33,36,38,39,41,43,46,48,1,1,1,1,1,1,1,5,9,11,15,19,23,26,30,33,35,37,39,40,42,44,46,1,1,1,1,1,1,1,4,8,11,14,18,22,25,30,33,35,37,39,40,41,42,44,1,1,1,1,1,1,1,3,6,10,13,17,21,25,30,33,35,37,39,40,40,41,42,1,1,1,1,1,1,1,2,6,9,13,16,21,26,30,33,36,38,39,39,40,40,41,1,1,1,1,1,1,1,2,6,9,12,16,21,26,30,33,36,38,39,39,40,40,41,1,1,1,1,1,1,1,2,6,9,12,16,21,26,30,33,36,38,39,39,40,40,41],
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
