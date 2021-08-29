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
        texture=ImageTexture(url=['../../images/5/singapore5-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.61856206825804,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,2,1,3,4,4,5,10,15,13,10,1,-10,-7,0,4,6,1,-6,-7,-2,0,3,8,16,19,17,13,8,5,5,7,8,9,8,6,7,8,9,8,8,6,5,12,22,17,10,-2,-18,-17,-9,-3,1,-1,-11,-12,-7,-1,5,11,16,17,13,10,6,5,7,9,10,10,8,6,7,8,7,5,3,2,2,8,16,13,6,-2,-13,-14,-12,-6,1,0,-5,-7,-5,0,8,13,16,15,12,8,4,2,4,6,6,6,5,5,8,7,4,1,-1,0,0,4,10,6,1,-2,-5,-9,-13,-7,1,3,0,-1,0,4,12,16,17,14,11,6,1,0,0,2,1,1,2,2,8,7,5,3,2,0,0,2,6,4,2,2,2,-1,-8,-6,0,3,7,7,5,7,11,14,13,12,11,8,2,0,0,0,1,2,4,6,7,7,6,6,6,3,0,1,3,4,5,8,12,6,-2,-4,-2,5,16,17,12,10,10,10,10,10,12,11,4,0,0,0,1,4,8,10,5,6,6,6,7,3,0,2,4,5,6,9,12,7,1,-1,-2,6,18,20,15,10,7,5,6,7,10,10,6,2,1,1,2,4,8,10,3,3,4,4,5,3,0,3,6,7,7,8,9,6,3,0,-1,6,18,21,15,9,3,0,1,4,8,9,7,5,4,3,3,4,7,9,0,0,1,7,13,9,2,3,7,6,4,5,6,5,3,1,0,6,15,17,13,5,-4,-7,-3,0,5,6,5,3,2,2,2,2,5,6,-4,-3,0,12,25,17,4,4,6,4,1,1,3,3,2,1,0,4,11,12,10,1,-13,-18,-11,-4,1,3,1,0,0,0,0,0,1,2,-1,-7,-9,3,18,12,2,1,2,1,0,0,1,2,2,1,1,4,8,9,8,1,-10,-14,-9,-2,1,2,0,0,0,0,0,0,0,1,2,-9,-21,-10,2,1,-1,-1,0,0,0,0,0,0,0,1,1,3,6,7,6,2,-1,-3,-2,0,2,3,1,0,0,0,0,0,0,1,4,-6,-18,-12,-2,-1,-2,-2,-1,0,1,1,1,1,1,1,1,2,4,5,5,5,3,2,3,5,6,6,5,4,3,0,0,-1,0,0,5,-1,-6,-5,-3,-1,0,0,0,1,3,5,6,5,4,3,1,1,1,3,6,6,4,5,9,11,12,12,12,10,6,1,-2,-4,-4,-2,5,2,0,-2,-4,-1,1,2,2,3,3,6,10,10,7,4,1,0,0,3,6,6,5,7,12,14,13,11,11,9,6,1,-4,-7,-5,-3,5,3,2,-1,-6,-2,2,4,6,5,4,7,12,12,9,5,1,0,0,3,6,7,6,8,13,14,11,7,5,3,2,0,-5,-9,-6,-1,5,5,4,0,-6,-1,3,6,8,7,6,7,9,9,8,5,1,0,0,2,5,7,8,10,13,13,8,5,2,1,1,0,-5,-9,-5,-1,7,7,5,0,-4,-1,3,6,9,9,10,6,2,1,2,3,2,1,0,0,4,8,10,13,14,11,6,3,2,2,3,2,-3,-7,-4,0,9,8,6,1,-2,0,4,7,9,10,11,5,-3,-3,0,2,3,1,0,0,3,7,11,12,11,8,3,0,0,1,2,1,-2,-6,-4,0,12,11,9,4,0,1,5,8,9,10,9,3,-5,-4,0,2,2,1,0,0,1,4,8,8,6,3,0,-1,-1,0,0,0,-3,-6,-4,-2,12,11,9,4,0,3,8,9,9,8,6,1,-5,-3,0,1,2,1,1,1,1,2,5,6,4,1,0,-1,-2,-2,-2,-2,-4,-5,-5,-4,7,6,5,3,2,6,11,11,10,5,1,-1,-4,-3,0,0,1,2,2,2,1,2,5,6,3,2,1,0,-1,-2,-2,-2,-4,-6,-7,-7,2,1,1,1,1,5,11,10,7,2,-2,-3,-2,-1,0,0,1,2,3,3,1,3,6,7,4,3,2,0,0,-1,0,0,-3,-6,-9,-9],
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
