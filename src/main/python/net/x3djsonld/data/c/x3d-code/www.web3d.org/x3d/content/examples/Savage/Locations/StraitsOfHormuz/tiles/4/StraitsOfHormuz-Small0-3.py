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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.57839916841148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[17,18,28,25,21,19,26,42,37,31,29,38,31,33,43,44,28,39,50,41,45,52,19,19,22,26,23,23,30,26,33,36,30,30,35,30,32,45,38,32,54,50,41,46,23,20,22,20,25,22,23,29,28,27,36,24,29,40,27,45,35,26,37,56,33,34,18,18,18,18,20,26,25,22,27,27,33,38,34,25,34,44,34,42,21,44,53,49,15,16,17,16,16,17,23,25,22,24,30,38,35,31,30,35,46,41,41,30,43,49,13,12,14,14,19,17,22,25,23,23,24,22,36,28,22,33,37,44,29,35,38,45,14,18,24,17,21,18,12,26,23,26,25,25,32,38,24,22,47,40,40,26,50,59,10,19,17,16,17,15,17,20,19,25,23,29,23,29,32,21,31,54,37,30,32,44,7,17,18,17,17,18,13,15,24,22,22,20,31,36,21,36,20,35,50,33,38,39,8,12,15,14,12,13,16,19,19,20,24,23,22,23,30,19,35,20,28,45,31,34,9,12,11,10,7,3,7,16,15,24,24,22,21,21,26,31,20,33,26,31,42,36,4,12,8,6,5,6,2,10,15,15,20,21,23,26,22,26,28,15,34,34,38,40,3,6,9,6,2,4,10,11,13,9,18,19,22,25,23,23,31,28,18,32,29,26,3,5,7,2,1,4,9,9,12,17,16,22,20,28,22,27,19,29,23,30,32,24,3,3,3,0,1,3,10,6,13,13,7,11,22,23,22,21,23,15,27,26,21,28,11,0,2,3,2,4,1,8,6,8,12,6,14,25,20,19,19,20,17,28,26,31,2,0,0,2,1,0,5,1,3,0,1,13,16,19,26,24,21,14,21,19,27,35,1,3,2,3,3,3,3,2,1,10,6,4,10,22,16,21,21,12,16,26,23,21,-1,2,0,3,3,2,0,0,1,0,2,1,3,18,27,17,22,20,15,17,29,25,0,-1,1,2,0,4,3,5,0,2,1,1,10,8,16,26,15,18,13,17,18,18,0,1,6,-1,2,3,2,0,1,0,5,2,3,16,20,18,17,15,15,18,18,20,0,1,1,1,2,3,6,5,3,1,2,2,5,14,20,21,11,17,9,16,25,14,0,0,2,3,2,1,4,2,2,1,2,3,5,14,19,21,10,16,10,16,26,14],
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
