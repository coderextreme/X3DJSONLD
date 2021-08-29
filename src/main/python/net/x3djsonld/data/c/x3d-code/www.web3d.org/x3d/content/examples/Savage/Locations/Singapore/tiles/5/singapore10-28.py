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
        texture=ImageTexture(url=['../../images/5/singapore10-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.99200095561254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,8,3,0,2,7,6,5,9,13,8,2,0,0,2,6,3,-1,-3,-3,0,3,8,13,13,11,8,6,5,6,7,8,9,11,13,12,3,3,1,0,4,9,4,0,4,8,6,4,3,4,4,6,3,-2,-3,-1,1,6,10,13,13,9,6,6,5,4,5,7,8,9,10,10,0,0,0,2,6,11,3,-4,-1,1,3,5,7,9,8,7,3,-2,-1,1,5,9,12,13,12,7,4,5,4,2,1,5,8,7,7,8,0,0,1,5,6,8,3,-2,-1,0,1,5,8,10,10,8,3,0,0,4,6,9,10,11,9,4,2,2,2,0,0,4,7,5,4,7,1,0,4,8,6,3,2,1,0,0,1,4,7,10,10,8,4,1,2,5,6,8,7,7,5,1,0,0,0,0,0,3,6,3,1,6,5,4,6,8,5,1,0,-1,0,0,1,3,4,6,7,7,5,2,3,5,6,6,6,6,4,1,0,0,0,0,1,2,2,0,-2,3,11,10,8,7,4,0,-2,-6,-3,0,1,2,1,1,3,6,5,3,3,5,6,5,4,5,4,4,2,0,0,2,4,0,-1,-5,-7,0,10,11,9,6,1,-2,-5,-7,-4,0,0,2,2,1,3,6,6,4,4,4,5,5,4,3,4,4,5,2,2,5,7,2,0,-4,-4,0,7,10,8,6,0,-6,-7,-7,-4,-1,0,2,3,4,5,7,6,4,3,2,3,5,5,2,2,5,7,6,6,8,9,5,1,0,0,2,4,5,5,4,0,-4,-5,-5,-2,-1,0,2,3,4,5,7,5,3,1,1,1,2,1,0,1,5,7,8,8,9,8,4,1,1,1,2,0,0,1,2,0,0,-1,-1,0,0,0,2,3,5,5,5,3,0,0,0,0,-2,-2,-2,0,4,7,8,9,7,6,2,0,1,2,0,2,0,2,4,3,3,2,2,1,1,1,2,2,3,4,5,3,0,0,0,0,-1,-1,-1,0,3,5,6,6,6,5,2,0,1,2,0,6,3,5,7,7,7,6,5,4,3,2,1,0,0,2,6,4,0,0,0,2,2,1,1,0,1,2,3,3,5,5,3,2,2,1,2,8,7,9,10,10,9,8,5,4,3,2,0,0,0,0,3,2,0,0,1,2,3,3,2,2,2,1,0,0,1,1,1,1,1,2,3,9,11,12,14,12,10,7,4,3,2,1,0,0,0,-1,-2,-2,-1,0,1,2,2,2,2,4,5,3,-1,-4,-4,-4,-2,0,3,5,4,9,14,15,17,13,10,7,5,3,1,0,0,0,-1,-3,-4,-4,-2,0,0,1,2,2,2,4,6,4,-1,-5,-4,-3,-3,-1,1,4,2,7,17,18,18,14,10,8,7,3,0,0,0,-1,-3,-4,-4,-3,-2,0,0,0,2,3,3,3,6,5,0,-1,0,0,0,-1,0,0,-1,8,18,19,18,14,10,9,9,5,0,0,0,0,-4,-4,-4,-3,-1,-1,0,0,2,3,3,5,7,8,3,2,5,6,3,0,-1,-3,-4,11,18,18,19,15,9,10,11,8,3,2,1,0,-1,-2,-3,-2,-1,0,0,0,0,2,5,8,10,11,7,7,11,12,8,3,-1,-5,-6,12,15,16,17,14,11,11,11,9,6,4,3,2,1,0,0,0,0,0,0,0,0,2,6,9,11,12,9,9,13,14,10,5,0,-3,-4,11,10,11,13,14,14,11,9,8,7,6,4,4,5,5,5,4,2,1,0,0,1,3,6,9,10,10,9,9,10,11,8,5,3,2,1,10,8,8,9,11,13,10,7,7,7,7,6,7,8,8,8,8,6,4,3,3,4,5,8,9,9,8,7,6,7,7,5,3,4,5,6,10,10,8,7,7,7,7,7,7,7,7,8,10,11,11,11,10,9,9,9,9,9,10,10,10,10,7,2,1,3,4,2,1,3,5,9],
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
