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
        texture=ImageTexture(url=['../../images/5/singapore6-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.63292510238706,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[-9,-3,1,6,9,4,-2,-2,0,1,3,7,11,10,7,4,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,-7,-2,3,8,10,5,-1,-1,0,1,3,6,10,9,7,3,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-2,2,8,11,12,5,-1,-1,0,1,3,4,4,5,5,2,-1,-1,0,0,0,0,0,0,-1,-1,0,0,0,1,0,0,0,0,0,0,0,7,12,16,17,15,6,-1,-1,1,3,4,0,-7,-4,2,3,0,0,3,3,2,0,0,0,-1,-1,0,1,1,1,1,0,0,0,0,0,0,14,19,21,19,15,5,-3,-1,2,4,5,-2,-14,-9,0,3,3,4,5,5,4,2,0,0,-1,0,0,1,2,1,1,0,0,0,0,0,0,13,15,15,13,8,0,-10,-6,0,4,6,2,-3,-2,1,3,4,5,5,6,6,6,4,3,0,0,0,0,0,0,0,1,0,0,0,0,0,12,12,9,6,1,-7,-15,-10,-2,2,6,6,6,4,3,4,6,7,6,7,8,9,9,6,3,1,0,0,0,0,0,0,0,0,0,0,0,16,13,8,4,0,-5,-12,-8,-1,0,0,2,3,4,3,5,7,9,9,9,9,8,7,5,3,2,2,2,1,0,0,0,0,0,0,0,0,18,13,6,1,-1,-5,-8,-5,-1,-1,-2,0,2,4,5,7,9,10,12,11,8,6,5,4,3,4,5,4,2,0,0,0,0,0,0,0,2,10,7,2,-2,-5,-5,-4,-2,-1,0,0,2,5,6,6,7,8,9,10,9,5,3,2,2,3,3,4,4,2,0,0,0,0,0,0,1,2,4,1,-1,-5,-8,-5,-1,0,-1,0,3,6,8,8,7,7,7,8,9,7,2,0,0,0,1,2,3,3,1,0,0,0,0,0,1,2,2,12,8,2,-2,-7,-6,-2,-3,-4,-1,3,5,6,4,1,1,5,7,10,8,5,2,0,0,0,0,1,2,1,0,0,0,1,3,2,2,2,21,15,7,0,-5,-6,-4,-5,-6,-3,1,2,3,0,-6,-3,2,6,10,10,8,4,1,0,-1,-1,0,0,1,1,2,3,5,6,4,1,1,16,11,5,0,-3,-4,-6,-6,-5,-3,0,0,1,0,-3,-1,4,7,10,10,9,6,4,2,0,0,0,0,0,2,6,9,10,9,6,4,2,9,6,1,0,0,-3,-6,-5,-3,-3,-2,0,1,1,0,2,6,8,9,10,9,8,6,5,4,1,0,0,0,2,10,16,15,12,9,6,3,12,7,2,0,0,-1,-3,-4,-3,-2,-1,0,0,0,0,1,5,8,10,10,9,9,8,6,3,0,0,0,0,4,10,14,13,11,8,6,3,15,10,4,2,1,0,-1,-2,-2,-1,0,0,0,-1,-2,0,3,7,10,10,10,9,9,6,1,0,-1,0,2,6,10,12,10,8,6,4,3,13,10,6,4,2,0,0,0,-1,-1,0,0,-1,-1,-2,1,6,8,7,8,11,12,11,8,4,1,0,1,4,6,7,6,4,3,3,3,3,10,10,8,6,3,1,0,0,0,-1,-1,-1,-3,-2,0,3,10,8,3,5,12,16,15,11,7,4,4,5,7,7,4,1,-1,-2,0,3,4,8,8,8,6,4,2,1,0,0,-1,-1,-2,-3,-1,0,0,2,0,-3,0,7,11,13,11,8,6,5,6,6,5,3,0,0,0,1,4,4,6,6,7,6,5,4,2,1,0,-1,-3,-3,-2,-1,0,-3,-8,-10,-11,-7,0,5,8,9,8,7,6,6,5,4,2,0,0,1,3,5,5,2,2,2,1,0,1,2,2,1,0,-1,-2,-2,-1,-1,-3,-6,-7,-7,-4,0,3,5,7,7,7,6,5,5,3,2,1,2,3,5,6,5,0,-1,-3,-4,-3,0,2,4,4,2,0,-1,-2,-3,-4,-2,-1,0,1,1,1,1,3,4,5,6,6,5,4,3,3,3,4,6,7,7,4],
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
