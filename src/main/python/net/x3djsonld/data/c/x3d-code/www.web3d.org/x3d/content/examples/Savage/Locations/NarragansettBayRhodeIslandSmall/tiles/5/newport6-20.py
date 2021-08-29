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
        texture=ImageTexture(url=['../../images/5/newport6-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,19,20,21,21,21,21,20,19,18,17,15,14,13,12,12,11,10,9,7,2,0,0,17,19,21,21,21,21,21,20,20,19,18,17,15,15,14,12,11,11,10,8,6,3,0,17,19,20,20,20,20,20,20,20,20,19,18,17,16,15,13,12,11,11,10,8,7,4,18,18,20,20,20,20,20,20,21,20,20,19,18,17,16,14,13,12,11,11,10,9,9,18,18,20,20,20,21,21,21,22,21,21,20,19,18,17,15,14,13,12,12,11,10,9,18,20,20,21,22,22,23,23,23,23,22,21,20,20,18,16,15,15,14,13,11,10,8,18,19,21,22,23,23,24,24,25,25,24,22,21,20,18,17,16,16,16,14,11,10,8,19,20,22,23,24,24,25,25,26,26,24,23,22,21,19,18,17,17,16,14,13,11,9,20,21,23,25,25,25,26,26,26,26,25,23,22,21,20,18,18,18,17,15,14,12,10,20,22,24,26,26,26,27,27,26,26,25,24,24,22,21,20,19,18,18,17,15,13,11,21,23,25,26,27,27,28,28,27,26,26,25,25,23,22,21,21,20,20,18,16,14,12,21,23,25,26,27,28,29,29,29,28,28,26,26,25,24,23,22,21,21,20,18,15,12,22,24,25,26,28,29,30,31,30,30,29,28,27,27,26,25,24,23,21,21,18,15,12,23,25,26,28,29,30,31,32,32,31,30,29,29,28,27,26,25,24,23,22,19,15,12,24,26,28,29,31,32,33,33,32,31,30,30,29,29,28,28,27,25,24,22,19,15,12,25,28,30,31,33,34,35,35,33,32,31,31,30,30,30,29,28,26,24,23,19,15,12,27,29,31,32,34,35,37,36,36,35,34,33,32,31,30,29,28,26,24,21,17,15,11,27,30,32,33,34,36,37,38,38,38,36,35,34,33,31,29,27,24,22,19,16,13,10,28,30,32,33,34,36,37,39,40,39,38,37,36,34,31,29,26,23,21,18,15,12,10,29,31,32,33,35,36,38,39,40,39,38,37,36,34,32,30,27,24,22,20,16,13,11,30,31,32,34,35,36,38,38,39,39,38,37,36,34,32,31,28,26,24,22,19,15,12,30,32,33,34,36,37,38,38,39,39,39,37,36,35,33,31,30,27,25,23,19,16,12,30,32,34,35,37,38,38,38,39,39,39,37,36,35,33,32,30,27,25,23,19,16,12],
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
