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
        texture=ImageTexture(url=['../../images/5/singapore7-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.94891185322548,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[3,6,5,4,2,0,0,0,4,8,9,9,9,7,5,3,1,0,0,3,4,4,3,2,2,0,0,4,7,9,10,7,4,4,4,4,4,4,6,4,3,3,4,3,2,5,8,9,8,7,6,5,4,2,0,1,3,3,2,2,3,3,0,0,6,13,18,21,11,4,3,3,4,4,4,6,2,1,5,9,9,8,8,8,6,4,3,2,4,6,5,3,1,2,1,0,0,4,4,0,0,9,19,30,34,16,4,3,3,4,4,4,4,0,-1,4,11,10,8,7,5,3,1,1,4,7,9,8,5,4,4,4,5,5,6,3,-3,-6,0,7,20,27,15,5,4,4,4,5,3,2,0,-2,3,10,8,6,3,0,-1,-1,1,7,9,11,10,8,7,7,9,12,13,10,3,-6,-14,-16,-14,0,9,9,8,6,4,5,5,4,3,0,-3,1,7,8,7,5,2,1,1,4,10,12,13,12,9,7,7,9,13,14,11,5,-4,-12,-16,-16,-5,1,6,8,7,5,5,5,7,7,0,-4,0,3,7,10,11,11,8,6,8,12,14,15,14,11,7,4,5,9,12,12,9,0,-5,-5,-4,-1,0,3,7,7,7,6,5,8,8,2,0,1,4,7,9,11,13,11,8,10,13,17,22,20,15,9,5,4,7,10,12,10,3,0,3,5,3,2,4,7,8,9,7,6,6,5,4,4,7,10,7,5,8,11,10,9,10,14,22,31,30,22,14,9,7,8,9,9,7,4,5,11,13,9,6,6,8,9,10,9,7,4,3,3,3,7,9,5,1,5,10,11,10,11,14,23,34,35,27,19,12,8,9,9,7,5,5,6,12,15,9,6,5,5,7,9,8,7,5,1,0,-2,0,3,0,-1,3,10,12,11,11,13,20,31,34,31,24,14,9,10,9,4,2,3,5,9,10,5,1,1,1,3,4,3,3,6,2,0,-4,-2,0,-1,-2,3,11,12,11,11,11,17,25,28,27,21,12,8,9,7,2,0,4,6,7,7,4,2,0,0,0,0,2,4,7,4,0,-2,0,0,0,0,5,12,12,10,9,11,13,16,17,15,11,7,5,6,4,0,0,5,9,7,6,7,7,2,-1,-2,-2,3,10,8,6,2,0,1,2,2,2,7,11,9,6,6,7,9,10,9,7,5,4,4,4,1,-1,-1,4,8,6,5,9,11,5,1,0,-1,6,14,11,9,4,1,3,5,4,3,5,6,4,1,2,3,5,6,7,6,5,4,3,2,0,0,0,1,3,1,1,9,13,10,8,5,3,10,15,12,11,5,1,3,5,5,4,2,0,-1,-4,-3,0,2,5,7,7,7,6,4,2,0,0,0,0,0,0,0,7,12,11,11,9,7,11,14,11,12,4,-1,1,3,4,4,0,-4,-11,-15,-12,-4,1,6,7,8,8,8,5,1,1,3,4,3,2,0,0,5,8,8,7,7,7,10,12,9,12,4,-1,0,1,3,3,-1,-7,-15,-21,-16,-5,1,7,9,9,9,10,8,4,3,5,7,6,4,0,0,2,5,5,6,6,7,9,10,8,9,5,1,1,2,3,3,0,-5,-11,-15,-11,-2,3,10,12,11,11,13,13,11,9,8,7,6,5,0,0,0,3,6,8,7,7,7,8,9,8,7,5,5,4,4,3,0,-2,-5,-7,-4,0,6,12,14,12,12,14,14,14,12,8,7,9,8,2,0,1,3,9,11,9,6,6,6,13,13,12,10,8,7,6,4,2,0,-1,-1,0,2,6,11,12,11,9,7,7,7,8,7,10,15,16,9,4,5,6,11,13,8,3,4,5,15,16,16,14,12,9,7,4,3,1,1,0,1,4,6,10,10,8,5,1,1,2,4,6,12,19,21,14,9,9,10,13,14,8,2,3,5],
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
