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
        texture=ImageTexture(url=['../../images/5/singapore3-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.69037723890314,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[1,0,0,0,1,3,4,4,3,3,3,4,6,6,4,4,4,4,6,7,6,6,5,5,5,4,4,3,3,3,3,2,0,0,4,8,9,1,0,-1,0,1,3,5,6,5,3,3,4,6,6,4,3,3,4,7,8,7,6,5,5,6,5,4,4,5,5,5,4,1,1,6,10,12,5,4,5,6,6,5,5,5,4,3,3,3,5,5,4,3,2,2,4,6,6,5,4,4,6,7,6,5,6,6,6,5,3,3,6,9,7,7,10,13,13,11,7,4,3,4,3,2,2,4,4,4,3,1,1,3,4,5,4,2,3,7,9,8,7,7,7,6,5,4,4,6,6,3,5,5,7,8,7,5,2,2,3,3,3,3,5,5,5,5,4,3,3,4,6,7,6,8,12,12,8,7,7,6,5,5,4,4,5,6,4,2,1,1,2,4,2,0,0,2,3,3,4,5,6,8,8,7,5,3,4,7,10,12,13,16,15,8,5,6,7,5,4,4,4,5,7,6,0,0,0,2,3,2,1,1,2,3,3,3,4,6,8,9,9,7,3,3,6,8,9,10,11,11,7,5,5,5,3,3,3,3,5,7,8,-2,0,0,1,1,2,2,2,2,2,2,2,3,6,9,10,10,8,4,2,4,5,6,6,7,7,5,4,3,2,1,1,1,2,5,8,10,-1,0,0,1,1,2,2,3,3,2,2,2,2,4,7,9,9,8,5,3,4,4,6,7,7,7,5,3,2,0,0,-1,0,1,4,6,8,0,0,0,0,1,2,2,3,3,2,1,1,1,3,5,7,7,7,6,5,4,4,7,8,8,7,4,2,0,0,-3,-5,-2,0,2,4,5,0,0,0,0,1,1,1,1,3,5,6,8,12,12,11,9,7,6,6,6,4,4,6,8,9,8,5,2,1,0,-2,-3,-1,0,1,1,4,0,0,0,0,0,0,0,1,4,8,12,19,26,25,17,11,7,5,7,7,5,4,6,8,10,10,6,3,1,0,0,-1,0,0,0,0,5,0,0,0,0,-1,-1,-1,2,8,15,21,25,25,22,15,9,4,2,4,4,3,3,5,8,12,13,8,5,3,1,0,0,1,2,1,1,5,0,0,-1,-3,-4,-4,-1,4,13,23,32,31,22,16,11,6,1,0,0,2,2,2,4,7,14,16,11,7,3,1,2,3,5,6,6,5,6,-2,-4,-5,-7,-8,-6,-2,4,13,22,27,23,14,9,8,5,0,-1,0,1,2,3,4,6,12,13,10,7,4,3,4,5,6,7,6,6,6,-6,-8,-10,-12,-12,-9,-2,4,13,17,17,12,5,3,5,4,0,0,0,1,2,3,3,4,8,10,9,7,6,4,5,5,6,6,6,6,6,-2,-6,-10,-12,-13,-11,-6,0,8,11,10,7,3,3,6,5,1,0,1,2,3,4,4,6,9,10,8,7,6,6,6,6,6,6,6,6,6,2,-2,-6,-10,-13,-13,-12,-5,2,4,4,4,4,6,8,7,3,1,2,3,5,6,7,8,10,10,8,7,8,9,8,7,6,6,6,6,6,5,2,-1,-6,-10,-12,-13,-8,-1,1,2,3,5,7,9,8,4,1,2,3,6,9,10,11,11,11,9,8,10,11,10,8,7,6,6,6,6,5,4,2,-2,-6,-10,-12,-8,-2,1,3,5,6,7,7,6,3,1,0,2,7,11,13,13,12,12,11,11,12,12,11,10,8,7,6,6,6,4,4,4,1,-1,-6,-8,-5,-1,1,3,5,6,6,5,4,2,1,0,3,9,13,14,14,12,11,12,12,12,12,11,10,9,8,7,7,8,3,3,4,3,1,0,-2,0,2,4,4,5,6,5,4,2,0,0,3,7,11,14,15,14,10,8,11,12,11,11,11,10,9,9,8,9,11,2,2,3,4,4,2,0,1,3,4,5,5,5,4,2,1,0,2,6,10,12,14,15,13,10,8,10,12,11,10,10,10,8,8,8,10,14],
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
