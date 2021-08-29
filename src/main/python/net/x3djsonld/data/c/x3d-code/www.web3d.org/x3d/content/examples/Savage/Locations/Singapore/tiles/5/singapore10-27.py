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
        texture=ImageTexture(url=['../../images/5/singapore10-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2995803869799398,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,6,6,6,6,10,14,13,10,8,5,5,7,9,11,10,7,6,6,4,2,2,0,0,-1,-2,0,1,3,7,12,14,11,7,4,2,6,6,5,5,7,9,13,18,15,13,8,2,1,1,3,6,7,7,7,7,4,0,-1,0,0,0,-1,0,0,1,5,13,18,15,13,7,3,3,6,5,5,9,13,18,22,18,14,8,2,0,-2,0,2,5,8,8,8,3,-4,-5,0,0,0,0,0,0,0,3,13,20,19,17,11,4,0,6,6,6,12,17,20,22,18,14,8,3,2,1,0,0,2,5,8,9,6,0,0,3,3,1,0,-2,-2,0,3,11,18,17,15,9,3,0,5,6,8,15,21,21,21,17,13,8,4,4,7,2,-1,0,3,7,10,11,9,9,9,7,2,0,-4,-5,0,4,9,14,12,10,5,2,1,5,6,6,11,15,17,19,16,14,7,1,3,6,4,1,3,6,10,13,14,12,10,8,4,0,-3,-6,-5,-1,2,6,10,9,9,7,6,5,4,4,4,4,4,11,17,16,15,7,-1,0,3,5,7,9,13,15,17,15,11,7,3,0,-3,-7,-7,-6,-2,0,3,6,7,9,11,13,11,6,4,3,2,2,9,15,14,12,4,-1,-1,1,6,11,13,14,14,12,9,6,3,0,-1,-5,-6,-7,-6,-2,0,2,4,4,6,8,10,10,8,4,1,3,4,9,13,10,5,1,-2,-2,-1,5,14,16,14,10,4,2,0,0,-2,-3,-4,-5,-6,-5,-1,0,2,3,2,2,3,5,7,9,6,3,4,6,8,10,6,2,0,0,0,0,5,12,13,9,4,0,-2,-1,-1,-2,-3,-4,-4,-4,-2,0,3,4,5,4,3,2,3,4,9,7,6,7,8,7,6,3,0,1,2,2,0,4,9,7,3,0,-3,-4,0,0,-1,-3,-3,-2,0,2,5,7,7,7,7,6,4,2,0,13,9,7,7,7,5,2,2,0,2,3,2,1,4,6,5,1,-1,-5,-4,-2,-1,-1,-1,0,1,5,8,11,12,11,10,10,10,7,4,2,19,13,7,6,5,2,0,1,2,2,3,2,2,3,5,4,3,0,-4,-5,-4,-3,-2,0,4,8,11,15,17,18,16,15,15,14,11,9,6,20,14,10,7,4,1,0,1,3,4,5,4,3,3,4,4,4,1,-2,-4,-4,-4,-3,0,5,9,13,17,20,22,19,16,15,13,11,10,8,17,14,13,9,4,2,0,2,4,6,7,6,4,4,4,5,5,3,0,-2,-4,-4,-4,-1,3,7,10,15,22,26,21,16,12,9,8,9,9,15,13,12,7,3,2,1,3,6,7,9,8,6,5,4,5,5,3,1,0,-3,-4,-3,-1,2,5,6,10,17,22,19,15,8,3,3,4,9,14,11,8,4,0,0,0,3,8,9,9,9,8,7,6,5,5,3,1,0,-1,-2,-1,0,2,3,2,4,8,12,14,13,2,-4,-4,-2,7,10,7,4,1,0,0,0,3,7,9,10,9,8,7,6,5,4,3,1,0,-1,-1,0,0,1,1,0,0,3,6,10,10,0,-4,-4,-2,8,2,1,0,0,0,0,0,1,5,7,9,9,8,7,6,6,6,3,0,0,-1,-1,0,0,0,0,0,0,2,3,6,6,2,0,1,4,11,-1,-1,0,0,-1,-1,0,0,3,5,8,8,8,7,6,6,6,3,0,-1,-1,-1,0,0,0,0,1,2,2,3,5,6,5,4,7,9,12,-2,-1,-1,-1,-1,-1,0,0,0,3,6,6,7,7,6,5,4,2,0,0,-1,0,0,0,2,3,4,4,4,4,5,6,8,9,11,13,11,-2,-2,-2,-1,-1,-1,-1,0,0,1,4,6,7,6,6,5,3,1,0,0,0,0,0,2,4,6,6,6,6,6,6,7,9,11,12,13,10,-3,-2,-2,-1,-1,-1,-1,-1,0,1,4,6,6,6,5,4,2,1,0,0,0,0,2,4,7,9,10,10,9,8,8,8,8,9,10,10,10],
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
