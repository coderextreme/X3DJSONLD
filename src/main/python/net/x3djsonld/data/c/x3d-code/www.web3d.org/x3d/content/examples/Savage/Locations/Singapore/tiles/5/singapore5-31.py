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
        texture=ImageTexture(url=['../../images/5/singapore5-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,104.0350900579996,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,8,10,11,11,11,10,5,0,1,3,0,-4,-6,-6,-4,-1,3,8,8,5,4,5,14,28,42,54,53,39,25,12,2,-5,-10,-12,-7,3,7,9,10,9,5,2,1,0,0,0,-2,-4,-4,-2,0,5,8,9,7,4,3,6,14,25,34,42,37,23,9,-4,-15,-24,-27,-22,-11,5,5,6,7,8,5,2,4,5,1,-2,-5,-7,-5,-1,2,6,8,8,7,7,8,11,14,20,24,27,21,8,-5,-20,-29,-33,-32,-27,-19,9,4,1,5,9,7,5,7,10,3,-4,-8,-11,-6,0,4,7,7,5,8,12,14,16,16,14,13,12,5,-6,-20,-36,-43,-40,-35,-33,-26,5,1,1,4,8,6,5,7,8,2,-5,-6,-5,-1,2,6,9,5,0,3,9,13,15,14,12,9,7,-1,-18,-33,-43,-48,-44,-39,-32,-20,1,0,0,4,7,6,4,5,6,0,-5,-2,1,3,6,8,10,3,-5,-1,6,11,14,13,10,7,5,-6,-29,-44,-49,-50,-49,-43,-29,-12,0,0,0,2,5,6,5,5,4,0,-3,-1,0,2,4,5,6,3,0,1,8,10,9,8,5,4,4,-5,-25,-38,-46,-48,-45,-36,-20,-3,0,0,0,0,3,6,8,5,2,0,0,-1,-3,0,2,1,0,2,5,8,11,9,4,1,1,1,2,-2,-14,-27,-41,-46,-39,-26,-9,6,1,2,4,5,8,11,13,7,1,0,0,0,-1,0,4,2,0,1,5,8,9,7,3,0,0,0,1,0,-6,-13,-21,-24,-18,-8,2,12,2,6,11,13,15,18,20,9,0,-1,0,0,0,3,8,4,-1,0,3,5,4,3,3,2,0,0,0,0,0,0,1,4,7,11,14,18,0,6,14,14,12,14,15,6,-2,-3,-2,0,2,5,8,5,0,0,3,3,3,2,1,1,0,0,0,1,3,5,9,14,17,19,19,19,-7,5,15,12,5,5,6,1,-4,-5,-4,0,3,5,6,4,1,1,2,2,3,1,0,0,0,0,0,1,4,7,10,14,18,20,20,19,-6,5,14,9,2,2,1,0,-2,-1,0,2,7,7,6,4,2,1,2,2,3,1,0,0,0,0,0,1,3,6,11,15,18,20,21,21,0,6,11,8,3,1,0,0,0,2,4,7,11,10,7,5,3,2,3,3,2,1,1,1,1,1,0,0,2,6,12,17,18,20,24,24,4,9,13,9,4,1,0,0,0,2,5,8,10,8,6,4,2,2,3,3,2,3,4,4,4,3,0,0,1,5,12,16,17,18,20,19,8,13,17,13,7,2,0,-2,-4,0,4,5,5,4,2,2,1,2,3,3,4,6,8,8,8,6,2,0,0,3,10,14,15,14,11,8,10,15,18,13,7,3,1,-1,-4,-1,2,1,-1,0,0,0,1,2,4,5,6,8,9,10,10,8,4,2,2,5,11,15,15,13,7,2,10,15,16,11,5,4,4,2,0,0,0,-5,-12,-8,0,1,3,4,6,7,9,9,9,9,11,10,7,6,7,10,15,18,18,15,6,1,10,12,13,8,4,5,7,4,1,0,0,-3,-10,-6,0,3,4,6,8,9,10,10,8,8,9,9,8,8,10,13,17,18,18,15,7,1,12,10,8,6,5,6,7,4,0,4,8,7,4,3,4,4,4,6,9,10,11,10,7,5,4,4,5,7,10,13,16,17,16,13,7,3,16,10,5,4,5,7,8,5,0,5,12,14,13,11,6,5,5,7,10,10,11,10,9,5,1,0,1,4,8,11,14,15,13,11,8,4,20,12,3,3,4,7,9,6,1,5,11,13,13,11,7,6,6,7,10,11,11,11,12,7,0,-2,-2,0,3,7,11,13,12,10,7,5,20,11,3,2,4,7,9,6,2,5,8,10,12,10,8,7,7,8,9,10,10,11,13,8,-1,-6,-6,-4,0,3,8,10,10,8,6,4],
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
