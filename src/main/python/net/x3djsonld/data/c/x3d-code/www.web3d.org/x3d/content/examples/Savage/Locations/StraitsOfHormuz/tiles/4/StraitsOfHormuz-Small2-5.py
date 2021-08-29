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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[34,41,53,36,50,46,9,12,8,11,10,10,14,13,9,13,19,20,27,34,38,44,51,41,37,52,38,41,24,17,23,4,6,9,14,10,12,14,18,21,29,34,41,45,52,44,35,37,40,38,39,8,18,20,14,9,8,10,12,13,19,24,31,39,45,48,26,37,39,32,42,23,37,25,10,6,16,16,7,8,8,15,17,22,31,38,47,53,37,41,30,51,31,37,24,34,20,11,12,4,11,7,11,13,18,25,31,39,45,53,30,34,23,26,38,22,36,18,36,21,16,13,10,10,8,14,14,22,28,37,46,48,27,36,29,41,35,36,28,25,22,26,19,9,17,10,9,13,15,20,26,33,43,48,27,34,35,26,34,26,20,21,10,25,11,24,10,5,9,12,13,18,26,33,36,42,25,26,25,28,32,26,23,20,30,10,17,4,13,8,9,10,11,17,20,28,35,38,21,26,28,21,28,33,23,21,20,26,10,14,5,3,6,6,11,14,16,25,28,75,19,19,17,30,28,25,24,32,8,29,1,8,19,7,2,7,10,9,13,35,23,64,25,15,20,20,17,23,21,13,23,2,20,10,18,4,4,4,11,9,12,12,20,43,1,26,12,20,11,13,16,13,19,11,11,10,9,1,5,11,6,5,15,18,24,34,0,1,31,15,17,21,18,14,11,13,-1,25,3,-2,2,10,8,10,12,19,19,87,1,3,1,17,12,13,15,13,1,20,4,22,0,5,7,14,9,16,20,22,26,34,3,0,0,0,12,14,5,6,20,2,32,2,2,3,8,8,12,16,16,28,32,46,2,0,0,1,3,5,14,16,4,-2,13,0,0,0,5,10,16,20,22,30,36,43,4,4,4,-2,2,7,1,3,19,14,16,0,0,1,6,11,19,21,27,34,42,46,4,1,1,0,4,1,3,4,1,10,1,-2,0,3,7,12,15,24,32,34,46,46,0,2,0,0,5,2,4,0,0,0,0,-1,1,5,6,14,13,24,30,38,45,48,0,0,3,0,0,1,-2,4,3,0,0,0,-1,4,8,11,18,22,35,40,47,50,1,0,0,2,0,1,0,1,2,-3,0,-1,-3,1,5,12,17,23,29,36,42,44,2,0,0,3,-1,1,0,2,2,-5,0,-1,-4,1,5,10,17,21,32,35,43,44],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
