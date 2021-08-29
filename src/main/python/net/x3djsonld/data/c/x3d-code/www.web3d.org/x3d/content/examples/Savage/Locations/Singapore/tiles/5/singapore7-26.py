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
        texture=ImageTexture(url=['../../images/5/singapore7-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.9632748873545,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,5,6,7,8,9,8,1,-4,-2,1,4,6,5,2,0,0,0,2,4,6,7,6,6,5,5,9,11,8,6,6,5,7,9,5,2,4,6,7,9,10,11,11,6,0,0,0,1,3,3,2,2,1,1,3,6,9,9,7,5,4,4,9,11,8,6,6,6,8,9,6,4,4,8,10,12,13,15,16,14,11,5,0,-1,0,0,3,4,5,6,7,9,14,13,10,6,3,2,8,10,8,7,8,9,8,8,6,6,5,6,7,10,12,14,16,16,16,10,2,0,0,2,6,8,8,8,8,10,13,10,1,-2,-1,0,5,9,8,9,11,13,10,8,7,6,5,3,2,5,9,11,13,17,19,14,7,6,7,8,10,11,12,11,8,8,9,1,-13,-18,-7,0,2,6,10,14,16,16,13,9,7,5,5,3,2,5,7,9,10,13,15,13,9,9,10,11,12,11,11,10,8,6,3,-5,-20,-22,-9,0,3,7,11,14,15,15,12,8,6,3,5,5,5,6,7,7,6,7,8,8,9,9,10,11,12,10,6,6,8,4,-3,-11,-21,-20,-9,0,5,9,10,10,11,12,9,6,3,0,6,6,6,7,8,7,5,5,4,6,8,10,12,20,27,22,12,8,9,4,-3,-10,-15,-14,-5,1,7,8,6,4,4,5,4,5,2,1,7,6,5,7,9,8,7,5,4,6,8,11,16,33,52,45,24,13,11,6,0,-3,-6,-5,0,4,6,6,0,-4,-5,-3,1,4,3,2,7,5,4,6,8,9,9,6,4,6,8,12,17,35,54,46,26,14,9,5,3,1,0,0,2,6,8,7,-1,-10,-18,-21,-8,2,4,4,3,3,3,4,5,8,10,7,5,6,8,12,16,25,34,29,19,11,6,4,6,4,0,0,1,5,12,12,0,-14,-36,-49,-22,-1,2,6,4,4,3,4,5,7,9,7,6,6,8,10,14,15,16,15,13,8,2,2,6,6,1,0,2,6,13,13,4,-9,-33,-48,-23,-2,1,6,10,7,5,6,7,6,5,7,9,8,7,8,10,8,6,6,8,5,0,0,3,5,3,3,6,8,10,10,8,2,-9,-18,-8,0,1,3,14,10,7,8,9,7,5,8,11,9,6,6,7,4,1,2,4,3,0,0,1,4,4,5,7,8,6,6,9,10,7,3,1,0,1,2,15,12,9,10,12,10,8,10,12,9,6,5,5,3,0,0,2,2,1,1,1,2,4,6,7,6,2,2,6,9,11,10,4,0,1,3,14,12,11,11,12,11,11,12,13,11,7,6,5,4,2,1,1,2,4,4,2,2,4,5,5,3,0,-1,3,8,12,13,6,0,2,4,12,12,11,11,10,12,13,15,16,14,10,9,8,7,6,4,3,4,5,6,6,6,5,5,4,1,-3,-5,0,6,11,14,8,3,3,5,10,10,10,9,8,11,15,17,19,16,13,11,9,8,8,7,6,6,6,7,7,6,5,4,4,1,-5,-7,0,5,11,15,11,7,5,5,8,6,5,6,7,10,13,17,19,16,12,9,8,8,8,8,8,7,6,5,4,3,4,5,6,4,-2,-5,0,3,11,17,14,11,7,4,6,4,2,5,8,11,13,17,19,16,10,8,7,8,8,9,9,7,5,3,0,0,3,6,8,7,0,-2,0,3,12,18,16,14,9,3,5,5,6,8,10,13,15,17,18,16,13,11,10,8,8,8,6,5,4,2,0,1,4,6,8,7,1,0,3,8,13,17,14,11,9,6,5,7,10,12,14,16,18,17,17,16,14,13,12,10,8,7,5,3,3,2,4,5,6,7,7,6,2,1,6,11,14,16,12,8,9,9],
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
