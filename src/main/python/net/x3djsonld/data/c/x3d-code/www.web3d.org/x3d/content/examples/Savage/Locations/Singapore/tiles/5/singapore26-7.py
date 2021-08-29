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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore26-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4392877850278434,103.69037723890314,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[32,33,34,34,34,34,31,24,14,9,6,4,2,1,0,0,0,0,0,-1,-2,0,4,7,6,5,6,7,8,10,12,13,14,14,14,16,22,33,33,34,33,33,33,31,25,17,10,5,2,1,0,0,0,0,0,0,-1,-2,-1,2,5,3,2,3,5,6,7,9,11,12,12,13,15,21,33,33,33,33,32,32,31,26,19,11,4,1,0,0,0,0,0,0,0,0,-2,-2,1,2,0,0,1,2,2,4,7,9,9,10,11,14,19,34,33,32,32,31,31,30,26,20,13,5,1,0,0,0,0,0,0,0,0,0,0,0,-1,-4,-5,-2,-1,-1,0,3,7,8,10,11,14,18,33,33,31,30,30,30,29,26,21,14,6,2,0,0,0,0,1,1,1,2,5,4,-2,-6,-10,-10,-7,-5,-4,-3,0,5,7,9,11,13,16,30,29,28,28,28,27,27,24,20,15,8,3,1,0,0,1,1,1,2,2,3,2,-1,-6,-13,-16,-10,-6,-4,-1,1,5,7,9,9,10,13,27,26,26,26,25,25,24,22,19,15,10,5,1,0,1,1,1,1,2,2,1,0,-1,-7,-17,-20,-13,-7,-3,-1,1,4,7,9,9,8,9,23,23,23,23,22,22,21,20,19,16,13,8,4,1,1,1,1,1,1,1,1,1,0,-2,-8,-10,-6,-3,-1,0,0,0,2,4,6,7,8,20,20,20,19,20,19,19,19,18,17,16,12,5,2,1,1,1,1,1,1,1,1,3,3,1,0,0,0,0,0,-3,-4,-1,0,3,5,7,17,18,18,19,19,19,18,17,17,17,16,13,7,4,2,1,1,1,1,2,2,3,4,4,3,2,0,0,0,0,0,0,0,0,1,3,5,15,15,17,18,18,18,17,17,17,17,17,13,8,4,2,1,1,1,2,2,3,4,4,4,5,4,1,0,0,0,2,3,1,0,0,2,2,15,15,17,18,18,17,16,16,17,17,17,14,10,6,2,1,1,2,2,3,4,5,5,5,4,3,1,0,1,2,3,4,1,0,1,2,2,14,17,18,18,17,16,16,16,17,17,16,14,11,7,3,1,2,2,3,5,5,5,5,5,4,2,1,1,2,3,4,4,2,0,1,2,2,16,17,17,17,16,16,17,17,17,17,16,14,12,9,7,5,3,3,4,5,5,5,5,4,3,3,2,2,3,5,5,4,1,0,0,1,2,17,17,15,15,15,16,17,17,17,16,15,14,13,12,12,10,6,5,5,5,5,5,4,4,3,3,3,4,5,6,6,5,1,-1,0,0,1,16,15,14,14,16,16,17,16,16,15,14,14,13,13,12,10,7,6,5,5,6,5,4,4,3,3,4,5,5,6,5,3,0,-1,-1,0,0,14,13,13,14,16,17,16,15,14,14,13,13,14,13,11,10,9,7,6,5,5,5,4,4,4,4,5,6,6,6,4,2,1,0,-1,-1,0,13,12,12,14,16,16,15,14,13,13,13,13,13,12,10,9,8,8,7,6,6,5,4,4,4,5,5,6,6,5,3,1,0,0,0,-1,0,14,12,12,13,15,14,13,13,13,13,13,12,11,10,9,9,8,8,8,7,7,6,5,5,5,6,6,6,5,4,3,1,0,0,0,-1,0,14,13,13,13,13,13,12,12,13,13,13,12,10,10,9,8,8,8,8,8,7,6,5,5,6,6,6,5,4,3,2,1,0,0,0,0,0,14,14,13,12,12,12,12,12,13,12,11,10,9,9,9,8,8,8,8,7,6,5,4,4,6,6,6,5,4,3,2,1,0,0,0,0,0,15,14,13,12,11,11,11,11,12,12,10,10,9,9,9,8,8,8,7,6,5,4,3,3,4,5,4,4,4,3,2,1,0,0,0,0,0,15,15,14,12,10,10,11,11,11,10,10,10,10,9,9,8,8,7,6,5,4,3,2,2,2,2,3,3,3,3,2,1,0,0,0,0,1],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
