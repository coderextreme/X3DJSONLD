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
        texture=ImageTexture(url=['../../images/5/singapore9-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,103.9632748873545,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[9,8,7,4,0,-3,-8,-4,0,0,0,4,12,16,19,16,11,9,8,7,4,4,6,9,11,12,10,8,7,5,2,1,6,9,9,8,9,8,6,2,0,-2,-5,-2,0,0,0,3,8,13,16,15,11,10,10,9,6,7,9,10,10,10,9,7,6,5,2,1,6,9,8,7,8,6,4,2,0,0,1,2,4,3,2,1,1,5,10,11,8,10,13,14,13,12,12,10,9,9,8,8,9,8,5,2,5,7,4,3,7,7,7,5,4,5,8,9,10,8,6,2,0,1,6,8,7,10,14,16,16,15,12,9,7,6,6,7,10,10,6,3,5,6,3,1,6,9,12,11,9,11,15,16,16,14,10,5,1,2,6,7,7,9,13,15,16,14,10,6,3,1,2,4,8,10,6,3,5,5,2,0,5,10,15,13,11,14,17,18,19,16,11,7,3,4,7,7,8,10,15,16,15,12,8,4,0,-2,0,1,6,8,5,3,5,6,5,3,4,10,14,12,10,12,15,16,17,14,9,7,5,5,7,9,11,15,20,19,13,8,6,2,-1,-3,-1,0,2,4,5,6,7,8,9,9,6,11,15,12,10,11,13,14,14,11,6,5,6,6,7,10,13,17,21,18,9,5,4,2,0,-1,0,1,1,3,7,10,9,8,10,12,10,14,17,14,11,11,13,13,12,7,1,3,6,7,8,9,11,14,16,13,4,1,1,1,2,3,4,5,6,7,13,15,10,5,8,9,14,16,17,14,11,11,11,10,9,4,0,2,7,8,8,9,11,12,10,6,1,0,-1,0,4,7,6,7,8,11,15,18,11,6,6,5,19,16,13,10,7,7,8,7,7,4,2,6,11,10,8,11,14,12,5,1,0,-1,-4,-1,6,9,3,2,7,11,13,15,12,10,7,4,22,15,9,5,2,3,4,4,5,4,4,9,13,14,12,15,18,12,2,0,0,0,-3,-1,7,10,2,0,5,9,10,11,13,14,7,2,20,13,8,2,-1,0,0,1,3,4,6,9,13,17,21,22,21,12,0,-2,3,4,1,2,9,11,6,3,5,8,6,8,14,16,6,0,16,12,7,0,-4,-3,-1,0,0,3,6,9,12,18,24,24,20,10,-1,-2,6,9,7,7,10,11,8,6,5,5,4,6,13,17,7,0,12,10,7,1,-3,-3,-1,0,0,2,6,7,9,12,14,13,8,4,0,0,6,10,11,10,6,5,4,4,3,2,2,5,13,18,8,1,9,8,6,1,-2,-2,-1,0,0,2,5,6,5,4,2,0,-2,-2,0,2,7,10,13,11,3,0,0,1,0,0,2,6,13,17,10,4,8,6,3,0,-2,-2,-2,0,0,3,5,4,1,-2,-6,-7,-6,-5,-2,2,8,12,12,9,3,0,0,0,-1,-1,4,11,14,15,10,6,6,2,0,-1,-3,-2,-2,0,0,3,4,2,-2,-8,-14,-13,-10,-7,-5,1,10,13,11,8,5,3,2,0,-1,0,7,15,14,13,10,7,4,-1,-5,-5,-4,-2,0,0,1,1,2,-1,-8,-13,-17,-17,-14,-10,-7,0,8,12,10,8,7,6,6,5,3,3,9,14,13,12,9,7,0,-5,-11,-8,-5,-2,0,0,1,0,0,-5,-13,-16,-18,-18,-17,-13,-7,0,6,10,10,10,9,9,10,11,9,7,9,11,11,10,8,6,-2,-6,-10,-6,-2,0,0,1,3,2,0,-3,-8,-12,-14,-16,-17,-14,-6,0,7,12,13,13,12,12,12,12,10,9,10,10,10,9,7,6,-4,-5,-6,-1,1,2,2,3,4,3,1,0,-2,-5,-9,-13,-16,-12,-4,2,9,14,16,16,16,15,13,12,10,10,9,9,9,8,6,6],
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
