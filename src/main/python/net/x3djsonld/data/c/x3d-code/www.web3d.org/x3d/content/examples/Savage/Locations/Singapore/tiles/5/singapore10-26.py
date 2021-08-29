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
        texture=ImageTexture(url=['../../images/5/singapore10-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.9632748873545,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[-4,-5,-6,-1,1,2,2,3,4,3,1,0,-2,-5,-9,-13,-16,-12,-4,2,9,14,16,16,16,15,13,12,10,10,9,9,9,8,6,6,-4,-2,-1,3,7,9,10,7,4,3,1,0,0,-2,-4,-6,-7,-4,0,5,11,14,14,15,16,15,12,9,7,6,7,7,7,7,6,6,-2,0,4,8,13,17,19,12,4,2,0,0,0,0,0,0,1,3,6,9,12,13,13,13,15,14,10,5,3,2,4,5,6,6,6,6,1,6,11,15,18,18,18,11,3,0,-1,-1,0,0,0,1,3,5,7,9,11,13,12,12,11,9,6,2,1,1,3,5,6,6,6,6,6,12,18,20,22,17,11,6,1,-1,-4,-3,0,0,0,0,2,4,7,9,10,12,12,10,6,2,1,0,1,1,4,5,5,5,5,5,13,17,21,20,19,13,7,4,2,0,-1,-1,0,0,0,0,0,2,5,8,11,12,12,9,6,3,0,0,1,3,4,5,5,5,5,5,20,22,23,17,12,8,4,3,4,3,2,0,-1,-1,-2,-1,0,0,3,7,13,14,11,8,8,6,1,0,2,5,5,5,6,6,5,4,22,21,18,13,7,4,2,2,3,1,0,-1,-2,-3,-4,-3,-1,0,1,5,12,13,8,5,5,4,0,0,3,5,5,5,5,6,6,6,23,17,11,7,3,2,2,1,1,-2,-6,-6,-4,-4,-5,-5,-3,-2,0,3,11,12,6,2,0,0,0,0,3,4,4,4,5,5,7,8,19,12,6,3,1,1,1,0,0,-2,-6,-4,-1,-1,-3,-5,-5,-4,-1,4,13,14,9,4,1,0,2,4,4,4,4,4,4,4,7,9,11,7,3,1,1,1,0,0,-1,-1,-1,0,2,1,0,-4,-8,-7,-1,6,15,18,14,10,6,5,8,9,6,5,5,4,3,2,6,9,6,3,1,1,1,0,0,0,0,1,3,6,8,6,3,-1,-4,-4,0,4,13,16,13,10,6,5,7,8,7,6,5,5,4,5,9,13,3,1,1,1,0,0,0,0,2,5,9,12,14,11,7,4,3,0,0,1,8,11,9,6,3,2,3,5,7,7,6,5,7,9,14,19,1,1,1,1,0,0,0,2,5,8,11,12,13,10,5,7,11,6,-1,-5,-1,0,0,0,0,1,2,4,7,7,6,6,10,14,17,20,1,1,1,0,0,1,2,4,7,8,10,9,8,4,1,7,18,12,-4,-14,-17,-16,-12,-7,-2,1,4,7,7,7,7,9,15,19,18,17,1,1,1,0,0,2,4,5,8,8,8,6,4,2,0,7,16,10,-5,-17,-22,-23,-18,-12,-4,1,5,8,7,7,8,10,14,17,16,15,1,0,0,1,1,3,5,6,7,7,6,4,2,2,3,6,7,2,-7,-14,-18,-21,-19,-14,-5,1,6,8,8,8,8,9,9,10,12,14,1,0,0,1,3,4,6,6,6,5,4,3,1,2,4,3,1,-3,-8,-11,-15,-16,-17,-13,-4,1,5,8,9,10,8,7,5,5,7,10,0,1,1,2,4,5,5,5,5,4,3,2,2,2,1,0,-4,-7,-9,-10,-12,-12,-11,-8,0,3,5,7,11,13,9,5,3,2,2,2,2,2,2,3,5,5,5,4,4,3,2,2,2,0,-1,-4,-7,-9,-10,-10,-10,-9,-7,-3,0,4,4,6,12,14,9,4,2,0,0,-1,5,4,4,4,5,5,4,4,3,3,2,1,0,-1,-4,-7,-9,-10,-10,-10,-9,-7,-3,0,1,3,3,5,10,12,9,5,1,-1,-2,-2,11,9,7,6,5,5,4,3,3,2,2,0,-1,-4,-8,-9,-10,-10,-9,-9,-8,-6,-1,0,2,2,2,3,6,8,7,5,0,-2,-2,-2,18,15,12,8,5,4,4,3,2,2,0,-1,-5,-7,-9,-10,-10,-10,-9,-8,-6,-3,0,1,1,1,1,1,1,2,2,2,0,0,-1,-3],
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
