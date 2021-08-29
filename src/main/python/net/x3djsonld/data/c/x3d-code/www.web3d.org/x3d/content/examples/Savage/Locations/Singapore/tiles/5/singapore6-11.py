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
        texture=ImageTexture(url=['../../images/5/singapore6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.264653537467964,103.74782937541922,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[9,10,10,11,11,12,12,11,11,12,13,15,17,13,5,2,2,2,2,2,2,2,2,2,2,1,1,1,0,0,0,0,0,0,0,0,0,9,10,11,11,12,11,11,11,12,13,14,15,15,12,7,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,11,11,12,12,11,11,11,12,13,14,14,12,10,8,6,2,1,1,1,1,1,1,1,1,1,1,1,3,4,3,3,2,2,2,2,2,11,11,12,11,11,11,11,12,12,13,13,12,11,10,8,5,3,1,0,0,0,0,0,0,0,0,0,1,5,8,6,5,3,3,3,3,2,11,12,12,11,11,11,12,12,13,13,13,12,11,9,7,5,3,1,0,0,0,0,0,0,0,0,0,1,7,11,9,7,5,3,3,3,3,12,11,11,11,11,11,12,12,12,12,12,11,10,9,7,5,3,1,0,0,0,0,0,0,0,0,0,1,6,11,10,9,7,5,3,3,3,12,11,11,11,12,12,12,12,12,12,11,10,9,8,7,5,3,2,1,0,0,0,0,0,0,0,0,1,6,10,11,11,9,7,5,3,3,11,11,11,11,12,12,12,12,12,12,11,10,9,8,6,5,3,2,1,0,0,0,0,0,0,0,0,0,3,6,9,11,10,9,7,5,3,11,11,12,12,12,12,12,12,12,11,10,9,8,7,6,4,3,2,1,0,0,0,0,0,0,0,0,0,1,3,7,10,11,11,9,7,5,11,11,12,12,12,12,12,12,11,11,10,9,8,7,6,4,3,2,1,0,0,0,0,0,0,0,0,-1,0,0,3,6,9,11,10,9,7,12,12,12,12,12,12,12,11,11,10,9,9,8,7,5,4,3,2,1,0,0,0,0,0,0,0,-1,-2,-2,-2,0,3,7,10,11,11,9,12,12,12,12,12,12,11,11,11,10,9,8,7,6,5,4,3,3,3,4,6,6,6,6,6,5,2,0,-1,-2,-1,0,4,7,9,11,10,12,12,12,12,11,11,11,11,10,10,9,8,7,6,5,4,3,4,5,8,11,13,13,13,12,11,7,3,0,-3,-2,-2,0,4,7,10,11,12,12,11,11,10,9,9,8,7,7,7,8,9,9,8,7,7,7,8,10,13,14,14,14,13,12,10,7,2,0,-1,-2,-1,0,4,7,9,12,12,11,9,8,7,6,5,4,4,5,8,11,12,11,11,11,11,12,12,13,14,14,14,13,13,12,11,7,3,0,-3,-2,-2,0,4,7,10,9,8,6,4,3,3,2,2,2,2,5,8,10,11,12,12,12,12,13,13,13,14,14,14,13,13,12,9,7,2,0,-2,-3,0,0,4,8,7,5,3,0,0,0,0,0,0,0,1,4,7,11,12,12,12,12,12,12,12,13,14,14,14,13,12,11,10,6,2,0,-3,-2,-1,0,5,5,3,1,0,0,0,0,0,0,0,0,1,4,8,10,11,12,12,12,12,12,12,13,13,14,13,13,12,11,8,6,2,0,-2,-2,0,3,3,2,1,0,0,0,0,0,0,0,0,0,1,4,7,11,12,12,11,11,11,11,11,12,13,14,14,12,11,10,9,5,2,0,-3,-1,3,3,2,1,1,0,0,0,0,0,0,0,0,0,1,4,8,10,11,11,11,11,11,11,11,12,13,14,12,12,10,9,6,4,0,-1,-1,3,3,2,2,2,1,0,0,0,0,0,0,0,0,0,1,4,7,11,12,11,10,10,10,10,10,11,12,13,14,11,9,7,6,3,1,0,4,3,3,3,2,1,1,0,0,0,0,0,0,0,0,0,1,4,8,10,11,11,10,9,9,9,10,11,12,13,11,11,8,5,4,3,1,5,4,3,3,2,2,2,1,0,0,0,0,0,0,0,0,0,1,4,7,10,11,10,9,8,8,8,9,10,11,12,13,8,3,5,5,6],
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
