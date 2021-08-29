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
        texture=ImageTexture(url=['../../images/5/newport8-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[9,8,6,4,2,2,2,2,2,2,2,2,1,2,7,10,11,11,13,15,18,21,23,9,7,5,2,1,2,2,2,2,2,2,2,2,3,7,11,12,12,14,15,18,22,24,11,8,6,3,1,2,2,2,2,2,2,2,3,4,7,10,12,14,15,17,19,22,24,13,9,6,4,2,2,2,2,2,2,3,3,4,6,8,11,13,15,16,17,19,22,24,12,9,6,3,2,2,2,2,2,2,3,3,5,9,13,13,12,14,16,17,21,24,25,13,10,5,2,2,2,2,2,2,3,3,3,5,10,14,12,12,14,17,20,24,26,27,15,11,5,2,2,2,2,3,3,3,3,3,6,10,12,11,12,15,20,23,26,26,26,15,11,5,2,2,3,3,3,3,3,3,5,8,11,11,11,12,16,22,26,27,26,26,15,12,6,3,3,3,3,3,3,3,4,6,10,12,12,13,15,18,22,24,25,26,26,15,13,10,5,3,3,3,3,3,3,4,7,9,12,14,16,18,19,21,23,25,27,29,16,12,9,4,3,3,3,3,3,3,5,7,12,14,16,15,15,18,22,26,28,28,33,18,13,9,4,3,3,3,3,3,4,7,9,12,15,15,13,16,20,24,28,29,31,36,17,14,10,5,3,3,3,3,4,6,8,10,13,13,13,14,18,22,24,28,30,34,36,17,14,10,5,4,4,4,4,4,6,8,10,13,14,15,17,21,24,26,29,31,35,37,17,12,10,5,4,4,4,4,4,7,8,10,13,15,16,19,24,28,30,30,30,32,37,16,11,10,7,5,4,4,4,5,6,9,11,13,16,16,19,24,29,30,29,31,34,38,12,9,9,6,5,4,4,5,5,7,9,11,14,15,16,20,24,28,29,30,34,38,41,12,11,5,4,4,4,4,5,7,9,10,10,13,15,17,23,24,26,28,32,37,40,43,10,6,4,4,4,6,5,7,8,8,9,10,12,15,18,22,25,27,29,33,37,41,43,9,8,5,5,6,6,5,7,6,7,9,11,12,15,17,23,26,28,31,33,37,40,42,6,5,6,5,6,5,6,7,8,9,10,12,14,15,18,24,26,29,32,34,37,40,43,5,4,4,6,6,6,8,8,9,9,10,12,14,16,18,22,26,29,32,36,38,41,43,7,5,4,6,6,8,8,8,8,8,9,12,13,15,18,22,27,29,32,35,38,40,42],
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
