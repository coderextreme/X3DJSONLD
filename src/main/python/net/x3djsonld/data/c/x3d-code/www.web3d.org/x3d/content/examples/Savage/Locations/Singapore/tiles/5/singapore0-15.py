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
        texture=ImageTexture(url=['../../images/5/singapore0-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2122632632,103.80528151193529,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[16,8,0,0,0,1,2,1,0,2,4,6,8,6,2,3,6,6,7,6,6,4,1,8,21,23,14,7,4,0,-2,-4,-3,0,1,3,4,21,11,1,0,0,1,2,1,0,1,2,3,4,3,1,2,5,5,4,5,6,5,4,5,9,10,7,4,1,0,-1,-3,-3,-2,0,3,5,20,11,2,1,0,0,1,1,1,2,3,3,4,3,1,1,3,3,4,7,11,9,6,5,4,4,3,2,1,0,0,-1,-2,-3,0,2,4,16,9,1,0,0,0,1,2,3,4,4,4,3,3,2,2,1,2,5,10,15,14,8,5,3,2,1,1,1,2,1,0,-2,-3,0,1,3,11,1,-6,-14,-19,-8,3,4,4,5,6,4,2,2,1,1,1,3,6,11,15,13,6,2,1,0,2,2,2,1,1,0,0,-1,0,3,5,5,-7,-20,-34,-44,-20,5,7,6,7,7,4,1,0,1,1,1,3,8,11,13,9,2,0,0,1,3,4,2,1,1,1,0,0,3,6,7,-3,-19,-35,-47,-55,-27,4,7,8,8,7,4,0,0,1,1,1,3,7,9,9,6,1,0,1,2,4,4,3,1,1,1,1,2,5,8,9,-13,-32,-51,-57,-58,-29,2,7,8,7,6,4,0,1,3,2,1,2,5,5,4,4,2,2,3,4,4,4,3,2,1,1,1,3,6,9,9,-21,-42,-60,-57,-50,-24,1,5,6,5,4,3,0,1,4,3,0,0,1,2,2,3,3,2,2,2,2,2,2,2,1,0,0,2,6,8,8,-28,-48,-64,-52,-34,-15,2,3,1,0,1,1,1,2,4,3,0,0,-1,0,2,3,3,1,0,0,0,1,2,2,1,0,0,1,5,7,7,-26,-41,-51,-35,-17,-5,4,3,0,0,0,0,1,2,3,2,0,0,-2,0,2,2,2,1,0,0,0,1,2,2,1,1,1,2,4,6,6,-19,-24,-25,-13,0,3,5,5,3,2,1,1,2,2,1,0,1,0,-1,0,1,1,2,1,0,0,1,2,2,2,2,3,4,4,5,6,5,-10,-11,-9,-1,5,5,4,3,3,3,2,2,2,2,0,1,2,1,0,0,0,1,1,1,1,1,1,2,2,2,3,4,4,4,5,5,4,0,-2,-3,0,2,1,0,0,1,1,1,2,2,2,2,2,4,3,0,0,1,2,1,1,2,2,2,1,1,2,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,1,1,1,1,0,2,5,4,1,2,3,2,1,1,2,1,1,0,1,2,3,3,3,2,2,1,1,2,0,-1,-2,-2,-2,-1,0,0,0,0,0,0,0,-1,0,2,3,3,3,4,4,2,1,0,0,0,0,0,2,2,3,3,2,1,0,0,1,0,-1,-2,-2,-1,0,0,0,0,1,0,0,-1,-2,0,2,4,4,4,4,4,2,1,0,0,0,0,0,1,2,2,2,2,0,0,0,0,0,0,0,0,0,1,0,0,0,2,1,0,0,-1,0,5,6,5,4,2,2,2,2,0,0,1,2,2,2,1,1,2,3,1,0,0,0,0,0,0,0,0,2,2,1,2,3,3,1,0,0,1,6,6,5,3,1,0,2,1,0,0,2,3,3,2,1,2,3,4,2,0,0,-1,0,0,0,0,1,3,3,3,3,4,3,1,0,0,0,3,3,3,3,1,0,0,-1,-1,0,2,4,3,3,4,5,5,5,3,0,0,-1,-1,0,0,0,1,3,3,3,3,4,3,1,0,0,0,0,1,3,3,1,0,-2,-2,-3,0,3,4,4,4,5,6,6,5,3,1,0,0,0,0,0,0,0,2,1,1,2,3,2,0,0,0,0,0,1,3,3,1,0,-1,-2,-3,-1,1,3,3,4,4,4,4,3,2,0,0],
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
