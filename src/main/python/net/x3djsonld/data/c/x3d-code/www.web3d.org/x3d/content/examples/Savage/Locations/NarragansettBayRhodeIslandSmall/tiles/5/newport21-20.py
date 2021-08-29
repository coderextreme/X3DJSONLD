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
        texture=ImageTexture(url=['../../images/5/newport21-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[5,9,11,16,18,17,21,25,27,28,28,30,33,40,41,39,39,41,41,43,44,43,42,4,7,10,13,16,16,20,21,22,24,26,28,31,37,38,38,40,41,41,44,45,43,41,1,4,8,10,14,18,21,20,20,23,25,29,32,37,36,38,39,39,41,42,42,40,37,0,1,4,8,12,16,19,21,23,25,27,27,28,33,36,38,38,36,38,38,36,34,33,0,0,3,8,13,16,19,22,24,26,28,28,29,33,33,32,33,34,35,34,32,31,30,0,0,0,6,11,16,18,21,23,26,29,30,30,31,30,29,29,31,32,31,27,27,28,0,0,0,0,6,15,18,20,22,25,26,28,30,31,30,29,29,29,28,26,25,25,26,0,0,0,0,2,9,16,20,24,26,26,26,27,27,28,30,29,25,25,26,26,24,24,0,0,0,0,0,5,14,20,24,25,26,27,27,26,26,27,25,23,23,23,22,22,23,0,0,0,0,0,0,10,19,23,23,23,24,25,25,24,23,23,23,21,20,18,19,19,0,0,0,0,0,0,8,16,21,22,23,25,24,23,21,18,19,20,19,18,19,18,15,0,0,0,0,0,0,5,11,17,20,22,24,22,20,18,17,18,19,18,19,20,18,14,0,0,0,0,0,0,1,8,13,15,17,18,18,18,19,19,17,17,18,19,18,16,16,0,0,0,0,0,0,0,6,11,13,15,17,18,19,21,19,16,15,16,17,17,16,15,0,0,0,0,0,0,0,1,3,10,15,17,16,17,17,17,16,15,14,13,15,17,17,0,0,0,0,0,0,0,0,0,9,13,14,14,13,13,15,17,17,15,14,15,17,17,0,0,0,0,0,0,0,0,0,7,10,11,13,12,12,13,17,16,16,16,14,14,13,0,0,0,0,0,0,0,0,0,4,9,10,11,13,12,13,16,15,13,13,11,9,12,0,0,0,0,0,0,0,0,0,2,6,8,9,13,13,13,16,15,13,11,10,10,13,0,0,0,0,0,0,0,0,0,0,2,4,6,10,13,15,17,16,14,11,10,12,15,0,0,0,0,0,0,0,0,0,0,0,1,2,8,11,13,13,15,14,11,11,13,14,0,0,0,0,0,0,0,0,0,0,0,1,3,7,9,7,8,10,11,11,13,14,13,0,0,0,0,0,0,0,0,0,0,0,3,4,6,8,5,5,8,9,10,13,14,13],
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
