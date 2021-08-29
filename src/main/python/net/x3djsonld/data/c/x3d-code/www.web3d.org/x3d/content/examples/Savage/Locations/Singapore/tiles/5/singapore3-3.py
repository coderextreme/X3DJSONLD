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
        texture=ImageTexture(url=['../../images/5/singapore3-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.238458400333982,103.63292510238706,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[1,0,0,0,0,0,0,0,0,1,3,5,8,6,3,5,10,12,12,10,7,5,4,3,3,3,3,3,3,0,-2,-5,-4,-2,0,1,2,1,0,0,-1,-1,-1,-2,-1,0,1,3,6,9,8,6,7,9,10,10,9,7,5,2,1,1,2,2,3,3,0,-4,-8,-7,-3,0,2,4,2,1,0,0,-1,-2,-2,0,0,2,4,5,7,7,6,6,6,7,6,6,7,5,2,2,2,3,3,1,0,-2,-3,-3,-1,0,1,2,3,3,3,1,0,-2,-2,-1,0,0,2,4,5,5,5,5,5,5,4,2,3,6,5,3,2,3,3,3,0,-3,-4,-2,0,2,4,4,2,1,1,1,1,0,0,0,0,0,0,1,2,3,3,3,4,5,6,5,2,2,5,5,4,3,4,4,3,0,-2,-2,0,2,4,4,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,6,9,7,3,2,4,5,4,4,5,5,3,1,0,0,2,5,5,4,2,1,2,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,4,5,4,1,1,4,5,5,5,5,3,2,0,0,0,2,3,3,1,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,2,2,3,1,0,0,3,5,4,4,3,2,1,0,0,0,2,3,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,1,2,3,3,3,1,0,1,5,6,5,4,3,2,0,0,0,0,1,2,1,0,0,0,1,0,0,0,0,1,1,1,1,0,1,1,1,3,4,6,5,3,2,0,2,6,7,5,4,3,1,0,0,0,0,1,2,1,1,1,0,2,-1,0,0,0,1,2,2,2,0,0,0,0,2,3,5,4,2,0,0,2,5,7,5,4,4,3,2,1,0,0,0,1,1,1,1,1,3,-3,-2,0,0,1,2,3,2,0,0,-1,0,1,2,3,2,0,0,-1,0,4,6,5,5,5,5,4,2,0,0,0,1,0,0,0,1,3,-2,-1,0,0,0,0,1,1,0,0,0,0,1,2,2,1,0,0,-1,0,3,4,4,4,5,6,6,4,1,0,1,3,2,0,0,0,1,0,0,0,0,-1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,2,2,2,5,7,8,6,3,1,4,6,4,1,-2,-5,-3,0,0,0,0,-1,-1,0,0,0,0,1,1,2,1,0,0,0,0,0,0,3,3,2,2,2,3,6,7,5,4,5,5,3,0,-2,-4,-2,2,0,1,0,0,0,0,0,0,0,2,3,3,2,0,0,0,0,0,2,5,5,3,0,-1,0,4,7,7,7,5,3,0,-2,-3,-2,0,4,3,2,1,0,0,0,0,-1,0,3,5,5,3,0,0,1,1,0,3,6,6,5,2,0,0,2,5,7,7,7,4,1,-1,-2,-2,0,7,5,3,2,3,3,2,0,0,1,5,6,6,4,0,1,2,2,2,3,6,7,6,4,1,0,0,2,6,9,9,7,4,1,0,-2,-2,9,7,6,6,6,5,3,0,0,1,4,5,3,1,0,0,1,2,2,4,6,7,7,6,3,1,0,3,8,11,11,9,6,3,0,0,-1,10,10,9,10,11,9,5,1,0,0,3,2,0,0,0,0,0,0,1,4,7,8,8,6,3,2,2,6,12,15,13,10,7,5,2,0,0,9,9,8,9,10,8,5,1,0,1,3,1,-1,-1,-1,-1,0,0,0,2,6,8,8,6,3,3,5,8,13,14,12,9,6,4,3,1,0,6,4,2,4,6,6,4,1,0,1,4,2,0,0,0,0,0,0,-2,0,2,4,5,4,3,4,8,11,11,9,7,4,3,2,2,1,0,5,4,3,4,5,4,3,1,0,1,3,2,1,0,0,0,0,-2,-7,-6,-1,1,3,4,3,5,9,10,8,5,4,3,2,1,1,1,0],
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
