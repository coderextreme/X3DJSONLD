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
        texture=ImageTexture(url=['../../images/5/newport8-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[32,31,31,30,29,27,25,23,21,19,17,14,11,8,6,4,1,0,0,0,0,0,0,33,32,32,32,31,29,28,25,20,16,15,13,10,9,7,8,3,0,0,0,0,0,0,33,32,33,32,32,31,31,27,21,16,15,14,13,11,9,10,3,1,1,1,1,1,0,32,32,32,31,31,32,31,28,24,20,18,16,16,15,13,11,2,0,0,0,0,0,0,33,33,32,33,34,34,33,32,29,25,22,19,18,18,15,14,3,0,0,0,0,0,0,36,34,33,34,32,31,30,31,31,28,25,24,21,18,15,14,10,1,0,0,0,0,0,38,36,36,35,33,31,29,29,29,29,27,27,25,19,16,16,12,1,0,0,0,0,0,36,38,39,39,37,34,32,33,31,30,28,26,25,22,19,17,15,9,1,0,0,0,0,36,38,40,41,38,36,34,34,33,30,29,26,25,21,18,16,16,13,8,1,0,0,0,37,37,38,38,37,36,34,33,32,31,29,28,27,25,21,17,16,15,12,2,0,0,0,41,39,38,38,37,37,36,34,32,33,32,29,27,26,22,19,19,17,13,8,0,0,0,41,42,40,38,38,39,39,37,36,37,36,31,28,27,24,21,19,18,15,12,3,0,0,42,42,40,39,38,39,40,38,38,38,35,33,30,28,26,23,21,19,16,15,10,0,0,44,43,41,40,39,40,38,36,35,36,36,35,32,28,26,23,21,18,16,16,12,5,0,43,42,42,41,40,39,38,38,37,37,36,35,31,28,27,25,23,20,16,15,12,8,1,43,42,42,42,42,40,38,39,39,39,37,35,31,30,28,26,23,20,17,16,15,11,7,41,42,41,40,42,41,40,40,39,39,36,33,31,31,30,27,25,23,19,17,16,14,11,42,42,41,41,41,41,42,42,40,37,34,34,33,31,29,26,25,24,19,17,16,14,12,43,43,42,41,42,42,42,42,40,37,35,35,34,31,28,26,24,23,22,18,16,14,13,40,40,40,39,40,42,40,39,40,38,36,34,33,30,28,26,24,24,24,21,17,14,13,39,39,39,40,40,40,40,40,40,40,37,34,32,31,29,27,25,25,25,20,16,15,13,38,40,42,42,40,39,39,39,38,39,37,34,33,32,31,29,25,23,22,19,17,16,14,38,38,40,40,39,39,39,39,38,38,36,35,34,31,31,30,26,23,21,19,18,16,13],
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
